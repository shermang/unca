<?php
class UNCAPolicyMigration extends UNCANodeMigration {
  public function __construct(array $arguments) {
// Add any other data we're pulling into the source row, before the parent
// constructor.

    parent::__construct($arguments);

    $this->addFieldMapping('field_policy_code','field_policy_code');
    $this->addFieldMapping('field_policy_approved_by','field_approved_by');
    $this->addFieldMapping('field_policy_type','field_policy_type');
    $this->addFieldMapping('field_policy_origination_date','field_date_issued');
    $this->addFieldMapping('field_policy_last_amended_date','field_last_amended');
    $this->addFieldMapping('field_policy_approval_date','field_approval_date');
    $this->addFieldMapping('field_policy_next_review_date','field_next_review');
    $this->addFieldMapping('field_policy_reference_materials','field_reference_materials');
    $this->addFieldMapping('field_policy_associated_forms','field_associated_forms');

// Note that we map migrated terms by the vocabulary ID.
    $this->addFieldMapping('field_policy_groups_term', '6')
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('groups_policies_apply_to'))
      ->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_policy_categories_term', '5')
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('policy_categories'))
      ->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_policy_owner_term', '4')
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('policy_owner'))
      ->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_policy_responsible_term', '7')
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('responsible_office'))
      ->arguments(array('source_type' => 'tid'));
  }
}