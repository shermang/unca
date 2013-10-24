<?php
/**
 * @file
 * unca_home.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function unca_home_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-home-page-secondary-navigat:http://alumni.unca.edu/
  $menu_links['menu-home-page-secondary-navigat:http://alumni.unca.edu/'] = array(
    'menu_name' => 'menu-home-page-secondary-navigat',
    'link_path' => 'http://alumni.unca.edu/',
    'router_path' => '',
    'link_title' => 'Alumni',
    'options' => array(
      'attributes' => array(
        'id' => 'gateway-alumni',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-home-page-secondary-navigat:http://www.unca.edu/admissions/apply
  $menu_links['menu-home-page-secondary-navigat:http://www.unca.edu/admissions/apply'] = array(
    'menu_name' => 'menu-home-page-secondary-navigat',
    'link_path' => 'http://www.unca.edu/admissions/apply',
    'router_path' => '',
    'link_title' => 'Apply',
    'options' => array(
      'attributes' => array(
        'id' => 'gateway-apply',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
  );
  // Exported menu link: menu-home-page-secondary-navigat:http://www.unca.edu/for-faculty
  $menu_links['menu-home-page-secondary-navigat:http://www.unca.edu/for-faculty'] = array(
    'menu_name' => 'menu-home-page-secondary-navigat',
    'link_path' => 'http://www.unca.edu/for-faculty',
    'router_path' => '',
    'link_title' => 'Faculty & Staff',
    'options' => array(
      'attributes' => array(
        'id' => 'gateway-faculty-staff',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-home-page-secondary-navigat:http://www.unca.edu/for-parents
  $menu_links['menu-home-page-secondary-navigat:http://www.unca.edu/for-parents'] = array(
    'menu_name' => 'menu-home-page-secondary-navigat',
    'link_path' => 'http://www.unca.edu/for-parents',
    'router_path' => '',
    'link_title' => 'Parents & Families',
    'options' => array(
      'attributes' => array(
        'id' => 'gateway-parents-families',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-home-page-secondary-navigat:http://www.unca.edu/for-students
  $menu_links['menu-home-page-secondary-navigat:http://www.unca.edu/for-students'] = array(
    'menu_name' => 'menu-home-page-secondary-navigat',
    'link_path' => 'http://www.unca.edu/for-students',
    'router_path' => '',
    'link_title' => 'Students',
    'options' => array(
      'attributes' => array(
        'id' => 'gateway-students',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-home-page-secondary-navigat:http://www.unca.edu/for-the-community
  $menu_links['menu-home-page-secondary-navigat:http://www.unca.edu/for-the-community'] = array(
    'menu_name' => 'menu-home-page-secondary-navigat',
    'link_path' => 'http://www.unca.edu/for-the-community',
    'router_path' => '',
    'link_title' => 'The Community',
    'options' => array(
      'attributes' => array(
        'id' => 'gateway-community',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-home-page-secondary-navigat:http://www.unca.edu/giving
  $menu_links['menu-home-page-secondary-navigat:http://www.unca.edu/giving'] = array(
    'menu_name' => 'menu-home-page-secondary-navigat',
    'link_path' => 'http://www.unca.edu/giving',
    'router_path' => '',
    'link_title' => 'Make a Gift',
    'options' => array(
      'attributes' => array(
        'id' => 'gateway-gift',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Alumni');
  t('Apply');
  t('Faculty & Staff');
  t('Make a Gift');
  t('Parents & Families');
  t('Students');
  t('The Community');


  return $menu_links;
}
