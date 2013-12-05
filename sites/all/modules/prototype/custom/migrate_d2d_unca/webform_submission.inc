<?php

class UNCAWebformSubmissionMigration extends DrupalMigration {
  public function __construct($arguments) {
    parent::__construct($arguments);

    $this->source = new MigrateSourceSQL($this->query(), array(), NULL, array('map_joinable' => FALSE));

    $table_name = 'webform_submissions';

    // Map
    $map_source_pkey = array(
      'sid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
    );
    $this->map = new MigrateSQLMap($this->machineName,
      $map_source_pkey,
      MigrateDestinationTable::getKeySchema($table_name)
    );

    // Set up our destination
    $this->destination = new MigrateDestinationTable($table_name);

    // Field mappings
    // Field mappings
    $this->addFieldMapping('nid', 'nid')
      ->sourceMigration('UNCAWebFormNode');
    $this->addFieldMapping('uid', 'uid')
      ->sourceMigration('UNCAUser');
    $this->addFieldMapping('submitted', 'submitted');
    $this->addFieldMapping('remote_addr', 'remote_addr');
    $this->addFieldMapping('is_draft','is_draft');

  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
  }

  protected function query(){
    $query = Database::getConnection('default', 'legacy')
      ->select('webform_submissions', 'ws')
      ->fields('ws');
    return $query;
  }

}
