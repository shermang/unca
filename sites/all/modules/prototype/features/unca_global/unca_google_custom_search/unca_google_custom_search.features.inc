<?php
/**
 * @file
 * unca_google_custom_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unca_google_custom_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
