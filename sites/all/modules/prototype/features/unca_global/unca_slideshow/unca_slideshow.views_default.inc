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
  $view->name = 'unca_slideshow';
  $view->description = '';
  $view->tag = 'slideshow';
  $view->base_table = 'node';
  $view->human_name = 'UNCA Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Slideshow Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'unca_optionset';
  $handler->display->display_options['style_options']['captionfield'] = 'nothing';
  $handler->display->display_options['style_options']['id'] = 'unca-slideshow-flexslider';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Slideshow (field_slideshow_term) */
  $handler->display->display_options['relationships']['field_slideshow_term_tid']['id'] = 'field_slideshow_term_tid';
  $handler->display->display_options['relationships']['field_slideshow_term_tid']['table'] = 'field_data_field_slideshow_term';
  $handler->display->display_options['relationships']['field_slideshow_term_tid']['field'] = 'field_slideshow_term_tid';
  $handler->display->display_options['relationships']['field_slideshow_term_tid']['required'] = TRUE;
  /* Relationship: Taxonomy term: Content using Slideshow */
  $handler->display->display_options['relationships']['reverse_field_slideshow_term_node']['id'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['relationships']['reverse_field_slideshow_term_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_slideshow_term_node']['field'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['relationships']['reverse_field_slideshow_term_node']['relationship'] = 'field_slideshow_term_tid';
  $handler->display->display_options['relationships']['reverse_field_slideshow_term_node']['required'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_absolute';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Read More Text */
  $handler->display->display_options['fields']['field_read_more']['id'] = 'field_read_more';
  $handler->display->display_options['fields']['field_read_more']['table'] = 'field_data_field_read_more';
  $handler->display->display_options['fields']['field_read_more']['field'] = 'field_read_more';
  $handler->display->display_options['fields']['field_read_more']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['field_read_more']['label'] = '';
  $handler->display->display_options['fields']['field_read_more']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_read_more']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_read_more']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_read_more']['alter']['alt'] = '[title_1]';
  $handler->display->display_options['fields']['field_read_more']['alter']['link_class'] = 'read-more';
  $handler->display->display_options['fields']['field_read_more']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_read_more']['hide_empty'] = TRUE;
  /* Field: Caption */
  $handler->display->display_options['fields']['field_subheading']['id'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['table'] = 'field_data_field_subheading';
  $handler->display->display_options['fields']['field_subheading']['field'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['field_subheading']['ui_name'] = 'Caption';
  $handler->display->display_options['fields']['field_subheading']['label'] = '';
  $handler->display->display_options['fields']['field_subheading']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subheading']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subheading']['alter']['text'] = '<div class="subheading">[field_subheading]</div>';
  $handler->display->display_options['fields']['field_subheading']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subheading']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subheading']['hide_empty'] = TRUE;
  /* Field: Slideshow caption */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Slideshow caption';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_read_more]
<h2 class="title"><a href="[field_link]">[title_1]</a></h2>
[field_subheading]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'unca_slideshow_sort:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'field_slideshow_term_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow_item' => 'slideshow_item',
  );
  /* Filter criterion: Content: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';

  /* Display: EVA Field - Slides */
  $handler = $view->new_display('entity_view', 'EVA Field - Slides', 'entity_view_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'unca-flexslider-slideshow-slides';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_absolute';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Read More Text */
  $handler->display->display_options['fields']['field_read_more']['id'] = 'field_read_more';
  $handler->display->display_options['fields']['field_read_more']['table'] = 'field_data_field_read_more';
  $handler->display->display_options['fields']['field_read_more']['field'] = 'field_read_more';
  $handler->display->display_options['fields']['field_read_more']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['field_read_more']['label'] = '';
  $handler->display->display_options['fields']['field_read_more']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_read_more']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_read_more']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_read_more']['alter']['alt'] = '[title_1]';
  $handler->display->display_options['fields']['field_read_more']['alter']['link_class'] = 'read-more';
  $handler->display->display_options['fields']['field_read_more']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_read_more']['hide_empty'] = TRUE;
  /* Field: Caption */
  $handler->display->display_options['fields']['field_subheading']['id'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['table'] = 'field_data_field_subheading';
  $handler->display->display_options['fields']['field_subheading']['field'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['field_subheading']['ui_name'] = 'Caption';
  $handler->display->display_options['fields']['field_subheading']['label'] = '';
  $handler->display->display_options['fields']['field_subheading']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subheading']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subheading']['alter']['text'] = '<div class="subheading">[field_subheading]</div>';
  $handler->display->display_options['fields']['field_subheading']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subheading']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subheading']['hide_empty'] = TRUE;
  /* Field: Slideshow caption */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Slideshow caption';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_read_more]
<h2 class="title"><a href="[field_link]">[title_1]</a></h2>
[field_subheading]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Slideshow (field_slideshow_term) */
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['id'] = 'field_slideshow_term_tid';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['table'] = 'field_data_field_slideshow_term';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['field'] = 'field_slideshow_term_tid';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow_item' => 'slideshow_item',
  );
  /* Filter criterion: Content: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';
  /* Filter criterion: Taxonomy term: Short Slideshow (5 Items or fewer) (field_5_item_slideshow) */
  $handler->display->display_options['filters']['field_5_item_slideshow_value']['id'] = 'field_5_item_slideshow_value';
  $handler->display->display_options['filters']['field_5_item_slideshow_value']['table'] = 'field_data_field_5_item_slideshow';
  $handler->display->display_options['filters']['field_5_item_slideshow_value']['field'] = 'field_5_item_slideshow_value';
  $handler->display->display_options['filters']['field_5_item_slideshow_value']['relationship'] = 'field_slideshow_term_tid';
  $handler->display->display_options['filters']['field_5_item_slideshow_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_5_item_slideshow_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'page',
  );

  /* Display: Slideshow thumbnails view attachment */
  $handler = $view->new_display('attachment', 'Slideshow thumbnails view attachment', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'unca-flexslider-thumbnails-carousel';
  $handler->display->display_options['display_description'] = 'more than five slides';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'unca_thumbnails_optionset';
  $handler->display->display_options['style_options']['id'] = 'unca-slideshow-flexslider-thumbs';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'thumbnail';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'flexslider_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Slideshow (field_slideshow_term) */
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['id'] = 'field_slideshow_term_tid';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['table'] = 'field_data_field_slideshow_term';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['field'] = 'field_slideshow_term_tid';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow_item' => 'slideshow_item',
  );
  /* Filter criterion: Content: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['displays'] = array(
    'entity_view_1' => 'entity_view_1',
    'default' => 0,
    'entity_view_2' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Slideshow thumbnails view attachment five slides */
  $handler = $view->new_display('attachment', 'Slideshow thumbnails view attachment five slides', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'unca-flexslider-thumbnails-carousel';
  $handler->display->display_options['display_description'] = 'five slides';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'unca_thumbnails_optionset_2';
  $handler->display->display_options['style_options']['id'] = 'unca-slideshow-flexslider-thumbs';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'thumbnail';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'flexslider_thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Slideshow (field_slideshow_term) */
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['id'] = 'field_slideshow_term_tid';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['table'] = 'field_data_field_slideshow_term';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['field'] = 'field_slideshow_term_tid';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow_item' => 'slideshow_item',
  );
  /* Filter criterion: Content: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'entity_view_1' => 0,
    'five_slider_display' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: five-slider-display */
  $handler = $view->new_display('entity_view', 'five-slider-display', 'five_slider_display');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'unca-flexslider-slideshow-slides';
  $handler->display->display_options['display_description'] = 'display that uses five thumbnails';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'unca_five_slider_optionset';
  $handler->display->display_options['style_options']['captionfield'] = 'nothing';
  $handler->display->display_options['style_options']['id'] = 'unca-five-slider';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['empty'] = '[path]';
  $handler->display->display_options['fields']['field_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link']['type'] = 'link_absolute';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Read More Text */
  $handler->display->display_options['fields']['field_read_more']['id'] = 'field_read_more';
  $handler->display->display_options['fields']['field_read_more']['table'] = 'field_data_field_read_more';
  $handler->display->display_options['fields']['field_read_more']['field'] = 'field_read_more';
  $handler->display->display_options['fields']['field_read_more']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['field_read_more']['label'] = '';
  $handler->display->display_options['fields']['field_read_more']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_read_more']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_read_more']['alter']['path'] = '[field_link]';
  $handler->display->display_options['fields']['field_read_more']['alter']['alt'] = '[title_1]';
  $handler->display->display_options['fields']['field_read_more']['alter']['link_class'] = 'read-more';
  $handler->display->display_options['fields']['field_read_more']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_read_more']['hide_empty'] = TRUE;
  /* Field: Caption */
  $handler->display->display_options['fields']['field_subheading']['id'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['table'] = 'field_data_field_subheading';
  $handler->display->display_options['fields']['field_subheading']['field'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['field_subheading']['ui_name'] = 'Caption';
  $handler->display->display_options['fields']['field_subheading']['label'] = '';
  $handler->display->display_options['fields']['field_subheading']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subheading']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_subheading']['alter']['text'] = '<div class="subheading">[field_subheading]</div>';
  $handler->display->display_options['fields']['field_subheading']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subheading']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subheading']['hide_empty'] = TRUE;
  /* Field: Slideshow caption */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Slideshow caption';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_read_more]
<h2 class="title"><a href="[field_link]">[title_1]</a></h2>
[field_subheading]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Slideshow (field_slideshow_term) */
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['id'] = 'field_slideshow_term_tid';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['table'] = 'field_data_field_slideshow_term';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['field'] = 'field_slideshow_term_tid';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow_item' => 'slideshow_item',
  );
  /* Filter criterion: Content: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';
  /* Filter criterion: Taxonomy term: Short Slideshow (5 Items or fewer) (field_5_item_slideshow) */
  $handler->display->display_options['filters']['field_5_item_slideshow_value']['id'] = 'field_5_item_slideshow_value';
  $handler->display->display_options['filters']['field_5_item_slideshow_value']['table'] = 'field_data_field_5_item_slideshow';
  $handler->display->display_options['filters']['field_5_item_slideshow_value']['field'] = 'field_5_item_slideshow_value';
  $handler->display->display_options['filters']['field_5_item_slideshow_value']['relationship'] = 'field_slideshow_term_tid';
  $handler->display->display_options['filters']['field_5_item_slideshow_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'page',
  );
  $export['unca_slideshow'] = $view;

  $view = new view();
  $view->name = 'unca_slideshow_sort';
  $view->description = '';
  $view->tag = 'slideshow';
  $view->base_table = 'node';
  $view->human_name = 'UNCA Slideshow Sort';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Slide Sorting';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access draggableviews';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_image' => 'field_image',
    'title_1' => 'title_1',
    'tid' => 'tid',
    'draggableviews' => 'draggableviews',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'tid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Slideshow (field_slideshow_term) */
  $handler->display->display_options['relationships']['field_slideshow_term_tid']['id'] = 'field_slideshow_term_tid';
  $handler->display->display_options['relationships']['field_slideshow_term_tid']['table'] = 'field_data_field_slideshow_term';
  $handler->display->display_options['relationships']['field_slideshow_term_tid']['field'] = 'field_slideshow_term_tid';
  $handler->display->display_options['relationships']['field_slideshow_term_tid']['required'] = TRUE;
  /* Relationship: Taxonomy term: Content using Slideshow */
  $handler->display->display_options['relationships']['reverse_field_slideshow_term_node']['id'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['relationships']['reverse_field_slideshow_term_node']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['relationships']['reverse_field_slideshow_term_node']['field'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['relationships']['reverse_field_slideshow_term_node']['relationship'] = 'field_slideshow_term_tid';
  $handler->display->display_options['relationships']['reverse_field_slideshow_term_node']['required'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Slideshow (field_slideshow_term) */
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['id'] = 'field_slideshow_term_tid';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['table'] = 'field_data_field_slideshow_term';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['field'] = 'field_slideshow_term_tid';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_slideshow_term_tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['filters']['type']['value'] = array(
    'slideshow_item' => 'slideshow_item',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_slideshow_term_node';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/content/node/%/slide-sort';
  $export['unca_slideshow_sort'] = $view;

  return $export;
}
