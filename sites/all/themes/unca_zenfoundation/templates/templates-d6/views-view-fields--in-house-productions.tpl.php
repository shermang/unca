<?php 
 $base_path = base_path();
 
?>
<div class="profile">
<?php if ($fields['field_image_fid']->content){?>
 <img src="
 <?php print $fields['field_image_fid']->content; ?>
 " width="150" alt="project image" class="profile-image"/>
 <?php } else { ?>
 <img src="http://www.unca.edu/sites/default/files/images/Not_Available.png" width="150" alt="project image" class="profile-image"/>
 <?php } ?>
 <h2><?php print $fields['title']->content; ?></h2>
<?php print "<strong>" . $fields['field_production_date_value']->content . "</strong><br/>";?>
<?php print $fields['body']->content; ?></p>
</div>
<HR />