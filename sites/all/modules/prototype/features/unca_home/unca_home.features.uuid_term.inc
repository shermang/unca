<?php
/**
 * @file
 * unca_home.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function unca_home_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Profile in Giving',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2e850924-1319-46d7-ac42-57ce7bca01d1',
    'vocabulary_machine_name' => 'profile_types',
  );
  return $terms;
}
