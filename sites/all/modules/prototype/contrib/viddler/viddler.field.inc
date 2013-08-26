<?php
/**
 * Implement hook_field_info().
 */
function viddler_field_info() {
  return array(
    'viddler_field' => array(
	    'label' => t('Viddler'),
  	  'description' => t('Stores the Viddler ID.'),
  	  'default_widget' => 'viddler_widget',
  	  'default_formatter' => 'viddler_default',
  	  'instance_settings' => array(
        'dimension' => array(),
				'input_type' => array(),
      ),
	  ),
  );
}

/**
 * Implements hook_field_is_empty().
 */
function viddler_field_is_empty($item, $field) {
  return empty($item['value']);
}

/**
 * Implements hook_field_instance_settings_form().
 */
function viddler_field_instance_settings_form($field, $instance) {
  $settings = $instance['settings'];
  
	$form['dimension']['full'] = array(
		'#type' => 'fieldset',
		'#title' => t('Video Display Settings'),
		'#description' => t('These settings control how this video is displayed in its full size, which defaults to !widthx!height.', array('!width' => VIDDLER_DEFAULT_VIDEO_WIDTH, '!height' => VIDDLER_DEFAULT_VIDEO_HEIGHT)),
	);
	
  $form['dimension']['full']['width'] = array(
    '#type' => 'textfield',
    '#title' => t('Width'),
    '#default_value' => @$settings['dimension']['full']['width'] ? $settings['dimension']['full']['width'] : VIDDLER_DEFAULT_VIDEO_WIDTH,
    '#description' => t('The width of the video. It defaults to !width.', array('!width' => VIDDLER_DEFAULT_VIDEO_WIDTH)),
  );

  $form['dimension']['full']['height'] = array(
    '#type' => 'textfield',
    '#title' => t('Width'),
    '#default_value' => @$settings['dimension']['full']['height'] ? $settings['dimension']['full']['height'] : VIDDLER_DEFAULT_VIDEO_HEIGHT,
    '#description' => t('The height of the video. It defaults to !height.', array('!height' => VIDDLER_DEFAULT_VIDEO_HEIGHT)),
  );

  return $form;
}

/**
 * Implement hook_field_widget_info().
 */
function viddler_field_widget_info() {
  return array(
    'viddler_widget' => array(
	    'label' => t('Video'),
	    'field types' => array('viddler_field'),
			'behaviors' => array(
        'default value' => FIELD_BEHAVIOR_NONE,
      ),
			'settings' => array(
        'dimension' => array(
					'full' => array(
						'width' => VIDDLER_DEFAULT_VIDEO_WIDTH, 
						'height' => VIDDLER_DEFAULT_VIDEO_HEIGHT
					)
				),
      ),
	  ),
  );
}

/**
 * Implement hook_field_formatter_info().
 */
function viddler_field_formatter_info() {
  return array(
    'viddler_default' => array(
      'label' => t('Video'),
      'field types' => array('viddler_field'),
    ),
	  'viddler_image' => array(
	    'label' => t('Image'),
	    'field types' => array('viddler_field'),
			'settings' => array('image_style' => ''),
	  ),
  );
}

/**
 * Implement hook_field_widget().
 * Todo: When saving default value in settings, it also enter here. so i need to consider default values. and how to display them in the settings page
 */
function viddler_field_widget_form(&$form, &$form_state, $field, $instance, $langcode, $items, $delta, $element) {
	$value = isset($items[$delta]['value']) ? $items[$delta]['value'] : '';
	$t_url = isset($items[$delta]['thumbnail_url']) ? $items[$delta]['thumbnail_url'] : '';
	$t_fid = isset($items[$delta]['thumbnail_fid']) ? $items[$delta]['thumbnail_fid'] : '';
	$code = isset($items[$delta]['embed_code']) ? $items[$delta]['embed_code'] : '';
	
	$element['value'] = $element + array(
    '#type' => 'textfield',
    '#default_value' => $value,
  );

	$element['thumbnail_url'] = array(
    '#type' => 'value',
    '#value' => $t_url,
  );
	
	$element['embed_code'] = array(
    '#type' => 'value',
    '#value' => $code,
  );
	
	$element['thumbnail_fid'] = array(
    '#type' => 'value',
    '#value' => $t_fid,
  );

	return $element;
}

/**
 * Implements hook_field_formatter_view().
 */
function viddler_field_formatter_view($object_type, $object, $field, $instance, $langcode, $items, $display) {
  $element = array();

	$api = variable_get('viddler_apikey', '');
	if (!$api) return $element;
  
	foreach ($items as $delta => $item) {
		if (!$viddler_id = $item['value']) continue;
		
		switch($display['type']) {
			case 'viddler_image':
				$file = file_load($item['thumbnail_fid']);
				
				if ($file) {
					$item['uri'] = $file->uri;
					$item['alt'] = '';
					$item['title'] = '';
					$item['attributes'] = array();

					$element[$delta] = array(
			      '#theme' => 'image_formatter',
			      '#item' => $item,
			      '#image_style' => $display['settings']['image_style'],
			      '#path' => '',
			    );
				}
				
			break;
			default:
				$markup = $item['embed_code'];
				$element[$delta] = array('#markup' => $markup);
			break;
		}
		
	}


  return $element;
}

/**
 * Implements hook_field_formatter_settings_form().
 */
function viddler_field_formatter_settings_form($field, $instance, $view_mode, $form, &$form_state) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];

  $image_styles = image_style_options(FALSE);
  $element['image_style'] = array(
    '#title' => t('Image style'),
    '#type' => 'select',
    '#default_value' => $settings['image_style'],
    '#empty_option' => t('None (original image)'),
    '#options' => $image_styles,
  );

  return $element;
}

/**
 * Implements hook_field_formatter_settings_summary().
 */
function viddler_field_formatter_settings_summary($field, $instance, $view_mode) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];
	
  $summary = array();

	if ($display['type'] == 'viddler_image') {
		$image_styles = image_style_options(FALSE);
	  // Unset possible 'No defined styles' option.
	  unset($image_styles['']);
	  // Styles could be lost because of enabled/disabled modules that defines
	  // their styles in code.
	  if (isset($image_styles[$settings['image_style']])) {
	    $summary[] = t('Image style: @style', array('@style' => $image_styles[$settings['image_style']]));
	  }
	  else {
	    $summary[] = t('Original image');
	  }
	}

  return implode('<br />', $summary);
}

function viddler_field_insert($entity_type, $entity, $field, $instance, $langcode, &$items) {
	_viddler_return_video_details($entity_type, $entity, $instance, $items);
}

function viddler_field_update($entity_type, $entity, $field, $instance, $langcode, &$items) {
	list($id, $vid, $bundle) = entity_extract_ids($entity_type, $entity);
	
	// Build a display of the current FIDs.
  $current_viddler = array();
  foreach ($items as $item) {
    $current_viddler[] = $item['value'];
  }
	
	// Create a bare-bones entity so that we can load its previous values.
  $original = entity_create_stub_entity($entity_type, array($id, $vid, $bundle));
  field_attach_load($entity_type, array($id => $original), FIELD_LOAD_CURRENT, array('field_id' => $field['id']));
	
	$original_items = array();
	if (!empty($original->{$field['field_name']}[$langcode])) {
		$original_items = $original->{$field['field_name']}[$langcode];
	}
	
	_viddler_return_video_details($entity_type, $entity, $instance, $items, $original_items, $entity_type, $entity);
	
	// Compare the original field values with the ones that are being saved.
  $original_items = array();
  if (!empty($original->{$field['field_name']}[$langcode])) {
    foreach ($original->{$field['field_name']}[$langcode] as $key => $original_item) {
      $original_items[] = $original_item['value'];
      if (isset($original_item['value']) && !in_array($original_item['value'], $current_viddler) && $original_item['thumbnail_fid']) {
        // Decrement the file usage count by 1.
        $file = file_load($original_item['thumbnail_fid']);
				if ($file) {
	        file_usage_delete($file, 'viddler', $entity_type, $id, 1);
					file_delete($file);
				}
      }
    }
  }
	
}

function viddler_field_delete($entity_type, $entity, $field, $instance, $langcode, &$items) {
	list($id, $vid, $bundle) = entity_extract_ids($entity_type, $entity);
	foreach ($items as $delta => $item) {
    $file = file_load($item['thumbnail_fid']);
		if ($file) {
      file_usage_delete($file, 'viddler', $entity_type, $id, 1);
			file_delete($file);
		}
  }
}

/**
 * Get the embed code and save thumbnail locally so we can use it for image_styles
 */
function _viddler_return_video_details($entity_type, $entity, $instance, &$items, $original_items = array()) {
	list($id, $vid, $bundle) = entity_extract_ids($entity_type, $entity);
	
	$api = variable_get('viddler_apikey', '');
	if (!$api) {
		drupal_set_message(t('Viddler API key is missing.'), 'error');
		$items = array();
		return;
	}
	
	$original_items_lookup = array();
	if ($original_items) {
		foreach ($original_items as $key => $original_item) {
			$original_items_lookup[$key] = $original_item['value'];
    }
	}
	
	//module_load_include('module', 'media_internet', 'media_internet');
	
	$viddler_connect = new Viddler_V2($api);
	$media = new MediaInternetFileHandler('');
	
	foreach($items as &$item) {
		if (!$viddler_id = $item['value']) continue;
		
		if ($item['value'] == 'x') {
			$item['embed_code'] = '';
			$item['thumbnail_url'] = '';
			$item['thumbnail_fid'] = 0;
			continue;
		}
		
		$args = array('video_id' => $viddler_id);
		$video = $viddler_connect->viddler_videos_getDetails($args);
		
		if (isset($video['error'])) {
			$item['embed_code'] = '';
			$item['thumbnail_url'] = '';
			$item['thumbnail_fid'] = 0;
			continue;
		}
		
		// Get the embed code
		if (!$item['embed_code'] || !in_array($item['value'], $original_items_lookup)) {
			$width 	= $instance['settings']['dimension']['full']['width'];
			$height = $instance['settings']['dimension']['full']['height'];
			$autoplay = false;

			// we have more flexibility with widht and height when using getEmbedCode()
			$code = $viddler_connect->viddler_videos_getEmbedCode($args);

			$embed_code = '';
			if ($code && isset($code['video']['embed_code'])) $embed_code = $code['video']['embed_code'];

			$item['embed_code'] = $embed_code;
		}
		
		// Get the thumbnail
		if (!$item['thumbnail_url'] || !in_array($item['value'], $original_items_lookup)) {
			$thumbnail_path = '';
			if ($video && isset($video['video']['thumbnail_url']) && $video['video']['thumbnail_url']) {
				$thumbnail_path = $video['video']['thumbnail_url'];
				
				$file_obj = file_uri_to_object($thumbnail_path);
				$media->preSave($file_obj);
				$media->postSave($file_obj);

				$item['thumbnail_url'] = $thumbnail_path;
				$item['thumbnail_fid'] = $file_obj->fid;
				
				file_usage_add($file_obj, 'viddler', $entity_type, $id);
			}

      
		}
		
	}
	
}
