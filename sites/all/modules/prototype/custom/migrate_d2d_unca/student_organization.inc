<?php
class UNCAStudentOrgMigration extends UNCANodeMigration {
  public function __construct(array $arguments) {
// Add any other data we're pulling into the source row, before the parent
// constructor.

    parent::__construct($arguments);

    $this->addFieldMapping('field_link','field_student_org_link');

// Note that we map migrated terms by the vocabulary ID.
    $this->addFieldMapping('field_student_organizations_term',  migrate_d2d_unca_get_src_vocab_id('student_organization'))
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('student_organization'));
    $this->addFieldMapping('field_student_organizations_term:source_type')
      ->defaultValue('tid');

//  // department is a new field and we don't need to migrate
//    $this->addFieldMapping('field_department_term', '1')
//      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('department'))
//      ->arguments(array('source_type' => 'tid'));
  }

  public function prepare(stdClass $entity, stdClass $row){
    parent::prepare($entity, $row);
  }
}