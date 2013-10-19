<?php

class UNCASlideshowImageMigration extends UNCANodeMigration {
  public function __construct(array $arguments) {

    parent::__construct($arguments);

    // Field mappings

    $this->addFieldMapping('field_image', 'field_image_with_cropping')
         ->sourceMigration('UNCAFile');
    $this->addFieldMapping('field_image:file_class')
        ->defaultValue('MigrateFileFid');

    $this->addFieldMapping('field_link', 'field_more_info_link');
    $this->addFieldMapping('field_link:title', 'field_more_info_link:title');
    $this->addFieldMapping('field_link:attributes', 'field_more_info_link:attributes');
    
    $this->addFieldMapping('field_subheading', 'field_subhead');

  }

  public function prepare(stdClass $entity, stdClass $row){
    parent::prepare($entity, $row);
  }

}
