<?php
class UNCAEventMigration extends UNCANodeMigration {
  public function __construct(array $arguments) {
// Add any other data we're pulling into the source row, before the parent
// constructor.

    parent::__construct($arguments);

    $this->addFieldMapping('field_image','field_image');
    $this->addFieldMapping('field_location','field_location');
    $this->addFieldMapping('field_date','created'); // Authored On date
    $this->addFieldMapping('field_video_embed','field_video_embed');
    $this->addFieldMapping('field_link','field_link');

// Note that we map migrated terms by the vocabulary ID.
    $this->addFieldMapping('field_event_categories_term', '1')
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('event_categories'))
      ->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_humanities_level_term', '4')
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('humanities_level'))
      ->arguments(array('source_type' => 'tid'));
  }
}