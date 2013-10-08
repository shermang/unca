<?php $base_path = base_path();?>

<?php if ($page == 0): ?>
<h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>

<?php print render($content['field_image']); ?>

<?php print render($content['field_teaser_text']); ?>
<?php print render($content['field_profile_department']); ?>
<?php print render($content['field_profile_type_term']); ?>
<?php print render($content['body']); ?>
<hr>
<?php 
  hide($content['comments']);
  print render($content['links']);
?>