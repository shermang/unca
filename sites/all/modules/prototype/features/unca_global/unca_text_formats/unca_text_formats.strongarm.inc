<?php
/**
 * @file
 * unca_text_formats.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function unca_text_formats_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_roles_profiles';
  $strongarm->value = array(
    3 => array(
      'weight' => '0',
      'viddler_pid' => '1',
      'youtube_pid' => '1',
      'public_pid' => '1',
    ),
    4 => array(
      'weight' => '0',
      'viddler_pid' => '1',
      'youtube_pid' => '1',
      'public_pid' => '1',
    ),
    2 => array(
      'weight' => 11,
      'viddler_pid' => 0,
      'youtube_pid' => 0,
      'public_pid' => 0,
    ),
    1 => array(
      'weight' => 12,
      'viddler_pid' => 0,
      'youtube_pid' => 0,
      'public_pid' => 0,
    ),
  );
  $export['imce_roles_profiles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_absurls';
  $strongarm->value = 0;
  $export['imce_settings_absurls'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_disable_private';
  $strongarm->value = 1;
  $export['imce_settings_disable_private'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_replace';
  $strongarm->value = '0';
  $export['imce_settings_replace'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_textarea';
  $strongarm->value = '';
  $export['imce_settings_textarea'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imce_settings_thumb_method';
  $strongarm->value = 'scale_and_crop';
  $export['imce_settings_thumb_method'] = $strongarm;

  return $export;
}
