<?php
/**
 * @file
 * unca_student_project.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unca_student_project_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function unca_student_project_node_info() {
  $items = array(
    'student_project' => array(
      'name' => t('Student Project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
