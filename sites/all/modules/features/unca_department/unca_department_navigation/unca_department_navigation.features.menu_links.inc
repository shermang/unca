<?php
/**
 * @file
 * unca_department_navigation.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function unca_department_navigation_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-secondary-navigation---prot:<front>
  $menu_links['menu-secondary-navigation---prot:<front>'] = array(
    'menu_name' => 'menu-secondary-navigation---prot',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Menu Link 8',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Menu Link 8');


  return $menu_links;
}
