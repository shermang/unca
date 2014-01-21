<?php
/**
 * @file
 * unca_maps.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unca_maps_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function unca_maps_node_info() {
  $items = array(
    'map_item' => array(
      'name' => t('Map Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
