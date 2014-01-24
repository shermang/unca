<?php
/**
 * @file
 * Display Suite UNC DS Subsite template.
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
 * - $content_row_1: Rendered content for the "Content row 1" region.
 * - $content_row_1_classes: String of classes that can be used to style the "Content row 1" region.
 *
 * - $content_row_2_column_1: Rendered content for the "Content row 2 column 1" region.
 * - $content_row_2_column_1_classes: String of classes that can be used to style the "Content row 2 column 1" region.
 *
 * - $content_row_2_column_2: Rendered content for the "Content row 2 column 2" region.
 * - $content_row_2_column_2_classes: String of classes that can be used to style the "Content row 2 column 2" region.
 *
 * - $sidebar_column: Rendered content for the "Sidebar column" region.
 * - $sidebar_column_classes: String of classes that can be used to style the "Sidebar column" region.
 *
 * - $footer_promo_a: Rendered content for the "Footer promo A" region.
 * - $footer_promo_a_classes: String of classes that can be used to style the "Footer promo A" region.
 *
 * - $footer_promo_b: Rendered content for the "Footer promo B" region.
 * - $footer_promo_b_classes: String of classes that can be used to style the "Footer promo B" region.
 *
 * - $footer_promo_large: Rendered content for the "Footer promo large" region.
 * - $footer_promo_large_classes: String of classes that can be used to style the "Footer promo large" region.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> 
    <?php if ($sidebar_column): ?>has-sidebar<?php endif; ?> 
    <?php if (!$content_row_2_column_1): ?>no-ds-content-row-2-column-1<?php endif; ?> 
    <?php if (!$content_row_2_column_2): ?>no-ds-content-row-2-column-2<?php endif; ?> 
    <?php if (!$footer_promo_a): ?>no-ds-footer-promo-a<?php endif; ?> 
    <?php if (!$footer_promo_b): ?>no-ds-footer-promo-b<?php endif; ?> 
    <?php if (!$footer_promo_large): ?>no-ds-footer-promo-large<?php endif; ?> ds-layout unc-ds-subsite clearfix">

  <!-- Needed to activate contextual links -->
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

    <div class="ds-content-wrapper">

      <<?php print $content_row_1_wrapper; ?> class="ds-content-row-1<?php print $content_row_1_classes; ?>">
        <?php print $content_row_1; ?>
      </<?php print $content_row_1_wrapper; ?>>

      <<?php print $content_row_2_column_1_wrapper; ?> class="ds-content-row-2-column-1<?php print $content_row_2_column_1_classes; ?>">
        <?php print $content_row_2_column_1; ?>
      </<?php print $content_row_2_column_1_wrapper; ?>>

      <<?php print $content_row_2_column_2_wrapper; ?> class="ds-content-row-2-column-2<?php print $content_row_2_column_2_classes; ?>">
        <?php print $content_row_2_column_2; ?>
      </<?php print $content_row_2_column_2_wrapper; ?>>

    </div>

    <<?php print $sidebar_column_wrapper; ?> class="ds-sidebar-column<?php print $sidebar_column_classes; ?>">
      <?php print $sidebar_column; ?>
    </<?php print $sidebar_column_wrapper; ?>>


    <?php if ($footer_promo_a): ?>
      <<?php print $footer_promo_a_wrapper; ?> class="ds-footer-promo-a<?php print $footer_promo_a_classes; ?>">
        <?php print $footer_promo_a; ?>
      </<?php print $footer_promo_a_wrapper; ?>>
    <?php endif; ?>

    <?php if ($footer_promo_b): ?>
      <<?php print $footer_promo_b_wrapper; ?> class="ds-footer-promo-b<?php print $footer_promo_b_classes; ?>">
        <?php print $footer_promo_b; ?>
      </<?php print $footer_promo_b_wrapper; ?>>
    <?php endif; ?>

    <?php if ($footer_promo_large): ?>
      <<?php print $footer_promo_large_wrapper; ?> class="ds-footer-promo-large<?php print $footer_promo_large_classes; ?>">
        <?php print $footer_promo_large; ?>
      </<?php print $footer_promo_large_wrapper; ?>>
    <?php endif; ?>

</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
