<?php

class UNCASlideshowItemMigration extends UNCANodeMigration {
  public function __construct(array $arguments) {

    parent::__construct($arguments);

    // Field mappings

    $this->addFieldMapping('title', 'field_slideshow_caption');

    $this->addFieldMapping('field_image', 'field_slideshow_image')
         ->sourceMigration('UNCAFile');
    $this->addFieldMapping('field_image:file_class')
        ->defaultValue('MigrateFileFid');

    $this->addFieldMapping('field_link', 'field_slideshow_link');
    $this->addFieldMapping('field_link:title', 'field_slideshow_link:title');
    $this->addFieldMapping('field_link:attributes', 'field_slideshow_link:attributes');
    
    $this->addFieldMapping('field_subheading', 'field_subhead');

  }

}
