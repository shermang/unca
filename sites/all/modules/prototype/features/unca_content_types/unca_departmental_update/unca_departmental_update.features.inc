<?php
/**
 * @file
 * unca_departmental_update.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unca_departmental_update_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function unca_departmental_update_node_info() {
  $items = array(
    'dept_update' => array(
      'name' => t('Departmental Update'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
