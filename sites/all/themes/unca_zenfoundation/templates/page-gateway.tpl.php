<?php
/**
 * @file
 * Include file containing the gateway regions and layout
 *
 * This is not a fully-fledged drupal tpl, simply an include. All vars are
 * courtesy of the parent tpl including this file
 */
?>

    <div id="content" class="bottom-stripes content unca-gateway <?php print $gateway_layout_wrapper_classes; ?>
    <?php if (!$page['gateway_row_2_column_1']): ?> no-row-2-column-1<?php endif; ?> 
    <?php if (!$page['gateway_row_2_column_2']): ?>no-row-2-column-2<?php endif; ?> 
    <?php if (!$page['gateway_row_3_column_1']): ?>no-row-3-column-1<?php endif; ?> 
    <?php if (!$page['gateway_row_3_column_2']): ?>no-row-3-column-2<?php endif; ?>" role="content">
      <a id="main-content"></a>

      <!-- Gateway Row 1 -->
      <div class="gateway-row-1">
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
          <h1 class="title" id="page-title"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php print $messages; ?>
        <?php print render($tabs); ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
      
        <?php print render($page['gateway_row_1']); ?>
      </div>

      <!-- Gateway Row 2 column 1-->
      <?php if ($page['gateway_row_2_column_1']): ?>
      <div class="gateway-row-2-column-1">
        <?php print render($page['gateway_row_2_column_1']); ?>
      </div>
      <?php endif; ?>

      <!-- Gateway Row 2 column 2-->
      <?php if ($page['gateway_row_2_column_2']): ?>
      <div class="gateway-row-2-column-2">
        <?php print render($page['gateway_row_2_column_2']); ?>
      </div>
      <?php endif; ?>

      <!-- Gateway Row 3 column 1 -->
      <?php if ($page['gateway_row_3_column_1']): ?>
      <div class="gateway-row-3-column-1">
        <?php print render($page['gateway_row_3_column_1']); ?>
      </div>
      <?php endif; ?>

      <!-- Gateway Row 3 column 2 -->
      <?php if ($page['gateway_row_3_column_2']): ?>
      <div class="gateway-row-3-column-2">
        <?php print render($page['gateway_row_3_column_2']); ?>
      </div>
      <?php endif; ?>

      <!-- Default content -->
      <?php if ($page['content']): ?>
      <div class="gateway-content">
        <?php print render($page['content']); ?>
      </div>
      <?php endif; ?>

    </div><!-- /#content -->
