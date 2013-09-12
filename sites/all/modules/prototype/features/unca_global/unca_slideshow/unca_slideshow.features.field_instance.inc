<?php
/**
 * @file
 * unca_slideshow.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function unca_slideshow_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'field_collection_item-field_slide-field_slide_caption'
  $field_instances['field_collection_item-field_slide-field_slide_caption'] = array(
    'bundle' => 'field_slide',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_slide_caption',
    'label' => 'Slide Caption',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_slide-field_slide_image'
  $field_instances['field_collection_item-field_slide-field_slide_image'] = array(
    'bundle' => 'field_slide',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_slide_image',
    'label' => 'Slide Image',
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
      'module' => 'media',
      'settings' => array(
        'allowed_schemes' => array(
          'public' => 'public',
          'viddler' => 0,
        ),
        'allowed_types' => array(
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'progress_indicator' => 'throbber',
      ),
      'type' => 'media_generic',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_slide-field_slide_link'
  $field_instances['field_collection_item-field_slide-field_slide_link'] = array(
    'bundle' => 'field_slide',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The page or resource linked to by this slide.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_slide_link',
    'label' => 'Slide Link',
    'required' => 0,
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_slide-field_slide_publish_end_date'
  $field_instances['field_collection_item-field_slide-field_slide_publish_end_date'] = array(
    'bundle' => 'field_slide',
    'deleted' => 0,
    'description' => 'Specify a date at which this slide will become \'unpublished\'.  If this field is left blank, this slide will remain published until manually unpublished or deleted.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_slide_publish_end_date',
    'label' => 'Slide Publish End Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_slide-field_slide_publish_start_date'
  $field_instances['field_collection_item-field_slide-field_slide_publish_start_date'] = array(
    'bundle' => 'field_slide',
    'deleted' => 0,
    'description' => 'Specify a date at which this slide should become \'published\' (included in the slideshow as presented to site visitors).  If this field is left blank, the slide will be published immediately, and remain published until the date (if any) specified in the Slide Publish End Date field.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_slide_publish_start_date',
    'label' => 'Slide Publish Start Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_slide-field_slide_read_more_text'
  $field_instances['field_collection_item-field_slide-field_slide_read_more_text'] = array(
    'bundle' => 'field_slide',
    'default_value' => array(
      0 => array(
        'value' => 'Read More',
      ),
    ),
    'deleted' => 0,
    'description' => 'Text to be displayed in "Read More" link.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_slide_read_more_text',
    'label' => 'Slide Read More Text',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_slide-field_slide_title'
  $field_instances['field_collection_item-field_slide-field_slide_title'] = array(
    'bundle' => 'field_slide',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_slide_title',
    'label' => 'Slide Title',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'slideshow_entity-slideshow-field_slide'
  $field_instances['slideshow_entity-slideshow-field_slide'] = array(
    'bundle' => 'slideshow',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'slideshow_entity',
    'field_name' => 'field_slide',
    'label' => 'Slide',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Slide');
  t('Slide Caption');
  t('Slide Image');
  t('Slide Link');
  t('Slide Publish End Date');
  t('Slide Publish Start Date');
  t('Slide Read More Text');
  t('Slide Title');
  t('Specify a date at which this slide should become \'published\' (included in the slideshow as presented to site visitors).  If this field is left blank, the slide will be published immediately, and remain published until the date (if any) specified in the Slide Publish End Date field.');
  t('Specify a date at which this slide will become \'unpublished\'.  If this field is left blank, this slide will remain published until manually unpublished or deleted.');
  t('Text to be displayed in "Read More" link.');
  t('The page or resource linked to by this slide.');

  return $field_instances;
}
