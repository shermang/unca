<?php

class UNCAWebformEmailMigration extends DrupalMigration {
  public function __construct($arguments) {

    parent::__construct($arguments);

    $table_name = 'webform_emails';
    // We're mapping from the 'webform' table as there's no 'webform_emails' table in D6
    $map_source_pkey = array(
      'wf.nid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
    );
    $this->map = new MigrateSQLMap($this->machineName,
      $map_source_pkey,
      MigrateDestinationTable::getKeySchema($table_name)
    );

    // Source query
    $query = Database::getConnection('default', 'legacy')->select('webform', 'wf');
    $query->join('node', 'n', 'n.nid = wf.nid');
    $query->fields('wf');

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query);

    // Set up our destination
    $this->destination = new MigrateDestinationTable($table_name);

    // Field mappings
    $this->addFieldMapping('nid', 'nid')
        ->sourceMigration('UNCAWebformNode');
    $this->addFieldMapping('eid', NULL)
        ->defaultValue(NULL);
    $this->addFieldMapping('email', 'email');
    $this->addFieldMapping('subject', 'email_subject');
    $this->addFieldMapping('from_name', 'email_from_name');
    $this->addFieldMapping('from_address', 'email_from_address');
    $this->addFieldMapping('excluded_components', 'details')
        ->defaultValue(NULL);

  }

  /**
   * Implements Migration:prepareKey().
   * 
   */
  public function prepareKey($source_key, $row) {
    // Manually add field for saveIDMapping (not working, possibly due to issues
    // with multi-col keys, or with the fact that in this instance we are mapping
    // a single-col src key to a two-col destination key.)
    $row->{"wf.nid"} = $row->nid;
    $key = array();
    foreach ($source_key as $field_name => $field_schema) {
      $key[$field_name] = $row->$field_name;
    }
    return $key;
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
  }

  public function prepare($entity, $row) {
    // Increment eid unique/pk field
    $query = db_select('webform_emails');
    $query->addExpression('MAX(eid)');
    $max = $query->execute()->fetchField();
    $entity->eid = $max + 1;
  }

  protected function query(){
    return parent::query();
  }

}
