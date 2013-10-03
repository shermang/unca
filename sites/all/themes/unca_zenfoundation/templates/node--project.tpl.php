<?php $base_path = base_path();?>

  <?php print render($field_image); ?>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
  ?>
<hr>
  <?php print render($content['links']); ?>