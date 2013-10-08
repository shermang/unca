<?php

class UNCAWebformSubmissionMigration extends DynamicMigration {
  public function __construct(array $arguments) {

    parent::__construct(MigrateGroup::getInstance($arguments['group'], array('default')));

    $table_name = 'webform_submissions';

    // Map
    $map_source_pkey = array(
      'srcid1_sid' => array(
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
    $query = Database::getConnection('default', 'legacy')
                     ->select($table_name, 'ws')
             ->fields('ws');

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
