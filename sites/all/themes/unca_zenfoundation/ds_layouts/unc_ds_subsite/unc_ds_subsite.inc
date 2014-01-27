<?php

/**
 * @file
 * Display Suite UNC DS Subsite configuration.
 */

function ds_unc_ds_subsite() {
  return array(
    'label' => t('UNC DS Subsite'),
    'regions' => array(
      'content_row_1' => t('Content row 1'),
      'content_row_2_column_1' => t('Content row 2 column 1'),
      'content_row_2_column_2' => t('Content row 2 column 2'),
      'sidebar_column' => t('Sidebar column'),
      'footer_promo_a' => t('Footer promo A'),
      'footer_promo_b' => t('Footer promo B'),
      'footer_promo_large' => t('Footer promo large'),
    ),
    // Uncomment if you want to include a CSS file for this layout (unc_ds_subsite.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (unc_ds_subsite.png)
    // 'image' => TRUE,
  );
}
