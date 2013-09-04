<?php

/**
 * Generates the slideshow type editing form.
 */
function slideshow_entity_type_form($form, &$form_state, $slideshow_entity_type, $op = 'edit') {

  if ($op == 'clone') {
    $slideshow_entity_type->label .= ' (cloned)';
    $slideshow_entity_type->type = '';
  }

  $form['label'] = array(
    '#title' => t('Label'),
    '#type' => 'textfield',
    '#default_value' => $slideshow_entity_type->label,
    '#description' => t('The human-readable name of this slideshow type.'),
    '#required' => TRUE,
    '#size' => 30,
  );

  // Machine-readable type name.
  $form['type'] = array(
    '#type' => 'machine_name',
    '#default_value' => isset($slideshow_entity_type->type) ? $slideshow_entity_type->type : '',
    '#maxlength' => 32,
    '#disabled' => $slideshow_entity_type->isLocked() && $op != 'clone',
    '#machine_name' => array(
      'exists' => 'slideshow_entity_types',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this slideshow type. It must only contain lowercase letters, numbers, and underscores.'),
  );

  $form['description'] = array(
    '#type' => 'textarea',
    '#default_value' => isset($slideshow_entity_type->description) ? $slideshow_entity_type->description : '',
    '#description' => t('Description about the slideshow type.'),
  );

  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save slideshow type'),
    '#weight' => 40,
  );

  if (!$slideshow_entity_type->isLocked() && $op != 'add' && $op != 'clone') {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete slideshow type'),
      '#weight' => 45,
      '#limit_validation_errors' => array(),
      '#submit' => array('slideshow_entity_type_form_submit_delete')
    );
  }
  return $form;
}

/**
 * Submit handler for creating/editing slideshow_entity_type.
 */
function slideshow_entity_type_form_submit(&$form, &$form_state) {
  $slideshow_entity_type = entity_ui_form_submit_build_entity($form, $form_state);
  // Save and go back.
  slideshow_entity_type_save($slideshow_entity_type);

  // Redirect user back to list of slideshow types.
  $form_state['redirect'] = 'admin/structure/slideshow-types';
}

function slideshow_entity_type_form_submit_delete(&$form, &$form_state) {
  $form_state['redirect'] = 'admin/structure/slideshow-types/' . $form_state['slideshow_entity_type']->type . '/delete';
}

/**
 * Slideshow type delete form.
 */
function slideshow_entity_type_form_delete_confirm($form, &$form_state, $slideshow_entity_type) {
  $form_state['slideshow_entity_type'] = $slideshow_entity_type;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['slideshow_entity_type_id'] = array('#type' => 'value', '#value' => entity_id('slideshow_entity_type' ,$slideshow_entity_type));
  return confirm_form($form,
    t('Are you sure you want to delete slideshow type %title?', array('%title' => entity_label('slideshow_entity_type', $slideshow_entity_type))),
    'slideshow/' . entity_id('slideshow_entity_type' ,$slideshow_entity_type),
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Slideshow type delete form submit handler.
 */
function slideshow_entity_type_form_delete_confirm_submit($form, &$form_state) {
  $slideshow_entity_type = $form_state['slideshow_entity_type'];
  slideshow_entity_type_delete($slideshow_entity_type);

  watchdog('slideshow_entity_type', '@type: deleted %title.', array('@type' => $slideshow_entity_type->type, '%title' => $slideshow_entity_type->label));
  drupal_set_message(t('@type %title has been deleted.', array('@type' => $slideshow_entity_type->type, '%title' => $slideshow_entity_type->label)));

  $form_state['redirect'] = 'admin/structure/slideshow-types';
}

/**
 * Page to select slideshow Type to add new slideshow.
 */
function slideshow_entity_admin_add_page() {
  $items = array();
  foreach (slideshow_entity_types() as $slideshow_entity_type_key => $slideshow_entity_type) {
    $items[] = l(entity_label('slideshow_entity_type', $slideshow_entity_type), 'slideshow/add/' . $slideshow_entity_type_key);
  }
  return array('list' => array('#theme' => 'item_list', '#items' => $items, '#title' => t('Select type of slideshow to create.')));
}

/**
 * Add new slideshow page callback.
 */
function slideshow_entity_add($type) {
  $slideshow_entity_type = slideshow_entity_types($type);

  $slideshow_entity = entity_create('slideshow_entity', array('type' => $type));
  drupal_set_title(t('Create @name', array('@name' => entity_label('slideshow_entity_type', $slideshow_entity_type))));

  $output = drupal_get_form('slideshow_entity_form', $slideshow_entity);

  return $output;
}

/**
 * Slideshow Form.
 */
function slideshow_entity_form($form, &$form_state, $slideshow_entity) {
  $form_state['slideshow'] = $slideshow_entity;

  $form['title'] = array(
    '#type' => 'textfield',
    '#required' => TRUE,
    '#title' => t('Administrative Title'),
    '#default_value' => $slideshow_entity->title,
    '#description' => 'Provide a title for this slideshow.  This title is used for administrative purposes only (it will not be displayed as part of the slideshow)',
  );

  $form['description'] = array(
    '#type' => 'textarea',
    '#title' => t('Description'),
    '#default_value' => $slideshow_entity->description,
  );

  $form['uid'] = array(
    '#type' => 'value',
    '#value' => $slideshow_entity->uid,
  );

  field_attach_form('slideshow_entity', $slideshow_entity, $form, $form_state);

  $submit = array();
  if (!empty($form['#submit'])) {
    $submit += $form['#submit'];
  }

  $form['actions'] = array(
    '#weight' => 100,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save slideshow'),
    '#submit' => $submit + array('slideshow_entity_form_submit'),
  );

  // Show Delete button if we edit slideshow.
  $slideshow_entity_id = entity_id('slideshow_entity' ,$slideshow_entity);
  if (!empty($slideshow_entity_id) && slideshow_entity_access('edit', $slideshow_entity)) {
    $form['actions']['delete'] = array(
      '#type' => 'submit',
      '#value' => t('Delete'),
      '#submit' => array('slideshow_entity_form_submit_delete'),
    );
  }

  $form['#validate'][] = 'slideshow_entity_form_validate';

  return $form;
}

function slideshow_entity_form_validate($form, &$form_state) {

}

/**
 * Slideshow submit handler.
 */
function slideshow_entity_form_submit($form, &$form_state) {
  $slideshow_entity = $form_state['slideshow'];

  entity_form_submit_build_entity('slideshow_entity', $slideshow_entity, $form, $form_state);

  slideshow_entity_save($slideshow_entity);

  $slideshow_entity_uri = entity_uri('slideshow_entity', $slideshow_entity);

  $form_state['redirect'] = $slideshow_entity_uri['path'];

  drupal_set_message(t('Slideshow %title saved.', array('%title' => entity_label('slideshow_entity', $slideshow_entity))));
}

function slideshow_entity_form_submit_delete($form, &$form_state) {
  $slideshow_entity = $form_state['slideshow'];
  $slideshow_entity_uri = entity_uri('slideshow_entity', $slideshow_entity);
  $form_state['redirect'] = $slideshow_entity_uri['path'] . '/delete';
}

/**
 * Delete confirmation form.
 */
function slideshow_entity_delete_form($form, &$form_state, $slideshow_entity) {
  $form_state['slideshow'] = $slideshow_entity;
  // Always provide entity id in the same form key as in the entity edit form.
  $form['slideshow_entity_type_id'] = array('#type' => 'value', '#value' => entity_id('slideshow_entity' ,$slideshow_entity));
  $slideshow_entity_uri = entity_uri('slideshow_entity', $slideshow_entity);
  return confirm_form($form,
    t('Are you sure you want to delete slideshow %title?', array('%title' => entity_label('slideshow_entity', $slideshow_entity))),
    $slideshow_entity_uri['path'],
    t('This action cannot be undone.'),
    t('Delete'),
    t('Cancel')
  );
}

/**
 * Delete form submit handler.
 */
function slideshow_entity_delete_form_submit($form, &$form_state) {
  $slideshow_entity = $form_state['slideshow'];
  slideshow_entity_delete($slideshow_entity);

  drupal_set_message(t('Slideshow %title deleted.', array('%title' => entity_label('slideshow_entity', $slideshow_entity))));

  $form_state['redirect'] = '<front>';
}
