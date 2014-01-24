<?php

/**
 * @file
 * Display Suite UNC DS Default configuration.
 */

function ds_unc_ds_default() {
  return array(
    'label' => t('UNC DS Default'),
    'regions' => array(
      'content_column' => t('Content column'),
      'sidebar_column' => t('Sidebar column'),
    ),
    // Uncomment if you want to include a CSS file for this layout (unc_ds_default.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (unc_ds_default.png)
    // 'image' => TRUE,
  );
}
