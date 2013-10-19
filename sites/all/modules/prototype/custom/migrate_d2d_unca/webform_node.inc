<?php

class UNCAWebformNodeMigration extends UNCANodeMigration {

  protected $webform_src_roles;
  protected $role_map;

  public function __construct(array $arguments) {

    parent::__construct($arguments);

    $this->role_map = Migration::getInstance('UNCARole')->getMap();

    // Field mappings
    $this->addFieldMapping('webform', 'webform');
    $this->addFieldMapping('confirmation', 'confirmation');

  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
  }

  public function prepare($entity, $row) {

    parent::prepare($entity, $row);

    // Load d6 Webform data (migrate_d2d does not pick up this data automatically)
    $qry = Database::getConnection('default', $this->sourceConnection)
                     ->select('webform', 'wf');
    $qry->fields('wf');
    $qry->condition('wf.nid', $row->nid);
    $rslt = $qry->execute();
    $d6wfdata = $rslt->fetchAssoc();

    // Set Webform fields
    $entity->webform['confirmation'] = $d6wfdata['confirmation'];
    $entity->webform['teaser'] = $d6wfdata['teaser'];
    $entity->webform['submit_text'] = $d6wfdata['submit_text'];
    $entity->webform['submit_limit'] = $d6wfdata['submit_limit'];

    // Set correct role ids (Otherwise we get WF module's defaults, which are incorrect in some cases)
    $d6_roles = $this->GetSourceWFRoles();
    $d6_roles = $d6_roles[$row->nid];
    $d7_roles = array();
    foreach($d6_roles as $rid) {
      $d7rid = $this->role_map->lookupDestinationID(array($rid));
      // if src rid is not in map, it *should* mean it was already matched per
      // rid and name in the destination db.  So, we use the src rid, but first
      // check that it actually exists in the destination db.
      if(empty($d7rid)) {
        $d7role = user_role_load($rid);
        if( !empty($d7role) ) {
          $d7rid = $rid;
        }
      }
      if(!empty($d7rid)) {
        $d7_roles[] = $d7rid;
      }
    }
    $entity->webform['roles'] = $d7_roles;

  }

  /**
   * Get D6 Webform Roles.  We do this just once instead of hitting
   * the source db for every node.
   */
  protected function GetSourceWFRoles() {

    if(empty($this->webform_src_roles)) {
      // Get D6 webform roles
      $qry = Database::getConnection('default', $this->sourceConnection)
                       ->select('webform_roles', 'wfr');
      $qry->fields('wfr');
      $rslt = $qry->execute();
      $wfroles = array();
      while($data = $rslt->fetchAssoc()) {
        $wfroles[$data['nid']][]  = $data['rid'];
      }

      $this->webform_src_roles = $wfroles;
    }

    return $this->webform_src_roles;
  }


}
