<?php
/**
 * @file
 * study_abroad.features.inc
 */

/**
 * Implements hook_node_info().
 */
function study_abroad_node_info() {
  $items = array(
    'destination' => array(
      'name' => t('Destination'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
