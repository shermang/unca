<?php
/**
 * @file
 * unca_profile.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function unca_profile_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:node/add/profile
  $menu_links['navigation:node/add/profile'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/profile',
    'router_path' => 'node/add/profile',
    'link_title' => 'Profile',
    'options' => array(),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'parent_path' => 'node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Profile');


  return $menu_links;
}
