<?php
/**
 * @file
 * unca_site_admin_views.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function unca_site_admin_views_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_defaults';
  $strongarm->value = array(
    'admin_views_node' => FALSE,
    'administration_nodes' => TRUE,
  );
  $export['views_defaults'] = $strongarm;

  return $export;
}
