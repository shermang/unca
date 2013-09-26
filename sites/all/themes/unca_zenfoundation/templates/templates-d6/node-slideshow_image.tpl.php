<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?>">
<h2><?php print $title ?></a></h2>
<?php print $content; ?>
<strong><?php print "In these slideshows" ?></strong>
<?php print $terms; ?>
<hr/>
</div><!-- /node -->