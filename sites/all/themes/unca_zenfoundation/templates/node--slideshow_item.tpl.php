<div id="node-<?php print $node->nid; ?>" class="node<?php if (!$status) { print ' node-unpublished'; } ?>">
<h2><?php if (!$page && $title): ?>
  <header>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" rel="external" title="<?php print $title ?>"><?php print $title ?></a></h2>
  </header>
  <?php endif; ?></h2>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    if ($content['field_show_image_on_inside_page'])
        print render($content['field_image']);
    print render($content);
  ?>

<hr/>
</div><!-- /node -->
