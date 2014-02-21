<?php
/**
 * @file
 * unca_roles_permission.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function unca_roles_permission_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
