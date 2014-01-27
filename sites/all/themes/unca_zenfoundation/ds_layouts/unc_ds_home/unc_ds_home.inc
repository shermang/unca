<?php

/**
 * @file
 * Display Suite UNC DS Home configuration.
 */

function ds_unc_ds_home() {
  return array(
    'label' => t('UNC DS Home'),
    'regions' => array(
      'content_column' => t('Content column'),
      'sidebar_column' => t('Sidebar column'),
    ),
    // Uncomment if you want to include a CSS file for this layout (unc_ds_home.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (unc_ds_home.png)
    // 'image' => TRUE,
  );
}
