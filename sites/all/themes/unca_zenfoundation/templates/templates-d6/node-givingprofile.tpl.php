<?php $base_path = base_path();?>
<img class="left profiles" src="<?php print $base_path . $field_image[0]['filepath']; ?>" width="175" height="175" alt="Headshot of <?php print $title; ?>" class="left" />
<h2><?php print $title; ?></h2>
<p><?php print $field_subhead[0]['safe']; ?><br />
<?php print $content; ?></p>