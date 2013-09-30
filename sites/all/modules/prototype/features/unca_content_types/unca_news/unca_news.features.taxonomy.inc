<?php
/**
 * @file
 * unca_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function unca_news_taxonomy_default_vocabularies() {
  return array(
    'news_and_event_type' => array(
      'name' => 'News and Event Type',
      'machine_name' => 'news_and_event_type',
      'description' => 'Content Type: Event, News Article',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'news_and_events_categories' => array(
      'name' => 'News and Events Categories',
      'machine_name' => 'news_and_events_categories',
      'description' => 'Content Type: Event, News Article',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'news_category' => array(
      'name' => 'News Category',
      'machine_name' => 'news_category',
      'description' => 'Content: News Article',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
