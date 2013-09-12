<?php
/**
 * @file
 * unca_profile.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function unca_profile_taxonomy_default_vocabularies() {
  return array(
    'profile_types' => array(
      'name' => 'Profile Types',
      'machine_name' => 'profile_types',
      'description' => 'Content Type: Profile',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
