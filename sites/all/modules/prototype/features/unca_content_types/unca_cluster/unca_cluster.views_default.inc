<?php
/**
 * @file
 * unca_cluster.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function unca_cluster_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Clusters';
  $view->description = 'Queries profiles for the projects page, as well as a rotating block.';
  $view->tag = 'Clusters';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Current and Upcoming Clusters';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Field: Teaser (Summary) */
  $handler->display->display_options['fields']['field_teaser_text_value']['id'] = 'field_teaser_text_value';
  $handler->display->display_options['fields']['field_teaser_text_value']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['field_teaser_text_value']['field'] = 'body';
  $handler->display->display_options['fields']['field_teaser_text_value']['ui_name'] = 'Teaser (Summary)';
  $handler->display->display_options['fields']['field_teaser_text_value']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_text_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_text_value']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_teaser_text_value']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_fid']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_fid']['label'] = '';
  /* Field: Content: Date to Archive */
  $handler->display->display_options['fields']['field_launch_date_value']['id'] = 'field_launch_date_value';
  $handler->display->display_options['fields']['field_launch_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_launch_date_value']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_launch_date_value']['label'] = 'Actual/Projected Launch Date';
  /* Field: Content: Cluster Number */
  $handler->display->display_options['fields']['field_number_value']['id'] = 'field_number_value';
  $handler->display->display_options['fields']['field_number_value']['table'] = 'field_data_field_cluster_number';
  $handler->display->display_options['fields']['field_number_value']['field'] = 'field_cluster_number';
  $handler->display->display_options['fields']['field_number_value']['label'] = 'Number';
  /* Field: Content: Coordinator */
  $handler->display->display_options['fields']['field_coordinator_value']['id'] = 'field_coordinator_value';
  $handler->display->display_options['fields']['field_coordinator_value']['table'] = 'field_data_field_cluster_coordinator';
  $handler->display->display_options['fields']['field_coordinator_value']['field'] = 'field_cluster_coordinator';
  /* Sort criterion: Content: Cluster Number (field_cluster_number) */
  $handler->display->display_options['sorts']['field_number_value']['id'] = 'field_number_value';
  $handler->display->display_options['sorts']['field_number_value']['table'] = 'field_data_field_cluster_number';
  $handler->display->display_options['sorts']['field_number_value']['field'] = 'field_cluster_number_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Date to Archive (field_date) */
  $handler->display->display_options['sorts']['field_launch_date_value']['id'] = 'field_launch_date_value';
  $handler->display->display_options['sorts']['field_launch_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_launch_date_value']['field'] = 'field_date_value';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'cluster' => 'cluster',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = '0';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Current Clusters Page */
  $handler = $view->new_display('page', 'Current Clusters Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Current Clusters';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Cluster Number (field_cluster_number) */
  $handler->display->display_options['sorts']['field_number_value']['id'] = 'field_number_value';
  $handler->display->display_options['sorts']['field_number_value']['table'] = 'field_data_field_cluster_number';
  $handler->display->display_options['sorts']['field_number_value']['field'] = 'field_cluster_number_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Date to Archive (field_date) */
  $handler->display->display_options['sorts']['field_launch_date_value']['id'] = 'field_launch_date_value';
  $handler->display->display_options['sorts']['field_launch_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_launch_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['path'] = 'clusters';
  $export['Clusters'] = $view;

  return $export;
}
