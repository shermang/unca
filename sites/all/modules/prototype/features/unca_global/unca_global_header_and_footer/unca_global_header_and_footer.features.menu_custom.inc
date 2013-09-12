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

  // Exported menu: menu-global-footer-menu.
  $menus['menu-global-footer-menu'] = array(
    'menu_name' => 'menu-global-footer-menu',
    'title' => 'Global Footer Menu',
    'description' => 'Footer navigation links for all UNCA Drupal sites.',
  );
  // Exported menu: menu-global-primary-navigation.
  $menus['menu-global-primary-navigation'] = array(
    'menu_name' => 'menu-global-primary-navigation',
    'title' => 'Global Primary Navigation',
    'description' => 'Main navigation links for all UNCA Drupal sites.',
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
  t('Global Primary Navigation');
  t('Global Tools Menu');
  t('Main navigation links for all UNCA Drupal sites.');
  t('Tools links for all UNCA Drupal sites.');


  return $menus;
}
