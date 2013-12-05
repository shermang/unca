<?php

class UNCAClusterMigration extends UNCANodeMigration {
  public function __construct(array $arguments) {

    parent::__construct($arguments);

    // Field mappings
    $this->addFieldMapping('field_image', 'field_image')
         ->sourceMigration('UNCAFile');
    $this->addFieldMapping('field_image:file_class')
        ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_image:preserve_files')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_image:title')
      ->defaultValue('');
    $this->addFieldMapping('field_image:alt')
      ->defaultValue('');
    $this->addFieldMapping('field_image:language')
      ->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('body:summary', 'field_subhead',FALSE);
    $this->addFieldMapping('field_cluster_number', 'field_number');
    $this->addFieldMapping('field_cluster_coordinator', 'field_coordinator');
    $this->addFieldMapping('field_cluster_coordinator:format','field_coordinator:format')
      ->callbacks(array($this, 'mapFormat'));
    $this->addFieldMapping('field_cluster_coordinator:language')
      ->defaultValue(LANGUAGE_NONE);
    $this->addFieldMapping('field_date', 'field_launch_date');
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
  }

  public function prepare($entity, $row) {
    parent::prepare($entity, $row);

    // Manually set date value (migrate_d2d was not handling, for unkown reason)
    if($row->field_launch_date) {
      $field_date = array(
        'und' => array(
          array(
            'value' => $row->field_launch_date,
            'timezone' => 'America/New_York',
            'timezone_db' => 'America/New_York',
            'date_type' => 'datetime',
          ),
        ),
      ); 
      $entity->field_date = $field_date;
    }
  }

}
