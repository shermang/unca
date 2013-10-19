<?php
class UNCADepartmentalUpdateMigration extends UNCANodeMigration {
  public function __construct(array $arguments) {
// Add any other data we're pulling into the source row, before the parent
// constructor.

    parent::__construct($arguments);

// no custom fields to migrate


// Note that we map migrated terms by the vocabulary ID.

    // no terms field noted in build spec
  }

  public function prepare(stdClass $entity, stdClass $row){
    parent::prepare($entity, $row);
  }
}