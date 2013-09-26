<?php
/**
 * @file
 * unca_campus_update.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function unca_campus_update_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-campus_update-body'
  $field_instances['node-campus_update-body'] = array(
    'bundle' => 'campus_update',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the main content of this campus update. Summary: Click Edit Summary below to show the Summary input to be used in blocks listing Campus Updates.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-campus_update-field_featured_update'
  $field_instances['node-campus_update-field_featured_update'] = array(
    'bundle' => 'campus_update',
    'default_value' => array(
      0 => array(
        'value' => -1,
      ),
    ),
    'deleted' => 0,
    'description' => 'Check this box to feature this update. Only the most recently posted featured update will appear on the home page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'boolean',
        'settings' => array(
          'prefix_suffix' => TRUE,
        ),
        'type' => 'number_boolean',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_featured_update',
    'label' => 'Featured Update',
    'required' => 0,
    'settings' => array(
      'false' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'none' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'true' => array(
        'prefix' => '',
        'suffix' => '',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'boolean',
      'settings' => array(),
      'type' => 'boolean_checkbox',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-campus_update-field_image'
  $field_instances['node-campus_update-field_image'] = array(
    'bundle' => 'campus_update',
    'deleted' => 0,
    'description' => 'Choose a featured image to prominently display with this article, which will also display as a thumbnail in blocks listing Campus Updates.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Featured Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-campus_update-field_tags'
  $field_instances['node-campus_update-field_tags'] = array(
    'bundle' => 'campus_update',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Free tagging. Enter any new or existing tags to this piece of content.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-campus_update-field_teaser_text'
  $field_instances['node-campus_update-field_teaser_text'] = array(
    'bundle' => 'campus_update',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a summary here. Summaries will appear in blocks listing Campus Updates. If no summary information is entered here, the first 200 characters of the body will be used in its place.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_teaser_text',
    'label' => 'Teaser',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-campus_update-field_video_embed'
  $field_instances['node-campus_update-field_video_embed'] = array(
    'bundle' => 'campus_update',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose a video to embed on this node\'s page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_video_embed',
    'label' => 'Embed Video',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'emfield',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'enfield_widget',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Check this box to feature this update. Only the most recently posted featured update will appear on the home page.');
  t('Choose a featured image to prominently display with this article, which will also display as a thumbnail in blocks listing Campus Updates.');
  t('Choose a video to embed on this node\'s page.');
  t('Embed Video');
  t('Enter a summary here. Summaries will appear in blocks listing Campus Updates. If no summary information is entered here, the first 200 characters of the body will be used in its place.');
  t('Enter the main content of this campus update. Summary: Click Edit Summary below to show the Summary input to be used in blocks listing Campus Updates.');
  t('Featured Image');
  t('Featured Update');
  t('Free tagging. Enter any new or existing tags to this piece of content.');
  t('Tags');
  t('Teaser');

  return $field_instances;
}
