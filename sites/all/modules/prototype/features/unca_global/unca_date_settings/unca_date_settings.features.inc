<?php
/**
 * @file
 * unca_date_settings.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unca_date_settings_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
