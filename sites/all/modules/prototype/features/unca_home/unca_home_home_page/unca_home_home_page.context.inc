<?php
/**
 * @file
 * unca_home_home_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function unca_home_home_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'unca_home_page';
  $context->description = 'UNCA Home Page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('UNCA Home Page');
  $export['unca_home_page'] = $context;

  return $export;
}
