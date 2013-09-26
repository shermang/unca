<?php $base_path = base_path();?>
<?php if ($field_image[0]['filepath']){?>
 <img src="
 <?php print $base_path . $field_image[0]['filepath']; ?>
 " width="175" height="175" alt="headshot" class="left profiles"/>
 <?php } else { ?>
 <img src="http://www.unca.edu/sites/default/files/images/Not_Available.png" width="175" height="175" alt="headshot" class="left profiles"/>
 <?php } ?>
<h2><?php if ($field_first_name[0]['safe'] && $field_last_name[0]['safe']) {
 print $field_first_name[0]['safe'] . " " . $field_last_name[0]['safe']; } else { print $title; }?></h2>
<p><?php if ($field_subhead[0]['safe']) { print $field_subhead[0]['safe']; ?><br /><?php }?>
<?php print $content; ?></p>