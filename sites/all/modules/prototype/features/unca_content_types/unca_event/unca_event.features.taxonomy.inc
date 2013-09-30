<?php
/**
 * @file
 * unca_event.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function unca_event_taxonomy_default_vocabularies() {
  return array(
    'event_categories' => array(
      'name' => 'Event Categories',
      'machine_name' => 'event_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'event_type' => array(
      'name' => 'Event Type',
      'machine_name' => 'event_type',
      'description' => 'Content Type: Event',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'humanities_level' => array(
      'name' => 'Humanities Level',
      'machine_name' => 'humanities_level',
      'description' => 'Content Type: Event',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
