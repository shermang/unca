<?php
class UNCAStudentOrgMigration extends UNCANodeMigration {
  public function __construct(array $arguments) {
// Add any other data we're pulling into the source row, before the parent
// constructor.

    parent::__construct($arguments);

    $this->addFieldMapping('field_link','field_student_org_link');

// Note that we map migrated terms by the vocabulary ID.
    $this->addFieldMapping('field_student_organizations_term', '4')
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('student_organization'))
      ->arguments(array('source_type' => 'tid'));

//  // department is a new field and we don't need to migrate
//    $this->addFieldMapping('field_department_term', '1')
//      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('department'))
//      ->arguments(array('source_type' => 'tid'));
  }
}