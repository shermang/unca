<?php
class UNCAEventMigration extends UNCANodeMigration {
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

    $this->addFieldMapping('field_location','field_location');
    $this->addFieldMapping('field_date','created'); // Authored On date

    // video_embed will be handled in node.inc prepare function
    //$this->addFieldMapping('field_video_embed','field_video_embed');
    $this->addFieldMapping('field_link','field_link');

// Note that we map migrated terms by the vocabulary ID.
    $this->addFieldMapping('field_event_categories_term', '1')
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('event_categories'));
    $this->addFieldMapping('field_event_categories_term:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_humanities_level_term', '4')
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('humanities_level'));
    $this->addFieldMapping('field_humanities_level_term:source_type')
      ->defaultValue('tid');
  }


  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    return TRUE;
  }

  public function prepare(stdClass $entity, stdClass $row) {
    parent::prepare($entity, $row);
  }
}