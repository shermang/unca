<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?>">
<?php print $picture ?>
<?php if ($page == 0): ?>
<h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>
<?php print $content ?>
<div class="meta">
   <?php if ($taxonomy): ?>
   <?php print $terms ?>
   <?php endif;?>
</div>
<?php if ($links): ?>
<div class="links"><?php print $links; ?></div>
<?php endif; ?>
</div><!-- /node -->