<?php $base_path = base_path();?>
<div id="node-<?php print $node->nid; ?>" class="node<?php if (!$status) { print ' node-unpublished'; } ?>">

  <?php if ($page == 0): ?>
    <h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
  <?php endif; ?>

  <?php print render($content['field_image']); ?>
  <ul class="cluster-notes">
  <li>An<span class="alert"> instructor's name</span> beside the course indicates it must be taken with that instructor to count for the cluster.</li>
  <li>Students are responsible for checking the <a href="http://catalog.unca.edu/" target="_blank">course catalog</a> to verify when a course is being taught.</li>
  </ul>

  <h2 class="node-about">About this cluster:</h2>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
  ?>

  <?php print render($content['links']); ?>

</div><!-- /node -->