<?php $base_path = base_path();?>

<?php if ($page == 0): ?>
  <h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>

<div class="profile-image"><?php print render($content['field_image']); ?></div>

<?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
   ?>
<hr>
  <?php print render($content['links']); ?>