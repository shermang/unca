<?php
/**
 * @file
 * unca_campus_update.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function unca_campus_update_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_featured_update'
  $field_bases['field_featured_update'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_featured_update',
    'field_permissions' => array(
      'type' => 0,
    ),
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'boolean',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_boolean',
  );

  return $field_bases;
}
