<?php

class UNCACampusUpdateMigration extends DrupalNode6Migration {

  protected $pre_rollback_nids;

  public function __construct(array $arguments) {

    parent::__construct($arguments);


    // Temporarily correct pending updates in features
    $program_type_mach_name = migrate_d2d_unca_get_vocab_mach_name('program_type');
    $prog_type_migration_machine_name = 'Term_' . $program_type_mach_name;

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
