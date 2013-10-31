<?php

class UNCACampusUpdateMigration extends UNCANodeMigration {

  public function __construct(array $arguments) {

    parent::__construct($arguments);

    // Field mappings

    // field_image is a new field for this content type
//    $this->addFieldMapping('field_image', 'field_image')
//       ->sourceMigration('UNCAFile');
//    $this->addFieldMapping('field_image:file_class')
//      ->defaultValue('MigrateFileFid');
//
//    $this->addFieldMapping('field_image:preserve_files')
//      ->defaultValue(TRUE);
//    $this->addFieldMapping('field_image:title', 'image_copyright')
//      ->defaultValue('');
//    $this->addFieldMapping('field_image:alt', 'image_description')
//      ->defaultValue('');
//    $this->addFieldMapping('field_image:language')
//      ->defaultValue(LANGUAGE_NONE);


    $unMigratedDestinations = array_merge($this->getDestinationImageFieldNames('field_image'),
      $this->getDestinationTermFieldNames('field_tags'), $this->getDestinationVideoFieldNames('field_video_embed'));

    array_push($unMigratedDestinations,'field_featured_update');

    $this->addUnmigratedDestinations($unMigratedDestinations);

    $this->addUnmigratedSources(array('revision','log','revision_uid','upload'));
  }

  /**
   * Implementation of Migration::prepareRow().
   *
   * Here we pull in additional data from a non-core, non-CCK table.
   *
   * @param $row
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
  }

  public function prepare(stdClass $entity, stdClass $row){
    parent::prepare($entity, $row);
  }
}
