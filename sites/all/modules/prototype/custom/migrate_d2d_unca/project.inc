<?php
class UNCAProjectMigration extends UNCANodeMigration {
  public function __construct(array $arguments) {
// Add any other data we're pulling into the source row, before the parent
// constructor.

    parent::__construct($arguments);

// Note that we map migrated terms by the vocabulary ID.
    $this->addFieldMapping('field_project_type_term', '4')
      ->sourceMigration('Term_project_type')
      ->arguments(array('source_type' => 'tid'));
  }
}