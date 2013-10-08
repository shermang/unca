<?php

class UNCAWebformComponentMigration extends DynamicMigration {
  public function __construct(array $arguments) {

    parent::__construct(MigrateGroup::getInstance($arguments['group'], array('default')));

    $table_name = 'webform_component';

    $map_source_pkey = array(
      'nid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
      'cid' => array(
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
                     ->select($table_name, 'wc')
             ->fields('wc');

             // // This sort assures that parents are saved before children.
             // ->orderBy('style_parent', 'ASC');

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query);

    // Set up our destination
    $this->destination = new MigrateDestinationTable($table_name);

    // Field mappings
    $this->addFieldMapping('nid', 'nid')
        ->sourceMigration('UNCAWebformNode');
    $this->addFieldMapping('cid', 'cid');
    $this->addFieldMapping('form_key', 'form_key');
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('type', 'type');
    $this->addFieldMapping('value', 'value');
    $this->addFieldMapping('extra', 'extra');
    $this->addFieldMapping('mandatory', 'mandatory');
    $this->addFieldMapping('weight', 'weight');

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
