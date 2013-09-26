<?php $base_path = base_path();?>
<div>
<div class="photo-list-item caption">
<?php 
if ($fields['field_image_with_cropping_fid']->content){
  print $fields['field_image_with_cropping_fid']->content;
} else { ?>
 <img src="http://www.unca.edu/sites/default/files/images/Not_Available.png" width="150" alt="slideshow image" class="profile-image"/>
 <?php } ?>
</div>
 <h2><?php print $fields['title']->content; ?></h2>
<?php print $fields['body']->content; ?>
<hr/>
</div>