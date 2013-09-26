<?php $base_path = base_path();?>
<?php if ($field_image[0]['filepath']){?>
 <img src="
 <?php print $base_path . $field_image[0]['filepath']; ?>
 " width="175" alt="Project Logo" class="right profiles"/>
 <?php } else { ?>
 <img src="http://www.unca.edu/sites/default/files/images/Not_Available.png" width="175" alt="Project Logo" class="right profiles"/>
 <?php } ?>
 <?php if ($field_subhead[0]['safe']) { print ("<h2>" . $field_subhead[0]['safe'] . "</h2>"); }?>
<?php print $content; ?></p>