<?php $base_path = base_path();?>
<div class="profile">
<?php if ($fields['field_image_fid']->content){?>
 <img src="
 <?php print $fields['field_image_fid']->content; ?>
 " width="129" height="129" alt="headshot" class="profile-image"/>
 <?php } else { ?>
 <img src="http://www.unca.edu/sites/default/files/images/Not_Available.png" width="129" height="129" alt="headshot" class="profile-image"/>
 <?php } ?>
 <h2><?php print $fields['title']->content; ?></h2>
<p><?php print $fields['field_subhead_value']->content; ?><br />
<?php print $fields['field_teaser_text_value']->content; ?></p>
</div>