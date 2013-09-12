<?php
/**
 * @file
 * unca_global_header_and_footer.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function unca_global_header_and_footer_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-global-footer-menu.
  $menus['menu-global-footer-menu'] = array(
    'menu_name' => 'menu-global-footer-menu',
    'title' => 'Global Footer Menu',
    'description' => 'Footer navigation links for all UNCA Drupal sites.',
  );
  // Exported menu: menu-global-tools-menu.
  $menus['menu-global-tools-menu'] = array(
    'menu_name' => 'menu-global-tools-menu',
    'title' => 'Global Tools Menu',
    'description' => 'Tools links for all UNCA Drupal sites.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer navigation links for all UNCA Drupal sites.');
  t('Global Footer Menu');
  t('Global Tools Menu');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Tools links for all UNCA Drupal sites.');


  return $menus;
}
