<?php

class UNCAWebformDataMigration extends Migration {
  public function __construct($arguments) {

    parent::__construct($arguments);

    $table_name = 'webform_submitted_data';

    $map_source_pkey = array(
      'nid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
      'sid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
      'cid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
      'no' => array(
        'type' => 'varchar',
        'length' => 255,
        'not null' => TRUE,
      )
    );
    $this->map = new MigrateSQLMap($this->machineName,
      $map_source_pkey,
      MigrateDestinationTable::getKeySchema($table_name)
    );

    // Source query
    $query = Database::getConnection('default', 'legacy')
                     ->select($table_name, 'wd')
             ->fields('wd');

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query);

    // Set up our destination
    $this->destination = new MigrateDestinationTable($table_name);

    // Field mappings
    $this->addFieldMapping('nid', 'nid')
      ->sourceMigration('UNCAWebFormNode');
    $this->addFieldMapping('sid', 'sid')
      ->sourceMigration('UNCAWebFormSubmission');
    $this->addFieldMapping('cid', 'cid');
    //  ->sourceMigration('UNCAWebFormComponent');
    $this->addFieldMapping('no', 'no');
    $this->addFieldMapping('data', 'data');

  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
  }

  public function prepare($entity, $row) {
    // drush_print_r($row);
    // drush_print_r($entity);
  }

}
