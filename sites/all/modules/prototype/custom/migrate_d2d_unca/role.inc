<?php
/**
 * @file
 * Base class for migrating roles into Drupal.
 */

/**
 * 
 * 
 */
class UNCARoleMigration extends DrupalRole6Migration {

  /**
   * @param array $arguments
   * role_mappings - Array keyed by the legacy role name, with the destination
   *  role name as the value.
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments);
  }

  /**
   * Add conditions to the query generated DrupalRole6Migration by base class(es)
   *
   * @return QueryConditionInterface
   */
  public function query() {
    $query = parent::query();
    // Don't migrate the admin role, which has a different rid on the D6 sites
    // $query->condition('name', 'administrator', '<>');
    return $query;
  }

  // /**
  //  * Override DrupalRoleMigration::prepare
  //  *
  //  * @param $row
  //  * @return bool
  //  */
  // public function prepare($role, $row) {
  //   parent::prepare($role, $row);
  //   // if($role->name == 'administrator') {

  //   //   if (isset($this->roleMappings[$role->name])) {
  //   //     $destination_name = $this->roleMappings[$role->name];
  //   //     $destination_rid = db_select('role', 'r')
  //   //                        ->fields('r', array('rid'))
  //   //                        ->condition('name', $destination_name)
  //   //                        ->execute()
  //   //                        ->fetchField();
  //   //     drush_print_r($destination_rid);
  //   //     if ($destination_rid) {
  //   //       $role->rid = $destination_rid;
  //   //       // Make sure we don't change the destination name
  //   //       $role->name = $destination_name;
  //   //       $this->rollbackAction = MigrateMap::ROLLBACK_PRESERVE;
  //   //     }
  //   //   }


  //   // } else {
  //   //   parent::prepare($role, $row);
  //   // }
  // }
}
