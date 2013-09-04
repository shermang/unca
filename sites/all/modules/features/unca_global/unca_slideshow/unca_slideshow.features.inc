<?php
/**
 * @file
 * unca_slideshow.features.inc
 */

/**
 * Implements hook_default_slideshow_entity_type().
 */
function unca_slideshow_default_slideshow_entity_type() {
  $items = array();
  $items['slideshow'] = entity_import('slideshow_entity_type', '{
    "type" : "slideshow",
    "label" : "Slideshow",
    "weight" : 0,
    "description" : "",
    "rdf_mapping" : []
  }');
  return $items;
}
