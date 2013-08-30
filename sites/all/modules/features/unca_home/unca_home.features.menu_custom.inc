<?php
/**
 * @file
 * unca_home.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function unca_home_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-home-page-secondary-navigat.
  $menus['menu-home-page-secondary-navigat'] = array(
    'menu_name' => 'menu-home-page-secondary-navigat',
    'title' => 'Secondary Navigation - UNCA Home Page',
    'description' => 'Secondary navigation (ie., sidebar) links for the UNCA home page.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Secondary Navigation - UNCA Home Page');
  t('Secondary navigation (ie., sidebar) links for the UNCA home page.');


  return $menus;
}
