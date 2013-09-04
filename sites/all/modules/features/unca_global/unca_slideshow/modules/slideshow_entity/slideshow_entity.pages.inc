<?php

/**
 * Slideshow view callback.
 */
function slideshow_entity_view($slideshow_entity) {
  drupal_set_title(entity_label('slideshow_entity', $slideshow_entity));
  return entity_view('slideshow_entity', array(entity_id('slideshow_entity', $slideshow_entity) => $slideshow_entity), 'full');
}
