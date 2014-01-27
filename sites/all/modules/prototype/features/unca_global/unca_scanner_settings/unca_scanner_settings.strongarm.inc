<?php
/**
 * @file
 * unca_scanner_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function unca_scanner_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_article';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_campus_update';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_campus_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_cluster';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_cluster'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_course';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_dept_update';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_dept_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_destination';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_destination'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_event';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_map_item';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_map_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_news_article';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_news_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_page';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_policy';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_policy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_profiles';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_project';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_slideshow_item';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_slideshow_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_student_organization';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_student_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_student_project';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_student_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_body_field_revision_body_webform';
  $strongarm->value = 1;
  $export['scanner_body_field_revision_body_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_article';
  $strongarm->value = 1;
  $export['scanner_title_node_revision_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_campus_update';
  $strongarm->value = 1;
  $export['scanner_title_node_revision_campus_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_cluster';
  $strongarm->value = 1;
  $export['scanner_title_node_revision_cluster'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_course';
  $strongarm->value = 1;
  $export['scanner_title_node_revision_course'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_dept_update';
  $strongarm->value = 1;
  $export['scanner_title_node_revision_dept_update'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_destination';
  $strongarm->value = 1;
  $export['scanner_title_node_revision_destination'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_event';
  $strongarm->value = 1;
  $export['scanner_title_node_revision_event'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_map_item';
  $strongarm->value = 1;
  $export['scanner_title_node_revision_map_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_news_article';
  $strongarm->value = 1;
  $export['scanner_title_node_revision_news_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_page';
  $strongarm->value = 1;
  $export['scanner_title_node_revision_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_policy';
  $strongarm->value = 1;
  $export['scanner_title_node_revision_policy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_profiles';
  $strongarm->value = 1;
  $export['scanner_title_node_revision_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_project';
  $strongarm->value = 1;
  $export['scanner_title_node_revision_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_slideshow_item';
  $strongarm->value = 1;
  $export['scanner_title_node_revision_slideshow_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_student_organization';
  $strongarm->value = 1;
  $export['scanner_title_node_revision_student_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_student_project';
  $strongarm->value = 1;
  $export['scanner_title_node_revision_student_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scanner_title_node_revision_webform';
  $strongarm->value = 1;
  $export['scanner_title_node_revision_webform'] = $strongarm;

  return $export;
}
