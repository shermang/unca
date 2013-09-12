<?php
/**
 * @file
 * unca_global_header_and_footer.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unca_global_header_and_footer_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
