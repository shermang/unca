<?php
/**
 * @file
 * unca_department_navigation.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function unca_department_navigation_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-secondary-navigation---prot.
  $menus['menu-secondary-navigation---prot'] = array(
    'menu_name' => 'menu-secondary-navigation---prot',
    'title' => 'Secondary Navigation - Department',
    'description' => 'Secondary navigation (ie., sidebar) links for a Department site.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Secondary Navigation - Department');
  t('Secondary navigation (ie., sidebar) links for a Department site.');


  return $menus;
}
