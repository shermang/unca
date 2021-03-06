<div id="node-<?php print $node->nid; ?>" class="node<?php if (!$status) { print ' node-unpublished'; } ?>">

<?php print render($content['field_image']); ?>
  <?php if (!$page && $title): ?>
  <header>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" rel="external" title="<?php print $title ?>"><?php print $title ?></a></h2>
  </header>
<?php endif; ?>

<p class="article-date"><?php print format_date($created);?></p>

<?php
  // We hide the comments and links now so that we can render them later.
  hide($content['comments']);
  hide($content['links']);
  print render($content);
?>

<?php print render($content['links']); ?>

</div><!-- /node -->
