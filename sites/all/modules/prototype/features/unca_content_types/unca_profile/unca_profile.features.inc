<?php
/**
 * @file
 * unca_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unca_profile_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function unca_profile_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function unca_profile_node_info() {
  $items = array(
    'profiles' => array(
      'name' => t('Profiles'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
