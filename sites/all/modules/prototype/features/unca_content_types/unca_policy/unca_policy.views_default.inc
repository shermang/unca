<?php
/**
 * @file
 * unca_policy.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function unca_policy_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'Policies';
  $view->description = 'policies';
  $view->tag = '';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'UNC Asheville Policies';
  $handler->display->display_options['css_class'] = 'view-Policies view-id-Policies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['text']['id'] = 'area';
  $handler->display->display_options['footer']['text']['table'] = 'views';
  $handler->display->display_options['footer']['text']['field'] = 'area';
  $handler->display->display_options['footer']['text']['content'] = '<script language="JavaScript">
//here you place the ids of every element you want.
var id="edit-submit-Policies";
var e = document.getElementById(id);
e.style.display=\'block\';
</script>';
  $handler->display->display_options['footer']['text']['format'] = '2';
  /* Field: Content: Approval Authority */
  $handler->display->display_options['fields']['field_approved_by_value']['id'] = 'field_approved_by_value';
  $handler->display->display_options['fields']['field_approved_by_value']['table'] = 'field_data_field_policy_approved_by';
  $handler->display->display_options['fields']['field_approved_by_value']['field'] = 'field_policy_approved_by';
  $handler->display->display_options['fields']['field_approved_by_value']['label'] = 'Approved By';
  $handler->display->display_options['fields']['field_approved_by_value']['element_type'] = '0';
  $handler->display->display_options['fields']['field_approved_by_value']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_approved_by_value']['element_default_classes'] = FALSE;
  /* Field: Content: Associated Forms */
  $handler->display->display_options['fields']['field_associated_forms_value']['id'] = 'field_associated_forms_value';
  $handler->display->display_options['fields']['field_associated_forms_value']['table'] = 'field_data_field_policy_associated_forms';
  $handler->display->display_options['fields']['field_associated_forms_value']['field'] = 'field_policy_associated_forms';
  $handler->display->display_options['fields']['field_associated_forms_value']['element_type'] = '0';
  $handler->display->display_options['fields']['field_associated_forms_value']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_associated_forms_value']['element_default_classes'] = FALSE;
  /* Field: Content: Policy Number */
  $handler->display->display_options['fields']['field_policy_number_value']['id'] = 'field_policy_number_value';
  $handler->display->display_options['fields']['field_policy_number_value']['table'] = 'field_data_field_policy_number';
  $handler->display->display_options['fields']['field_policy_number_value']['field'] = 'field_policy_number';
  /* Field: Content: Policy Type */
  $handler->display->display_options['fields']['field_policy_type_value']['id'] = 'field_policy_type_value';
  $handler->display->display_options['fields']['field_policy_type_value']['table'] = 'field_data_field_policy_type';
  $handler->display->display_options['fields']['field_policy_type_value']['field'] = 'field_policy_type';
  $handler->display->display_options['fields']['field_policy_type_value']['element_type'] = '0';
  $handler->display->display_options['fields']['field_policy_type_value']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_policy_type_value']['element_default_classes'] = FALSE;
  /* Field: Content: Reference Materials */
  $handler->display->display_options['fields']['field_reference_materials_value']['id'] = 'field_reference_materials_value';
  $handler->display->display_options['fields']['field_reference_materials_value']['table'] = 'field_data_field_policy_reference_materials';
  $handler->display->display_options['fields']['field_reference_materials_value']['field'] = 'field_policy_reference_materials';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['field_teaser_text_value']['id'] = 'field_teaser_text_value';
  $handler->display->display_options['fields']['field_teaser_text_value']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['field_teaser_text_value']['field'] = 'body';
  $handler->display->display_options['fields']['field_teaser_text_value']['label'] = 'Teaser';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Approval Date */
  $handler->display->display_options['fields']['field_approval_date_value']['id'] = 'field_approval_date_value';
  $handler->display->display_options['fields']['field_approval_date_value']['table'] = 'field_data_field_policy_approval_date';
  $handler->display->display_options['fields']['field_approval_date_value']['field'] = 'field_policy_approval_date';
  $handler->display->display_options['fields']['field_approval_date_value']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_approval_date_value']['element_class'] = 'date-display-single';
  $handler->display->display_options['fields']['field_approval_date_value']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_approval_date_value']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Origination Date */
  $handler->display->display_options['fields']['field_date_issued_value']['id'] = 'field_date_issued_value';
  $handler->display->display_options['fields']['field_date_issued_value']['table'] = 'field_data_field_policy_origination_date';
  $handler->display->display_options['fields']['field_date_issued_value']['field'] = 'field_policy_origination_date';
  /* Field: Content: Policy Code */
  $handler->display->display_options['fields']['field_policy_code_value']['id'] = 'field_policy_code_value';
  $handler->display->display_options['fields']['field_policy_code_value']['table'] = 'field_data_field_policy_code';
  $handler->display->display_options['fields']['field_policy_code_value']['field'] = 'field_policy_code';
  /* Sort criterion: Content: Policy Number (field_policy_number) */
  $handler->display->display_options['sorts']['field_policy_number_value_1']['id'] = 'field_policy_number_value_1';
  $handler->display->display_options['sorts']['field_policy_number_value_1']['table'] = 'field_data_field_policy_number';
  $handler->display->display_options['sorts']['field_policy_number_value_1']['field'] = 'field_policy_number_value';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'policy' => 'policy',
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
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['group'] = '0';
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Responsible Office';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'course_times';
  $handler->display->display_options['filters']['tid_1']['hierarchy'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = '0';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'course_catalogs';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = '0';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by Title:';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['body']['id'] = 'body';
  $handler->display->display_options['filters']['body']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body']['field'] = 'body';
  $handler->display->display_options['filters']['body']['operator'] = 'contains';
  $handler->display->display_options['filters']['body']['group'] = '0';
  $handler->display->display_options['filters']['body']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body']['expose']['operator_id'] = 'body_op';
  $handler->display->display_options['filters']['body']['expose']['label'] = 'Search by Content:';
  $handler->display->display_options['filters']['body']['expose']['operator'] = 'body_op';
  $handler->display->display_options['filters']['body']['expose']['identifier'] = 'body';
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Body (body)';
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';

  /* Display: UNC Asheville Policies */
  $handler = $view->new_display('page', 'UNC Asheville Policies', 'page_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'policy' => 'policy',
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
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid_1']['id'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid_1']['field'] = 'tid';
  $handler->display->display_options['filters']['tid_1']['group'] = '0';
  $handler->display->display_options['filters']['tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid_1']['expose']['operator_id'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['label'] = 'Responsible Office';
  $handler->display->display_options['filters']['tid_1']['expose']['operator'] = 'tid_1_op';
  $handler->display->display_options['filters']['tid_1']['expose']['identifier'] = 'tid_1';
  $handler->display->display_options['filters']['tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['tid_1']['vocabulary'] = 'responsible_office';
  $handler->display->display_options['filters']['tid_1']['hierarchy'] = 1;
  /* Filter criterion: Content: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['group'] = '0';
  $handler->display->display_options['filters']['tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['tid']['expose']['operator_id'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['tid']['expose']['operator'] = 'tid_op';
  $handler->display->display_options['filters']['tid']['expose']['identifier'] = 'tid';
  $handler->display->display_options['filters']['tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'policy_categories';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = '0';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by Title:';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Search by Content:';
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'policies';
  $handler->display->display_options['menu']['name'] = 'primary-links';

  /* Display: Placeholder Page */
  $handler = $view->new_display('page', 'Placeholder Page', 'page_2');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'area';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['empty'] = TRUE;
  $handler->display->display_options['header']['text']['content'] = '<a href="http://www2.unca.edu/policies">View the policies of UNC Asheville</a>';
  $handler->display->display_options['header']['text']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'policy' => 'policy',
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
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '0';
  $handler->display->display_options['filters']['status_1']['group'] = '0';
  $handler->display->display_options['filters']['status_1']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'policies/placeholder';
  $handler->display->display_options['menu']['name'] = 'primary-links';
  $export['Policies'] = $view;

  return $export;
}
