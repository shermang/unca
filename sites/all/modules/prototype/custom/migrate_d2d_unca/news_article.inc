<?php
class UNCANewArticleMigration extends UNCANodeMigration {
  public function __construct(array $arguments) {
// Add any other data we're pulling into the source row, before the parent
// constructor.

    parent::__construct($arguments);

    $this->addFieldMapping('body_summary','field_news_teaser');
//    $this->addFieldMapping('field_image','field_image')
//      ->sourceMigration('UNCAFile');
//    $this->addFieldMapping('field_fc_related_links',NULL);


// Note that we map migrated terms by the vocabulary ID.
    $this->addFieldMapping('field_news_categories_term', migrate_d2d_unca_get_src_vocab_id('news_categories'))
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('news_categories'));
    $this->addFieldMapping('field_news_categories_term:source_type')
      ->defaultValue('tid');

  }

  public function prepare(stdClass $entity, stdClass $row){
    parent::prepare($entity, $row);
  }
}