<?php
/**
 * @file
 * unca_global_header_and_footer.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function unca_global_header_and_footer_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'unca_header';
  $context->description = 'UNCA Header region blocks';
  $context->tag = 'Global';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-global-tools-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-global-tools-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global');
  t('UNCA Header region blocks');
  $export['unca_header'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'unca_navigation';
  $context->description = 'UNCA Navigation region blocks';
  $context->tag = 'Global';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'navigation',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'navigation',
          'weight' => '-9',
        ),
        'menu-menu-secondary-navigation---prot' => array(
          'module' => 'menu',
          'delta' => 'menu-secondary-navigation---prot',
          'region' => 'navigation',
          'weight' => '-8',
        ),
        'menu-menu-global-tools-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-global-tools-menu',
          'region' => 'navigation',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Global');
  t('UNCA Navigation region blocks');
  $export['unca_navigation'] = $context;

  return $export;
}
