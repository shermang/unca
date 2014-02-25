<?php

class UNCADestinationMigration extends UNCANodeMigration {
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
    // Note that we map migrated terms by the vocabulary ID.
    $this->addFieldMapping('field_studyabroad_program_type', migrate_d2d_unca_get_src_vocab_id('program_type'))
         ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('program_types'));
    $this->addFieldMapping('field_studyabroad_program_type:source_type')
         ->defaultValue('tid');
    $this->addFieldMapping('field_studyabroad_region', migrate_d2d_unca_get_src_vocab_id('region'))
         ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('region'));
    $this->addFieldMapping('field_studyabroad_region:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_university_semester_term', migrate_d2d_unca_get_src_vocab_id('university_semester'))
         ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('university_semester'));
    $this->addFieldMapping('field_university_semester_term:source_type')
         ->defaultValue('tid');
    $this->addFieldMapping('body:summary','field_teaser_text',FALSE);
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
  }

  public function prepare(stdClass $entity, stdClass $row){
    parent::prepare($entity, $row);
  }

}
