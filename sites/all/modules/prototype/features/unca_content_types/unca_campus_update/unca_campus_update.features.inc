<?php
/**
 * @file
 * unca_campus_update.features.inc
 */

/**
 * Implements hook_node_info().
 */
function unca_campus_update_node_info() {
  $items = array(
    'campus_update' => array(
      'name' => t('Campus Update'),
      'base' => 'node_content',
      'description' => t('A campus update is an announcement, alert, or other update directed toward the primary audiences of the university. It is distinct from an official press release. It gets displayed in blocks throughout the site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
