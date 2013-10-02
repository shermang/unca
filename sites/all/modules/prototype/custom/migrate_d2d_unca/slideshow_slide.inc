<?php

class UNCASlideshowSlideMigration extends DrupalNode6Migration {
  public function __construct(array $arguments) {

    parent::__construct($arguments);


    // Temporarily correct pending updates in features
    $program_type_mach_name = migrate_d2d_unca_get_vocab_mach_name('program_type');
    $prog_type_migration_machine_name = 'Term_' . $program_type_mach_name;

    // Field mappings
    $this->addFieldMapping('field_image', 'field_image');
    $this->addFieldMapping('field_teaser_text', 'field_image');
    // Note that we map migrated terms by the vocabulary ID.
    $this->addFieldMapping('field_studyabroad_program_type', '6')
         ->sourceMigration($prog_type_migration_machine_name)
         ->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_studyabroad_region', '4')
         ->sourceMigration('Term_region')
         ->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_university_semester_term', '5')
         ->sourceMigration('Term_university_term')
         ->arguments(array('source_type' => 'tid'));

  }

}
