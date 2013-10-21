<?php
class UNCAProjectMigration extends UNCANodeMigration {
  public function __construct(array $arguments) {
// Add any other data we're pulling into the source row, before the parent
// constructor.

    parent::__construct($arguments);

    $this->addFieldMapping('field_image','field_image')
      ->sourceMigration('UNCAFile');
    $this->addFieldMapping('field_image:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_image:preserve_files')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_image:title', 'image_copyright')
      ->defaultValue('');
    $this->addFieldMapping('field_image:alt', 'image_description')
      ->defaultValue('');
    $this->addFieldMapping('field_image:language')
      ->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_file','field_factsheet');
    $this->addFieldMapping('field_featured_project','field_features');
    $this->addFieldMapping('field_weight','field_weight');
    $this->addFieldMapping(NULL,'field_retire');

// Note that we map migrated terms by the vocabulary ID.
    $this->addFieldMapping('field_project_type_term', '4')
      ->sourceMigration('Term_project_type')
      ->arguments(array('source_type' => 'tid'));
  }

  /**
   * Implementation of Migration::prepareRow().
   *
   * Manually handle 'retire' field
   *
   * @param $row
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    if($row->field_retire == 1){
      $row->field_date = '2014-01-01 00:00:00';
    } else {
      $row->field_date = '2013-01-01 00:00:00';
    }
  }

  public function prepare(stdClass $entity, stdClass $row){
    parent::prepare($entity, $row);
  }

}