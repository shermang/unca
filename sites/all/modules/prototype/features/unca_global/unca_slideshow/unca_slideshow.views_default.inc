<?php
/**
 * @file
 * unca_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function unca_slideshow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'slide_ref_dialog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow Item Reference';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow_item' => 'slideshow_item',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Reference dialog Search */
  $handler = $view->new_display('references_dialog', 'Reference dialog Search', 'references_dialog_1');
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['attach'] = array(
    0 => 'field_collection_item:field_slideshow_item:field_slide',
  );
  $export['slide_ref_dialog'] = $view;

  $view = new view();
  $view->name = 'slideshow_display_rev';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node_revision';
  $view->human_name = 'Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view revisions';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'NO RESULTS -- \'Slideshow\' EVA display (3)';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content revision: Content */
  $handler->display->display_options['relationships']['vid']['id'] = 'vid';
  $handler->display->display_options['relationships']['vid']['table'] = 'node_revision';
  $handler->display->display_options['relationships']['vid']['field'] = 'vid';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_slideshow_item_field_collection_item']['id'] = 'reverse_field_slideshow_item_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_slideshow_item_field_collection_item']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_slideshow_item_field_collection_item']['field'] = 'reverse_field_slideshow_item_field_collection_item';
  $handler->display->display_options['relationships']['reverse_field_slideshow_item_field_collection_item']['relationship'] = 'vid';
  $handler->display->display_options['relationships']['reverse_field_slideshow_item_field_collection_item']['required'] = TRUE;
  /* Relationship: Field collection item: Entity with the Slide (field_slide) */
  $handler->display->display_options['relationships']['field_slide_slideshow_entity']['id'] = 'field_slide_slideshow_entity';
  $handler->display->display_options['relationships']['field_slide_slideshow_entity']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_slide_slideshow_entity']['field'] = 'field_slide_slideshow_entity';
  $handler->display->display_options['relationships']['field_slide_slideshow_entity']['relationship'] = 'reverse_field_slideshow_item_field_collection_item';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'vid';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content revision: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node_revision';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node_revision'] = TRUE;
  /* Field: Content: Caption */
  $handler->display->display_options['fields']['field_subheading']['id'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['table'] = 'field_data_field_subheading';
  $handler->display->display_options['fields']['field_subheading']['field'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['relationship'] = 'vid';
  $handler->display->display_options['fields']['field_subheading']['label'] = '';
  $handler->display->display_options['fields']['field_subheading']['element_label_colon'] = FALSE;
  /* Field: Content: Student Organization Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['relationship'] = 'vid';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  /* Field: Link url */
  $handler->display->display_options['fields']['field_link_1']['id'] = 'field_link_1';
  $handler->display->display_options['fields']['field_link_1']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link_1']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link_1']['relationship'] = 'vid';
  $handler->display->display_options['fields']['field_link_1']['ui_name'] = 'Link url';
  $handler->display->display_options['fields']['field_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_1']['type'] = 'link_plain';
  /* Field: Content: Read More Text */
  $handler->display->display_options['fields']['field_read_more']['id'] = 'field_read_more';
  $handler->display->display_options['fields']['field_read_more']['table'] = 'field_data_field_read_more';
  $handler->display->display_options['fields']['field_read_more']['field'] = 'field_read_more';
  $handler->display->display_options['fields']['field_read_more']['relationship'] = 'vid';
  $handler->display->display_options['fields']['field_read_more']['label'] = '';
  $handler->display->display_options['fields']['field_read_more']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_read_more']['alter']['path'] = '[field_link_1]';
  $handler->display->display_options['fields']['field_read_more']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_read_more']['type'] = 'text_plain';
  /* Contextual filter: Slideshow: Slideshow ID */
  $handler->display->display_options['arguments']['ssid']['id'] = 'ssid';
  $handler->display->display_options['arguments']['ssid']['table'] = 'slideshow_entity';
  $handler->display->display_options['arguments']['ssid']['field'] = 'ssid';
  $handler->display->display_options['arguments']['ssid']['relationship'] = 'field_slide_slideshow_entity';
  $handler->display->display_options['arguments']['ssid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['ssid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['ssid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['ssid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['ssid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
    3 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'vid';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'vid';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow_item' => 'slideshow_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Slide Publish Start Date (field_slide_publish_start_date) */
  $handler->display->display_options['filters']['field_slide_publish_start_date_value_1']['id'] = 'field_slide_publish_start_date_value_1';
  $handler->display->display_options['filters']['field_slide_publish_start_date_value_1']['table'] = 'field_data_field_slide_publish_start_date';
  $handler->display->display_options['filters']['field_slide_publish_start_date_value_1']['field'] = 'field_slide_publish_start_date_value';
  $handler->display->display_options['filters']['field_slide_publish_start_date_value_1']['relationship'] = 'reverse_field_slideshow_item_field_collection_item';
  $handler->display->display_options['filters']['field_slide_publish_start_date_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_slide_publish_start_date_value_1']['group'] = 2;
  /* Filter criterion: Field collection item: Slide Publish Start Date (field_slide_publish_start_date) */
  $handler->display->display_options['filters']['field_slide_publish_start_date_value']['id'] = 'field_slide_publish_start_date_value';
  $handler->display->display_options['filters']['field_slide_publish_start_date_value']['table'] = 'field_data_field_slide_publish_start_date';
  $handler->display->display_options['filters']['field_slide_publish_start_date_value']['field'] = 'field_slide_publish_start_date_value';
  $handler->display->display_options['filters']['field_slide_publish_start_date_value']['relationship'] = 'reverse_field_slideshow_item_field_collection_item';
  $handler->display->display_options['filters']['field_slide_publish_start_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_slide_publish_start_date_value']['group'] = 2;
  /* Filter criterion: Field collection item: Slide Publish End Date (field_slide_publish_end_date) */
  $handler->display->display_options['filters']['field_slide_publish_end_date_value']['id'] = 'field_slide_publish_end_date_value';
  $handler->display->display_options['filters']['field_slide_publish_end_date_value']['table'] = 'field_data_field_slide_publish_end_date';
  $handler->display->display_options['filters']['field_slide_publish_end_date_value']['field'] = 'field_slide_publish_end_date_value';
  $handler->display->display_options['filters']['field_slide_publish_end_date_value']['relationship'] = 'reverse_field_slideshow_item_field_collection_item';
  $handler->display->display_options['filters']['field_slide_publish_end_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_slide_publish_end_date_value']['group'] = 3;
  /* Filter criterion: Field collection item: Slide Publish End Date (field_slide_publish_end_date) */
  $handler->display->display_options['filters']['field_slide_publish_end_date_value_1']['id'] = 'field_slide_publish_end_date_value_1';
  $handler->display->display_options['filters']['field_slide_publish_end_date_value_1']['table'] = 'field_data_field_slide_publish_end_date';
  $handler->display->display_options['filters']['field_slide_publish_end_date_value_1']['field'] = 'field_slide_publish_end_date_value';
  $handler->display->display_options['filters']['field_slide_publish_end_date_value_1']['relationship'] = 'reverse_field_slideshow_item_field_collection_item';
  $handler->display->display_options['filters']['field_slide_publish_end_date_value_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_slide_publish_end_date_value_1']['group'] = 3;

  /* Display: Flexslider Block */
  $handler = $view->new_display('block', 'Flexslider Block', 'flexslider_block');
  $export['slideshow_display_rev'] = $view;

  return $export;
}
