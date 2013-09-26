<div id="block-<?php print $block->module .'-'. $block->delta; ?>" class="clear-block block block-<?php print $block->module ?>">

<?php if (!empty($block->subject)): ?>
  <h2 class="section-heading"><span><?php print $block->subject ?></span></h2>
<?php endif;?>
  <div class="highlight-box"><?php print $block->content ?></div>
</div>