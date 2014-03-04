<?php
/**
 * @file
 * unca_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function unca_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'user',
  );

  // Exported permission: 'delete terms in profile_types'.
  $permissions['delete terms in profile_types'] = array(
    'name' => 'delete terms in profile_types',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in profile_types'.
  $permissions['edit terms in profile_types'] = array(
    'name' => 'edit terms in profile_types',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
