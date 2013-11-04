<?php

class UNCASlideshowImageMigration extends UNCANodeMigration {
  public function __construct(array $arguments) {

    parent::__construct($arguments);

    // Field mappings

    $this->addFieldMapping('field_image', 'field_image_with_cropping')
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

    $this->addFieldMapping('field_link', 'field_more_info_link');
    $this->addFieldMapping('field_link:title', 'field_more_info_link:title');
    $this->addFieldMapping('field_link:attributes', 'field_more_info_link:attributes');
    
    $this->addFieldMapping('field_subheading', 'field_subhead');
    // Note that we map migrated terms by the vocabulary ID.
    $this->addFieldMapping('field_slideshow_term', migrate_d2d_unca_get_src_vocab_id('slideshows'))
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('slideshows'));
    $this->addFieldMapping('field_slideshow_term:source_type')
      ->defaultValue('tid');
  }

  public function prepare(stdClass $entity, stdClass $row){
    parent::prepare($entity, $row);
  }

}
