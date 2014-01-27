<?php
/**
 * @file
 * Display Suite UNC DS Home template.
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
 * - $content_column: Rendered content for the "Content column" region.
 * - $content_column_classes: String of classes that can be used to style the "Content column" region.
 *
 * - $sidebar_column: Rendered content for the "Sidebar column" region.
 * - $sidebar_column_classes: String of classes that can be used to style the "Sidebar column" region.
 */
?>
<<?php print $layout_wrapper; print $layout_attributes; ?> class="<?php print $classes;?> <?php if ($sidebar_column): ?>has-sidebar<?php endif; ?> ds-layout unc-ds-home clearfix">

  <!-- Needed to activate contextual links -->
  <?php if (isset($title_suffix['contextual_links'])): ?>
    <?php print render($title_suffix['contextual_links']); ?>
  <?php endif; ?>

    <<?php print $content_column_wrapper; ?> class="ds-content-column<?php print $content_column_classes; ?>">
      <?php print $content_column; ?>
    </<?php print $content_column_wrapper; ?>>

    <<?php print $sidebar_column_wrapper; ?> class="ds-sidebar-column<?php print $sidebar_column_classes; ?>">
      <?php print $sidebar_column; ?>
    </<?php print $sidebar_column_wrapper; ?>>

</<?php print $layout_wrapper ?>>

<!-- Needed to activate display suite support on forms -->
<?php if (!empty($drupal_render_children)): ?>
  <?php print $drupal_render_children ?>
<?php endif; ?>
