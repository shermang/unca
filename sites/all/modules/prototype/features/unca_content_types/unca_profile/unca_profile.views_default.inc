<?php
/**
 * @file
 * unca_profile.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function unca_profile_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Profile_SPIFF';
  $view->description = '';
  $view->tag = 'SPIFFs';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'profile_types' => 'profile_types',
    'course_catalogs' => 0,
    'course_days' => 0,
    'course_times' => 0,
    'course_topic' => 0,
    'department' => 0,
    'event_categories' => 0,
    'event_type' => 0,
    'groups_policies_apply_to' => 0,
    'humanities_level' => 0,
    'location_type' => 0,
    'news_and_event_type' => 0,
    'news_and_events_categories' => 0,
    'news_category' => 0,
    'policy_categories' => 0,
    'policy_owner' => 0,
    'program_types' => 0,
    'project_type' => 0,
    'region' => 0,
    'responsible_office' => 0,
    'student_organization' => 0,
    'tags' => 0,
    'university_semester' => 0,
    'university_term' => 0,
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_fid']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_fid']['label'] = '';
  $handler->display->display_options['fields']['field_image_fid']['element_class'] = 'profile-headshot right';
  $handler->display->display_options['fields']['field_image_fid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_fid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_fid']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_fid']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'p';
  $handler->display->display_options['fields']['title']['element_class'] = 'profile-name';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Subheading */
  $handler->display->display_options['fields']['field_subheading']['id'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['table'] = 'field_data_field_subheading';
  $handler->display->display_options['fields']['field_subheading']['field'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['label'] = '';
  $handler->display->display_options['fields']['field_subheading']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_subheading']['element_class'] = 'profile-major';
  $handler->display->display_options['fields']['field_subheading']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subheading']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subheading']['settings'] = array(
    'trim_length' => '10',
  );
  /* Field: Teaser (Summary) */
  $handler->display->display_options['fields']['field_teaser_text_value']['id'] = 'field_teaser_text_value';
  $handler->display->display_options['fields']['field_teaser_text_value']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['field_teaser_text_value']['field'] = 'body';
  $handler->display->display_options['fields']['field_teaser_text_value']['ui_name'] = 'Teaser (Summary)';
  $handler->display->display_options['fields']['field_teaser_text_value']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_text_value']['element_class'] = 'profile-abstract';
  $handler->display->display_options['fields']['field_teaser_text_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_text_value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_text_value']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_teaser_text_value']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a class="button-blue-rounded" href="/faces/[name]"><span>Meet more of our [name]</span></a>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
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
  /* Filter criterion: Content: Profile Type (field_profile_type_term) */
  $handler->display->display_options['filters']['field_profile_type_term_tid']['id'] = 'field_profile_type_term_tid';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['table'] = 'field_data_field_profile_type_term';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['field'] = 'field_profile_type_term_tid';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_profile_type_term_tid']['expose']['operator_id'] = 'field_profile_type_term_tid_op';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['expose']['label'] = 'Profile Type (field_profile_type_term)';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['expose']['operator'] = 'field_profile_type_term_tid_op';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['expose']['identifier'] = 'field_profile_type_term_tid';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['vocabulary'] = 'profile_types';

  /* Display: Footer Spiff */
  $handler = $view->new_display('block', 'Footer Spiff', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_fid']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_fid']['label'] = '';
  $handler->display->display_options['fields']['field_image_fid']['element_class'] = 'spiff-thumbnail';
  $handler->display->display_options['fields']['field_image_fid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_fid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_fid']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_fid']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'p';
  $handler->display->display_options['fields']['title']['element_class'] = 'spiff-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Teaser (Summary) */
  $handler->display->display_options['fields']['field_teaser_text_value']['id'] = 'field_teaser_text_value';
  $handler->display->display_options['fields']['field_teaser_text_value']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['field_teaser_text_value']['field'] = 'body';
  $handler->display->display_options['fields']['field_teaser_text_value']['ui_name'] = 'Teaser (Summary)';
  $handler->display->display_options['fields']['field_teaser_text_value']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_text_value']['alter']['max_length'] = '150';
  $handler->display->display_options['fields']['field_teaser_text_value']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_text_value']['element_class'] = 'spiff-summary';
  $handler->display->display_options['fields']['field_teaser_text_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_text_value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_text_value']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_teaser_text_value']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a class="button-blue-rounded" href="/faces/[name]"><span>Meet more of our [name]</span></a>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
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
  /* Filter criterion: Content: Profile Type (field_profile_type_term) */
  $handler->display->display_options['filters']['field_profile_type_term_tid']['id'] = 'field_profile_type_term_tid';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['table'] = 'field_data_field_profile_type_term';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['field'] = 'field_profile_type_term_tid';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['field_profile_type_term_tid']['expose']['operator_id'] = 'field_profile_type_term_tid_op';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['expose']['label'] = 'Profile Type (field_profile_type_term)';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['expose']['operator'] = 'field_profile_type_term_tid_op';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['expose']['identifier'] = 'field_profile_type_term_tid';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['vocabulary'] = 'profile_types';

  /* Display: Four Profiles Ask */
  $handler = $view->new_display('block', 'Four Profiles Ask', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_fid']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_fid']['label'] = '';
  $handler->display->display_options['fields']['field_image_fid']['element_class'] = 'spiff-thumbnail';
  $handler->display->display_options['fields']['field_image_fid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_fid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_fid']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_fid']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'p';
  $handler->display->display_options['fields']['title']['element_class'] = 'spiff-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Subheading */
  $handler->display->display_options['fields']['field_subheading']['id'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['table'] = 'field_data_field_subheading';
  $handler->display->display_options['fields']['field_subheading']['field'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['label'] = '';
  $handler->display->display_options['fields']['field_subheading']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_subheading']['element_class'] = 'spiff-subheading';
  $handler->display->display_options['fields']['field_subheading']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subheading']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subheading']['settings'] = array(
    'trim_length' => '10',
  );
  /* Field: Teaser (Summary) */
  $handler->display->display_options['fields']['field_teaser_text_value']['id'] = 'field_teaser_text_value';
  $handler->display->display_options['fields']['field_teaser_text_value']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['field_teaser_text_value']['field'] = 'body';
  $handler->display->display_options['fields']['field_teaser_text_value']['ui_name'] = 'Teaser (Summary)';
  $handler->display->display_options['fields']['field_teaser_text_value']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_text_value']['element_class'] = 'spiff-summary';
  $handler->display->display_options['fields']['field_teaser_text_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_text_value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_text_value']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_teaser_text_value']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a class="button-blue-rounded" href="/faces/[name]"><span>Meet more of our [name]</span></a>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
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
  /* Filter criterion: Content: Profile Type (field_profile_type_term) */
  $handler->display->display_options['filters']['field_profile_type_term_tid']['id'] = 'field_profile_type_term_tid';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['table'] = 'field_data_field_profile_type_term';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['field'] = 'field_profile_type_term_tid';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['value'] = array(
    71 => '71',
  );
  $handler->display->display_options['filters']['field_profile_type_term_tid']['expose']['operator_id'] = 'field_profile_type_term_tid_op';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['expose']['label'] = 'Profile Type (field_profile_type_term)';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['expose']['operator'] = 'field_profile_type_term_tid_op';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['expose']['identifier'] = 'field_profile_type_term_tid';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_profile_type_term_tid']['vocabulary'] = 'profile_types';

  /* Display: Four Profiles Giving */
  $handler = $view->new_display('block', 'Four Profiles Giving', 'block_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_fid']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_fid']['label'] = '';
  $handler->display->display_options['fields']['field_image_fid']['element_class'] = 'spiff-thumbnail';
  $handler->display->display_options['fields']['field_image_fid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_fid']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image_fid']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_fid']['settings'] = array(
    'image_style' => 'square_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'p';
  $handler->display->display_options['fields']['title']['element_class'] = 'spiff-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Subheading */
  $handler->display->display_options['fields']['field_subheading']['id'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['table'] = 'field_data_field_subheading';
  $handler->display->display_options['fields']['field_subheading']['field'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['label'] = '';
  $handler->display->display_options['fields']['field_subheading']['element_type'] = 'p';
  $handler->display->display_options['fields']['field_subheading']['element_class'] = 'spiff-subheading';
  $handler->display->display_options['fields']['field_subheading']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_subheading']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_subheading']['settings'] = array(
    'trim_length' => '10',
  );
  /* Field: Teaser (Summary) */
  $handler->display->display_options['fields']['field_teaser_text_value']['id'] = 'field_teaser_text_value';
  $handler->display->display_options['fields']['field_teaser_text_value']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['field_teaser_text_value']['field'] = 'body';
  $handler->display->display_options['fields']['field_teaser_text_value']['ui_name'] = 'Teaser (Summary)';
  $handler->display->display_options['fields']['field_teaser_text_value']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_text_value']['element_class'] = 'spiff-summary';
  $handler->display->display_options['fields']['field_teaser_text_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_text_value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_text_value']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_teaser_text_value']['settings'] = array(
    'trim_length' => '150',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<a class="button-blue-rounded" href="/faces/[name]"><span>Meet more of our [name]</span></a>';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $export['Profile_SPIFF'] = $view;

  $view = new view();
  $view->name = 'Profiles';
  $view->description = 'Queries profiles for the profiles page.';
  $view->tag = 'Profiles';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Faces of UNC Asheville';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'area';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['content'] = 'Meet individuals who shape the UNC Asheville academic community.';
  $handler->display->display_options['header']['text']['format'] = '2';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Field: Teaser (Node Summary) */
  $handler->display->display_options['fields']['field_teaser_text_value']['id'] = 'field_teaser_text_value';
  $handler->display->display_options['fields']['field_teaser_text_value']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['field_teaser_text_value']['field'] = 'body';
  $handler->display->display_options['fields']['field_teaser_text_value']['ui_name'] = 'Teaser (Node Summary)';
  $handler->display->display_options['fields']['field_teaser_text_value']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_text_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_text_value']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_teaser_text_value']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_fid']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_fid']['label'] = '';
  $handler->display->display_options['fields']['field_image_fid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_fid']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_fid']['settings'] = array(
    'image_style' => 'profile-headshot-image',
    'image_link' => '',
  );
  /* Field: Content: Subheading */
  $handler->display->display_options['fields']['field_subhead_value']['id'] = 'field_subhead_value';
  $handler->display->display_options['fields']['field_subhead_value']['table'] = 'field_data_field_subheading';
  $handler->display->display_options['fields']['field_subhead_value']['field'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subhead_value']['label'] = '';
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_firstname_value']['id'] = 'field_firstname_value';
  $handler->display->display_options['fields']['field_firstname_value']['table'] = 'field_data_field_profile_first_name';
  $handler->display->display_options['fields']['field_firstname_value']['field'] = 'field_profile_first_name';
  $handler->display->display_options['fields']['field_firstname_value']['label'] = '';
  $handler->display->display_options['fields']['field_firstname_value']['element_label_colon'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_lastname_value']['id'] = 'field_lastname_value';
  $handler->display->display_options['fields']['field_lastname_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['fields']['field_lastname_value']['field'] = 'field_profile_last_name';
  $handler->display->display_options['fields']['field_lastname_value']['label'] = '';
  $handler->display->display_options['fields']['field_lastname_value']['element_label_colon'] = FALSE;
  /* Field: Content: Suffix */
  $handler->display->display_options['fields']['field_suffix_value']['id'] = 'field_suffix_value';
  $handler->display->display_options['fields']['field_suffix_value']['table'] = 'field_data_field_profile_suffix';
  $handler->display->display_options['fields']['field_suffix_value']['field'] = 'field_profile_suffix';
  $handler->display->display_options['fields']['field_suffix_value']['label'] = '';
  $handler->display->display_options['fields']['field_suffix_value']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Profile Weight (field_profile_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_profile_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_profile_weight_value';
  /* Sort criterion: Content: Last Name (field_profile_last_name) */
  $handler->display->display_options['sorts']['field_lastname_value']['id'] = 'field_lastname_value';
  $handler->display->display_options['sorts']['field_lastname_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['sorts']['field_lastname_value']['field'] = 'field_profile_last_name_value';
  /* Sort criterion: Content: First Name (field_profile_first_name) */
  $handler->display->display_options['sorts']['field_firstname_value']['id'] = 'field_firstname_value';
  $handler->display->display_options['sorts']['field_firstname_value']['table'] = 'field_data_field_profile_first_name';
  $handler->display->display_options['sorts']['field_firstname_value']['field'] = 'field_profile_first_name_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
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
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Staff';
  $handler->display->display_options['filters']['name']['group'] = '0';
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';

  /* Display: Faculty and Staff Page */
  $handler = $view->new_display('page', 'Faculty and Staff Page', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Faculty and Staff';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_class'] = 'profile-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Teaser (Node Summary) */
  $handler->display->display_options['fields']['field_teaser_text_value']['id'] = 'field_teaser_text_value';
  $handler->display->display_options['fields']['field_teaser_text_value']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['field_teaser_text_value']['field'] = 'body';
  $handler->display->display_options['fields']['field_teaser_text_value']['ui_name'] = 'Teaser (Node Summary)';
  $handler->display->display_options['fields']['field_teaser_text_value']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_text_value']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_text_value']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_text_value']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_teaser_text_value']['element_class'] = 'profile-summary';
  $handler->display->display_options['fields']['field_teaser_text_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_text_value']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_teaser_text_value']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_fid']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_fid']['label'] = '';
  $handler->display->display_options['fields']['field_image_fid']['element_class'] = 'profile-image';
  $handler->display->display_options['fields']['field_image_fid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_fid']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_fid']['settings'] = array(
    'image_style' => 'profile-headshot-image',
    'image_link' => '',
  );
  /* Field: Content: Subheading */
  $handler->display->display_options['fields']['field_subhead_value']['id'] = 'field_subhead_value';
  $handler->display->display_options['fields']['field_subhead_value']['table'] = 'field_data_field_subheading';
  $handler->display->display_options['fields']['field_subhead_value']['field'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subhead_value']['label'] = '';
  $handler->display->display_options['fields']['field_subhead_value']['element_class'] = 'profile-subheading';
  $handler->display->display_options['fields']['field_subhead_value']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_firstname_value']['id'] = 'field_firstname_value';
  $handler->display->display_options['fields']['field_firstname_value']['table'] = 'field_data_field_profile_first_name';
  $handler->display->display_options['fields']['field_firstname_value']['field'] = 'field_profile_first_name';
  $handler->display->display_options['fields']['field_firstname_value']['label'] = '';
  $handler->display->display_options['fields']['field_firstname_value']['element_class'] = 'profile-first-name';
  $handler->display->display_options['fields']['field_firstname_value']['element_label_colon'] = FALSE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_lastname_value']['id'] = 'field_lastname_value';
  $handler->display->display_options['fields']['field_lastname_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['fields']['field_lastname_value']['field'] = 'field_profile_last_name';
  $handler->display->display_options['fields']['field_lastname_value']['label'] = '';
  $handler->display->display_options['fields']['field_lastname_value']['element_class'] = 'profile-last-name';
  $handler->display->display_options['fields']['field_lastname_value']['element_label_colon'] = FALSE;
  /* Field: Content: Suffix */
  $handler->display->display_options['fields']['field_suffix_value']['id'] = 'field_suffix_value';
  $handler->display->display_options['fields']['field_suffix_value']['table'] = 'field_data_field_profile_suffix';
  $handler->display->display_options['fields']['field_suffix_value']['field'] = 'field_profile_suffix';
  $handler->display->display_options['fields']['field_suffix_value']['label'] = '';
  $handler->display->display_options['fields']['field_suffix_value']['element_class'] = 'profile-suffix';
  $handler->display->display_options['fields']['field_suffix_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
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
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['operator'] = 'word';
  $handler->display->display_options['filters']['name']['value'] = 'Faculty Staff';
  $handler->display->display_options['filters']['name']['group'] = '0';
  $handler->display->display_options['filters']['name']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'faces/facstaff';

  /* Display: Alumni Page */
  $handler = $view->new_display('page', 'Alumni Page', 'page_3');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'Meet individuals who shape the UNC Asheville academic community.';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
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
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Alumni';
  $handler->display->display_options['filters']['name']['group'] = '0';
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['path'] = 'faces/alumni';

  /* Display: Students Page */
  $handler = $view->new_display('page', 'Students Page', 'page_4');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
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
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Students';
  $handler->display->display_options['filters']['name']['group'] = '0';
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['path'] = 'faces/students';

  /* Display: Faculty Page */
  $handler = $view->new_display('page', 'Faculty Page', 'page_6');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
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
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Faculty';
  $handler->display->display_options['filters']['name']['group'] = '0';
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['path'] = 'faces/faculty';

  /* Display: Administrative Staff Page */
  $handler = $view->new_display('page', 'Administrative Staff Page', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Administrative Staff';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
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
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Administrative Staff';
  $handler->display->display_options['filters']['name']['group'] = '0';
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['path'] = 'faces/administrative-staff';

  /* Display: Deans and Provost's Staff Page */
  $handler = $view->new_display('page', 'Deans and Provost\'s Staff Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Deans and Provost\'s Staff';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
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
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Deans and Provost\'s Staff';
  $handler->display->display_options['filters']['name']['group'] = '0';
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['path'] = 'faces/deans-and-provosts-staff';

  /* Display: Academic Units Page */
  $handler = $view->new_display('page', 'Academic Units Page', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Academic Affairs Units';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Profile Weight (field_profile_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_profile_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_profile_weight_value';
  /* Sort criterion: Content: Subheading (field_subheading) */
  $handler->display->display_options['sorts']['field_subhead_value']['id'] = 'field_subhead_value';
  $handler->display->display_options['sorts']['field_subhead_value']['table'] = 'field_data_field_subheading';
  $handler->display->display_options['sorts']['field_subhead_value']['field'] = 'field_subheading_value';
  /* Sort criterion: Content: Last Name (field_profile_last_name) */
  $handler->display->display_options['sorts']['field_lastname_value']['id'] = 'field_lastname_value';
  $handler->display->display_options['sorts']['field_lastname_value']['table'] = 'field_data_field_profile_last_name';
  $handler->display->display_options['sorts']['field_lastname_value']['field'] = 'field_profile_last_name_value';
  /* Sort criterion: Content: First Name (field_profile_first_name) */
  $handler->display->display_options['sorts']['field_firstname_value']['id'] = 'field_firstname_value';
  $handler->display->display_options['sorts']['field_firstname_value']['table'] = 'field_data_field_profile_first_name';
  $handler->display->display_options['sorts']['field_firstname_value']['field'] = 'field_profile_first_name_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
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
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Academic Units';
  $handler->display->display_options['filters']['name']['group'] = '0';
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['path'] = 'faces/academic-units';

  /* Display: Staff Page */
  $handler = $view->new_display('page', 'Staff Page', 'page_8');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
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
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Staff';
  $handler->display->display_options['filters']['name']['group'] = '0';
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['path'] = 'faces/staff';

  /* Display: Board of Trustees Page */
  $handler = $view->new_display('page', 'Board of Trustees Page', 'page_9');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
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
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Board of Trustees';
  $handler->display->display_options['filters']['name']['group'] = '0';
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['path'] = 'faces/bot';

  /* Display: Senior Staff Page */
  $handler = $view->new_display('page', 'Senior Staff Page', 'page_10');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
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
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Senior Staff';
  $handler->display->display_options['filters']['name']['group'] = '0';
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['path'] = 'faces/senior-staff';

  /* Display: Legal Counsel Staff Page */
  $handler = $view->new_display('page', 'Legal Counsel Staff Page', 'page_11');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
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
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Legal Counsel';
  $handler->display->display_options['filters']['name']['group'] = '0';
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['path'] = 'faces/legal-counsel';

  /* Display: Internal Audit Page */
  $handler = $view->new_display('page', 'Internal Audit Page', 'page_12');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
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
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Internal Auditor';
  $handler->display->display_options['filters']['name']['group'] = '0';
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['path'] = 'faces/internal-audit';

  /* Display: Random Alumni */
  $handler = $view->new_display('block', 'Random Alumni', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Field: Teaser (Node Summary) */
  $handler->display->display_options['fields']['field_teaser_text_value']['id'] = 'field_teaser_text_value';
  $handler->display->display_options['fields']['field_teaser_text_value']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['field_teaser_text_value']['field'] = 'body';
  $handler->display->display_options['fields']['field_teaser_text_value']['ui_name'] = 'Teaser (Node Summary)';
  $handler->display->display_options['fields']['field_teaser_text_value']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_text_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_text_value']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_teaser_text_value']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_fid']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_fid']['label'] = '';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = 'Term';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
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
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['name']['value'] = 'Staff';
  $handler->display->display_options['filters']['name']['group'] = '0';
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';

  /* Display: UNCA Profiles */
  $handler = $view->new_display('page', 'UNCA Profiles', 'page_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Faces of UNC Asheville';
  $handler->display->display_options['display_description'] = 'Queries profiles for the profiles page.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  /* Field: Teaser (Node Summary) */
  $handler->display->display_options['fields']['field_teaser_text_value']['id'] = 'field_teaser_text_value';
  $handler->display->display_options['fields']['field_teaser_text_value']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['field_teaser_text_value']['field'] = 'body';
  $handler->display->display_options['fields']['field_teaser_text_value']['ui_name'] = 'Teaser (Node Summary)';
  $handler->display->display_options['fields']['field_teaser_text_value']['label'] = '';
  $handler->display->display_options['fields']['field_teaser_text_value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_teaser_text_value']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_teaser_text_value']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['fields']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_fid']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_fid']['label'] = '';
  /* Field: Content: Subheading */
  $handler->display->display_options['fields']['field_subhead_value']['id'] = 'field_subhead_value';
  $handler->display->display_options['fields']['field_subhead_value']['table'] = 'field_data_field_subheading';
  $handler->display->display_options['fields']['field_subhead_value']['field'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subhead_value']['label'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Profile Weight (field_profile_weight) */
  $handler->display->display_options['sorts']['field_profile_weight_value']['id'] = 'field_profile_weight_value';
  $handler->display->display_options['sorts']['field_profile_weight_value']['table'] = 'field_data_field_profile_weight';
  $handler->display->display_options['sorts']['field_profile_weight_value']['field'] = 'field_profile_weight_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['case'] = 'ucfirst';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'faces';

  /* Display: UNCA Profiles Feed */
  $handler = $view->new_display('feed', 'UNCA Profiles Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Profile Weight (field_profile_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_profile_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_profile_weight_value';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'profiles' => 'profiles',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'faces/feed';
  $export['Profiles'] = $view;

  $view = new view();
  $view->name = 'profile_random';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Profile Random';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'file_view_mode' => 'media_link',
  );
  /* Field: Content: Subheading */
  $handler->display->display_options['fields']['field_subheading']['id'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['table'] = 'field_data_field_subheading';
  $handler->display->display_options['fields']['field_subheading']['field'] = 'field_subheading';
  $handler->display->display_options['fields']['field_subheading']['label'] = '';
  $handler->display->display_options['fields']['field_subheading']['element_label_colon'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'profiles' => 'profiles',
  );
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['value'] = array(
    0 => '117',
  );
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'profile_types';
  /* Filter criterion: Content: Image (field_image:fid) */
  $handler->display->display_options['filters']['field_image_fid']['id'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['table'] = 'field_data_field_image';
  $handler->display->display_options['filters']['field_image_fid']['field'] = 'field_image_fid';
  $handler->display->display_options['filters']['field_image_fid']['operator'] = 'not empty';

  /* Display: Block (Staff) */
  $handler = $view->new_display('block', 'Block (Staff)', 'block');
  $export['profile_random'] = $view;

  return $export;
}
