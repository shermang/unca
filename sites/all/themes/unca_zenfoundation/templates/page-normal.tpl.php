<?php
/**
 * @file
 * Include file containing the normal, non-gateway regions and layout
 *
 * This is not a fully-fledged drupal tpl, simply an include. All vars are
 * courtesy of the parent tpl including this file
 */
?>


    <div id="content" class="bottom-stripes content large-9 columns <?php print $page_layout_wrapper_classes; ?>" role="content">
      <a id="main-content"></a>
      <?php if (!($is_front && $is_unca_main)): ?>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
          <h1 class="title" id="page-title"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
      <?php endif; ?>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>

      <!-- Primary Content Column -->
      <?php print render($page['content']); ?>
      <!-- Content Row 1-->
      <?php if ($page['content_row_1']): ?>
      <div class="content_row_1">
        <?php print render($page['content_row_1']); ?>
      </div>
      <?php endif; ?>
      <!-- Content Row 2 Column 1-->
      <?php if ($page['content_row_2_column_1'] || $page['content_row_2_column_2']): ?>
        <div class="row featured-blocks">
          <?php if ($page['content_row_2_column_1']): ?>
          <div class="content_row_2_column_1 tiny-12 small-6 columns">
            <?php print render($page['content_row_2_column_1']); ?>
          </div>
          <?php endif; ?>
          <!-- Content Row 2 Column 2-->
          <?php if ($page['content_row_2_column_2']): ?>
          <div class="content_row_2_column_2 tiny-12 small-6 columns">
            <?php print render($page['content_row_2_column_2']); ?>
          </div>
          <?php endif; ?>
        </div>
      <?php endif; ?>
    </div><!-- /#content -->

    <!-- Let's simplify the sidebar logic since we only have one sidebar region. -->
    <aside class="sidebar large-3 columns">
      <?php if ($is_front && $is_unca_main): ?>
        <div class="navigation-gateway">
          <?php print render($hp_sidebar_menu); ?>
        </div>
      <?php else: ?>
        <div class="block block-menu contextual-links-region first odd block-menu-menu-secondary-navigation---prot navigation-secondary right-spiff" id="block-menu-menu-secondary-navigation-prot" role="navigation">
          <?php print render($sidebar_menu); ?>
        </div>
      <?php endif; ?>
      <?php if ($page['sidebar_first']): ?>
        <?php print render($page['sidebar_first']); ?>
      <?php endif; ?>
    </aside><!-- /.sidebar -->
