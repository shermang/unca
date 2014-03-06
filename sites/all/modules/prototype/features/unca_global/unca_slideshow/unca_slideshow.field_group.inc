<?php
/**
 * @file
 * unca_slideshow.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function unca_slideshow_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced|node|slideshow_item|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'slideshow_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced',
    'weight' => '5',
    'children' => array(
      0 => 'field_link',
      1 => 'field_read_more',
      2 => 'field_video_embed',
      3 => 'field_show_image_on_inside_page',
      4 => 'path',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advanced',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-advanced field-group-fieldset',
        'description' => 'Use these settings if you want users to be directed to a different URL when they click on the image or the Read More button.  You can also override the default Read More label here.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_advanced|node|slideshow_item|form'] = $field_group;

  return $export;
}
