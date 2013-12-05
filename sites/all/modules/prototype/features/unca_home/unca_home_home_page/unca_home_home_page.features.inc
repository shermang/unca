<?php
/**
 * @file
 * unca_home_home_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unca_home_home_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
