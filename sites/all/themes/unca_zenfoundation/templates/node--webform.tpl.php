<div id="node-<?php print $node->nid; ?>" class="node<?php if (!$status) { print ' node-unpublished'; } ?>">

<?php if ($page == 0): ?>
<h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>

<?php
  // We hide the comments and links now so that we can render them later.
  hide($content['comments']);
  hide($content['links']);
  print render($content);
?>

 <?php print render($content['links']); ?>
  
</div><!-- /node -->
