<?php
/**
 * @file
 * unca_site_admin_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unca_site_admin_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function unca_site_admin_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
