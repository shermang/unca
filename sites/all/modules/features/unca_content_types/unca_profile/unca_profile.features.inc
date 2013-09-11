<?php
/**
 * @file
 * unca_profile.features.inc
 */

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
