<?php
/**
 * @file
 * unca_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function unca_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Events';
  $view->description = 'Events';
  $view->tag = 'Events';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Events';
  $handler->display->display_options['link_display'] = 'page_4';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'events-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_link_value]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title] on [field_date_3]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Date - Full Date and Time Accessibility Token */
  $handler->display->display_options['fields']['field_date_3']['id'] = 'field_date_3';
  $handler->display->display_options['fields']['field_date_3']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_3']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_3']['ui_name'] = 'Date - Full Date and Time Accessibility Token';
  $handler->display->display_options['fields']['field_date_3']['label'] = '';
  $handler->display->display_options['fields']['field_date_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_3']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Date - Time */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['ui_name'] = 'Date - Time';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date']['element_class'] = 'calendar-time';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Date - Day */
  $handler->display->display_options['fields']['field_date_2']['id'] = 'field_date_2';
  $handler->display->display_options['fields']['field_date_2']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_2']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_2']['ui_name'] = 'Date - Day';
  $handler->display->display_options['fields']['field_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_date_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_date_2']['alter']['path'] = '[field_link_value]';
  $handler->display->display_options['fields']['field_date_2']['alter']['alt'] = '[field_date_3]';
  $handler->display->display_options['fields']['field_date_2']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date_2']['element_class'] = 'calendar-day';
  $handler->display->display_options['fields']['field_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_2']['settings'] = array(
    'format_type' => 'two_digit_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Date - Month */
  $handler->display->display_options['fields']['field_date_1']['id'] = 'field_date_1';
  $handler->display->display_options['fields']['field_date_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_1']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_1']['ui_name'] = 'Date - Month';
  $handler->display->display_options['fields']['field_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_date_1']['alter']['path'] = '[field_link_value]';
  $handler->display->display_options['fields']['field_date_1']['alter']['alt'] = '[field_date_3]';
  $handler->display->display_options['fields']['field_date_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date_1']['element_class'] = 'calendar-month';
  $handler->display->display_options['fields']['field_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_1']['settings'] = array(
    'format_type' => 'two_digit_month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_link_value]';
  $handler->display->display_options['fields']['field_image']['alter']['alt'] = '[title] on [field_date_3]';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'event-list-image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'events-feed-thumbnail-image',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link_value']['id'] = 'field_link_value';
  $handler->display->display_options['fields']['field_link_value']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link_value']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link_value']['label'] = '';
  $handler->display->display_options['fields']['field_link_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_value']['empty'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_link_value']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_value']['type'] = 'link_absolute';
  /* Sort criterion: Event Date */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['ui_name'] = 'Event Date';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Event Date */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['ui_name'] = 'Event Date';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now -1 hour';

  /* Display: Block (2) */
  $handler = $view->new_display('block', 'Block (2)', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'homepage-events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'homepage-events';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Events - Upcoming 2 Events';

  /* Display: Block (5) */
  $handler = $view->new_display('block', 'Block (5)', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['block_description'] = 'Events - Upcoming 5 Events';

  /* Display: Block-Upcoming Events */
  $handler = $view->new_display('block', 'Block-Upcoming Events', 'block_3');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['block_description'] = 'Events (CESAP) - Upcoming 5 Events';

  /* Display: Events Page */
  $handler = $view->new_display('page', 'Events Page', 'page_4');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'More Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Date - Full Date and Time Accessibility Token */
  $handler->display->display_options['fields']['field_date_3']['id'] = 'field_date_3';
  $handler->display->display_options['fields']['field_date_3']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_3']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_3']['ui_name'] = 'Date - Full Date and Time Accessibility Token';
  $handler->display->display_options['fields']['field_date_3']['label'] = '';
  $handler->display->display_options['fields']['field_date_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_date_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_3']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_3']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link_value']['id'] = 'field_link_value';
  $handler->display->display_options['fields']['field_link_value']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link_value']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link_value']['label'] = '';
  $handler->display->display_options['fields']['field_link_value']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link_value']['empty'] = 'node/[nid]';
  $handler->display->display_options['fields']['field_link_value']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_value']['type'] = 'link_absolute';
  /* Field: Date - Month */
  $handler->display->display_options['fields']['field_date_1']['id'] = 'field_date_1';
  $handler->display->display_options['fields']['field_date_1']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_1']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_1']['ui_name'] = 'Date - Month';
  $handler->display->display_options['fields']['field_date_1']['label'] = '';
  $handler->display->display_options['fields']['field_date_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_date_1']['alter']['path'] = '[field_link_value]';
  $handler->display->display_options['fields']['field_date_1']['alter']['alt'] = '[field_date_3]';
  $handler->display->display_options['fields']['field_date_1']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date_1']['element_class'] = 'calendar-month';
  $handler->display->display_options['fields']['field_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_1']['settings'] = array(
    'format_type' => 'two_digit_month',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Date - Day */
  $handler->display->display_options['fields']['field_date_2']['id'] = 'field_date_2';
  $handler->display->display_options['fields']['field_date_2']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date_2']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date_2']['ui_name'] = 'Date - Day';
  $handler->display->display_options['fields']['field_date_2']['label'] = '';
  $handler->display->display_options['fields']['field_date_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_date_2']['alter']['path'] = '[field_link_value]';
  $handler->display->display_options['fields']['field_date_2']['alter']['alt'] = '[field_date_3]';
  $handler->display->display_options['fields']['field_date_2']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date_2']['element_class'] = 'calendar-day';
  $handler->display->display_options['fields']['field_date_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date_2']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date_2']['settings'] = array(
    'format_type' => 'two_digit_day',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Date - Time */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['ui_name'] = 'Date - Time';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date']['element_class'] = 'calendar-time';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'unca_standard_time_display',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_link_value]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title] on [field_date_3]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_location']['element_wrapper_class'] = 'event-location';
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['path'] = 'news-events/events';

  /* Display: Upcoming Events */
  $handler = $view->new_display('page', 'Upcoming Events', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_date' => 'field_date',
    'field_location' => 'field_location',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = '2013-14 REAL Events';
  $handler->display->display_options['header']['area']['content'] = '<h2>2013-14 REAL Events</h2>
Rediscovering Entertainment, Arts & Learning<br>
<a href="http://uncatickets.universitytickets.com/user_pages/event_listings.asp" target="_new">Buy tickets.</a>
<hr />';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_link_value]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title] on [field_date_3]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Subheading */
  $handler->display->display_options['fields']['field_subheading']['id'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['table'] = 'field_data_field_subheading';
  $handler->display->display_options['fields']['field_subheading']['field'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['label'] = '';
  $handler->display->display_options['fields']['field_subheading']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_subheading']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subheading']['element_default_classes'] = FALSE;
  /* Field: Date (CESAP Event TIme and Date) */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['ui_name'] = 'Date (CESAP Event TIme and Date)';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['text'] = '[field_date].';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = TRUE;
  /* Field: Line Feed */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Line Feed';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<br/>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_wrapper_class'] = 'floatL';
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium__200_width_',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'upcoming-events';

  /* Display: Past Events */
  $handler = $view->new_display('page', 'Past Events', 'page_5');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'events-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_date' => 'field_date',
    'field_location' => 'field_location',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = '2013-14 REAL Events';
  $handler->display->display_options['header']['area']['content'] = '<h2>2013-14 REAL Events</h2>
Rediscovering Entertainment, Arts & Learning<br>
<a href="http://uncatickets.universitytickets.com/user_pages/event_listings.asp" target="_new">Buy tickets.</a>
<hr />';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_link_value]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title] on [field_date_3]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['title']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Subheading */
  $handler->display->display_options['fields']['field_subheading']['id'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['table'] = 'field_data_field_subheading';
  $handler->display->display_options['fields']['field_subheading']['field'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['label'] = '';
  $handler->display->display_options['fields']['field_subheading']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_subheading']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subheading']['element_default_classes'] = FALSE;
  /* Field: Content: Date to Archive */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['text'] = '[field_date].';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'unca_cesap_event_time_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Event Date */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['ui_name'] = 'Event Date';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_date_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now +1 hour';
  $handler->display->display_options['path'] = 'past-events';

  /* Display: Next Event */
  $handler = $view->new_display('block', 'Next Event', 'block_5');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'events-list';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_date' => 'field_date',
    'field_location' => 'field_location',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'CESAP - Buy Tickets';
  $handler->display->display_options['header']['area']['content'] = '<a href="http://uncatickets.universitytickets.com/user_pages/event_listings.asp">Buy tickets now!</a>
<hr />';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_link_value]';
  $handler->display->display_options['fields']['title']['alter']['alt'] = '[title] on [field_date_3]';
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '75';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Subheading */
  $handler->display->display_options['fields']['field_subheading']['id'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['table'] = 'field_data_field_subheading';
  $handler->display->display_options['fields']['field_subheading']['field'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['label'] = '';
  $handler->display->display_options['fields']['field_subheading']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_subheading']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subheading']['element_default_classes'] = FALSE;
  /* Field: Date (CESAP Event TIme and Date) */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['ui_name'] = 'Date (CESAP Event TIme and Date)';
  $handler->display->display_options['fields']['field_date']['label'] = '';
  $handler->display->display_options['fields']['field_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_date']['alter']['text'] = '[field_date].';
  $handler->display->display_options['fields']['field_date']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_date']['element_class'] = 'calendar-time';
  $handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'unca_cesap_event_time_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = '';
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = TRUE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Event  (CESAP) - Next Event';
  $export['Events'] = $view;

  return $export;
}
