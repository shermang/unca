<?php
/**
 * @file
 * unca_slideshow.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unca_slideshow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function unca_slideshow_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function unca_slideshow_node_info() {
  $items = array(
    'slideshow_item' => array(
      'name' => t('Slideshow Item'),
      'base' => 'node_content',
      'description' => t('A slideshow image, with optional link and caption fields.'),
      'has_title' => '1',
      'title_label' => t('Slide Title'),
      'help' => t('Displays as headline.'),
    ),
  );
  return $items;
}
