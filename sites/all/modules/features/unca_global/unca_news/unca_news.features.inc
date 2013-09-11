<?php
/**
 * @file
 * unca_news.features.inc
 */

/**
 * Implements hook_node_info().
 */
function unca_news_node_info() {
  $items = array(
    'news_article' => array(
      'name' => t('News article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
