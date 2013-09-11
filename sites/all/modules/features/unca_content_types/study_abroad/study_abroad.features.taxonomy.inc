<?php
/**
 * @file
 * study_abroad.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function study_abroad_taxonomy_default_vocabularies() {
  return array(
    'program_types' => array(
      'name' => 'Program Types',
      'machine_name' => 'program_types',
      'description' => 'Content Type: Destination',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'region' => array(
      'name' => 'Region',
      'machine_name' => 'region',
      'description' => 'Content Type: Destination',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'university_term' => array(
      'name' => 'University Term',
      'machine_name' => 'university_term',
      'description' => 'Content Type: Destination',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
