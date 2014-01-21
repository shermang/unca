<?php
/**
 * @file
 * unca_campus_update.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function unca_campus_update_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced|node|campus_update|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'campus_update';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced Settings',
    'weight' => '9',
    'children' => array(
      0 => 'field_featured_update',
      1 => 'field_tags',
      2 => 'field_video_embed',
      3 => 'path',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advanced Settings',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-advanced field-group-fieldset',
        'description' => 'Add video and tags, feature this update, and change its URL path settings.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_advanced|node|campus_update|form'] = $field_group;

  return $export;
}
