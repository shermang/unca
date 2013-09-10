<?php

/**
 * @file
 * Display Suite UNC DS Gateway configuration.
 */

function ds_unc_ds_gateway() {
  return array(
    'label' => t('UNC DS Gateway'),
    'regions' => array(
      'row_1' => t('Row 1'),
      'row_2_column_1' => t('Row 2 column 1'),
      'row_2_column_2' => t('Row 2 column 2'),
      'row_3_column_1' => t('Row 3 column 1'),
      'row_3_column_2' => t('Row 3 column 2'),
    ),
    // Uncomment if you want to include a CSS file for this layout (unc_ds_gateway.css)
    // 'css' => TRUE,
    // Uncomment if you want to include a preview for this layout (unc_ds_gateway.png)
    // 'image' => TRUE,
  );
}
