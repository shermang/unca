<?php
/**
 * @file
 * unca_student_organization.features.inc
 */

/**
 * Implements hook_node_info().
 */
function unca_student_organization_node_info() {
  $items = array(
    'student_organization' => array(
      'name' => t('Student Organization'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
