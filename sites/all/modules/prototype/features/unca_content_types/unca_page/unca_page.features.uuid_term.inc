<?php
/**
 * @file
 * unca_page.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function unca_page_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Gateway',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a04dceb9-b4fb-4b9e-bda1-14c46279e498',
    'vocabulary_machine_name' => 'page_layout',
  );
  return $terms;
}
