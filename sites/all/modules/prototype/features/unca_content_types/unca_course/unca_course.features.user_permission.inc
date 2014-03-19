<?php
/**
 * @file
 * unca_course.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function unca_course_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view field_iframe'.
  $permissions['view field_iframe'] = array(
    'name' => 'view field_iframe',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
