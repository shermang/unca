<?php
/**
 * @file
 * Display Suite UNC DS Gateway template.
 *
 * Available variables:
 *
 * Layout:
 * - $classes: String of classes that can be used to style this layout.
 * - $contextual_links: Renderable array of contextual links.
 * - $layout_wrapper: wrapper surrounding the layout.
 *
 * Regions:
 *
 * - $row_1: Rendered content for the "Row 1 column 1" region.
 * - $row_1_classes: String of classes that can be used to style the "Row 1 column 1" region.
 *
 * - $row_2_column_1: Rendered content for the "Row 2 column 1" region.
 * - $row_2_column_1_classes: String of classes that can be used to style the "Row 2 column 1" region.
 *
 * - $row_2_column_2: Rendered content for the "Row 2 column 2" region.
 * - $row_2_column_2_classes: String of classes that can be used to style the "Row 2 column 2" region.
 *
 * - $row_3_column_1: Rendered content for the "Row 2 column 1" region.
 * - $row_3_column_1_classes: String of classes that can be used to style the "Row 2 column 1" region.
 *
 * - $row_3_column_2: Rendered content for the "Row 2 column 2" region.
 * - $row_3_column_2_classes: String of classes that can be used to style the "Row 2 column 2" region.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> 
    <?php if (!$row_2_column_1): ?>no-ds-row-2-column-1<?php endif; ?> 
    <?php if (!$row_2_column_2): ?>no-ds-row-2-column-2<?php endif; ?> 
    <?php if (!$row_3_column_1): ?>no-ds-row-3-column-1<?php endif; ?> 
    <?php if (!$row_3_column_2): ?>no-ds-row-3-column-2<?php endif; ?> 
    ds-layout unc-ds-gateway clearfix">

  <!-- Needed to activate contextual links -->
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

    <<?php print $row_1_wrapper; ?> class="ds-row-1<?php print $row_1_classes; ?>">
      <?php print $row_1; ?>
    </<?php print $row_1_wrapper; ?>>

    <<?php print $row_2_column_1_wrapper; ?> class="ds-row-2-column-1<?php print $row_2_column_1_classes; ?>">
      <?php print $row_2_column_1; ?>
    </<?php print $row_2_column_1_wrapper; ?>>

    <<?php print $row_2_column_2_wrapper; ?> class="ds-row-2-column-2<?php print $row_2_column_2_classes; ?>">
      <?php print $row_2_column_2; ?>
    </<?php print $row_2_column_2_wrapper; ?>>

    <<?php print $row_3_column_1_wrapper; ?> class="ds-row-3-column-1<?php print $row_3_column_1_classes; ?>">
      <?php print $row_3_column_1; ?>
    </<?php print $row_3_column_1_wrapper; ?>>

    <<?php print $row_3_column_2_wrapper; ?> class="ds-row-3-column-2<?php print $row_3_column_2_classes; ?>">
      <?php print $row_3_column_2; ?>
    </<?php print $row_3_column_2_wrapper; ?>>

</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
