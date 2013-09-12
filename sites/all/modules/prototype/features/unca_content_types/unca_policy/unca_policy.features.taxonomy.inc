<?php
/**
 * @file
 * unca_policy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function unca_policy_taxonomy_default_vocabularies() {
  return array(
    'groups_policies_apply_to' => array(
      'name' => 'Groups Policies Apply To',
      'machine_name' => 'groups_policies_apply_to',
      'description' => 'Content Type: Policy',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'policy_categories' => array(
      'name' => 'Policy Categories',
      'machine_name' => 'policy_categories',
      'description' => 'Content Type: Policy',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'policy_owner' => array(
      'name' => 'Policy Owner',
      'machine_name' => 'policy_owner',
      'description' => 'Content Type: Policy',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'responsible_office' => array(
      'name' => 'Responsible Office',
      'machine_name' => 'responsible_office',
      'description' => 'Content Type: Policy',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
