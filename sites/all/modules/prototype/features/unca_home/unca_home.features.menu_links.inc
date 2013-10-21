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

  // Exported menu link: menu-home-page-secondary-navigat:node/1
  $menu_links['menu-home-page-secondary-navigat:node/1'] = array(
    'menu_name' => 'menu-home-page-secondary-navigat',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Students',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-home-page-secondary-navigat:node/2
  $menu_links['menu-home-page-secondary-navigat:node/2'] = array(
    'menu_name' => 'menu-home-page-secondary-navigat',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Faculty & Staff',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-home-page-secondary-navigat:node/3
  $menu_links['menu-home-page-secondary-navigat:node/3'] = array(
    'menu_name' => 'menu-home-page-secondary-navigat',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Alumni',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-home-page-secondary-navigat:node/4
  $menu_links['menu-home-page-secondary-navigat:node/4'] = array(
    'menu_name' => 'menu-home-page-secondary-navigat',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Parents & Families',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-home-page-secondary-navigat:node/5
  $menu_links['menu-home-page-secondary-navigat:node/5'] = array(
    'menu_name' => 'menu-home-page-secondary-navigat',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'The Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Alumni');
  t('Faculty & Staff');
  t('Parents & Families');
  t('Students');
  t('The Community');


  return $menu_links;
}
