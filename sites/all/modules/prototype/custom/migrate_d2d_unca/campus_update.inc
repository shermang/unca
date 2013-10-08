<?php

class UNCACampusUpdateMigration extends DrupalNode6Migration {

  public function __construct(array $arguments) {

    parent::__construct($arguments);

    // Field mappings
    $this->addFieldMapping('field_image', 'field_image')
       ->sourceMigration('UNCAFile');
    $this->addFieldMapping('field_image:file_class')
      ->defaultValue('MigrateFileFid');

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

}
