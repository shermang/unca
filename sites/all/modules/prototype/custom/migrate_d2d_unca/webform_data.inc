<?php

class UNCAWebformDataMigration extends DynamicMigration {
  public function __construct(array $arguments) {

    parent::__construct(MigrateGroup::getInstance($arguments['group'], array('default')));

    $table_name = 'webform_submitted_data';

    $map_source_pkey = array(
      'srcid1_nid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
      'srcid2_sid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
      'srcid3_cid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
      'srcid4_no' => array(
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
    $this->addFieldMapping('name', 'style');
    $this->addFieldMapping('description', 'details');

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
