<?php
/**
 * @file
 * unca_policy.features.inc
 */

/**
 * Implements hook_node_info().
 */
function unca_policy_node_info() {
  $items = array(
    'profile' => array(
      'name' => t('Policy'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
