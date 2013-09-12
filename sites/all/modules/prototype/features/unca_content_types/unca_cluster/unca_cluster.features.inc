<?php
/**
 * @file
 * unca_cluster.features.inc
 */

/**
 * Implements hook_node_info().
 */
function unca_cluster_node_info() {
  $items = array(
    'cluster' => array(
      'name' => t('Cluster'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
