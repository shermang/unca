<?php
/**
 * @file
 * unca_roles_permission.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function unca_roles_permission_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 4,
  );

  // Exported role: content manager.
  $roles['content manager'] = array(
    'name' => 'content manager',
    'weight' => 3,
  );

  return $roles;
}
