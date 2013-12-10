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
    $this->addFieldMapping('field_policy_reference_materials:format','field_policy_reference_materials:format')
      ->callbacks(array($this,'mapFormat'));
    $this->addFieldMapping('field_policy_associated_forms','field_associated_forms');
    $this->addFieldMapping('field_policy_associated_forms:format','field_associated_forms:format')
      ->callbacks(array($this,'mapFormat'));
    $this->addFieldMapping('field_policy_number','field_policy_number');

// Note that we map migrated terms by the vocabulary ID.
    $this->addFieldMapping('field_policy_groups_term', migrate_d2d_unca_get_src_vocab_id('groups_policies_apply_to'))
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('groups_policies_apply_to'));
    $this->addFieldMapping('field_policy_groups_term:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_policy_categories_term', migrate_d2d_unca_get_src_vocab_id('policy_categories'))
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('policy_categories'));
    $this->addFieldMapping('field_policy_categories_term:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_policy_owner_term', migrate_d2d_unca_get_src_vocab_id('policy_owner'))
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('policy_owner'));
    $this->addFieldMapping('field_policy_owner_term:source_type')
      ->defaultValue('tid');
    $this->addFieldMapping('field_policy_responsible_term', migrate_d2d_unca_get_src_vocab_id('responsible_office'))
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('responsible_office'));
    $this->addFieldMapping('field_policy_responsible_term:source_type')
      ->defaultValue('tid');
  }

  public function prepare(stdClass $entity, stdClass $row){
    parent::prepare($entity, $row);
  }
}