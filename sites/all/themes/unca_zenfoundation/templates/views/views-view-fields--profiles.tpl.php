<?php $base_path = base_path();?>
<div class="profile">
<?php if (strpos($fields['field_image_fid']->content,'src=') != 0){?>
  <?php print $fields['field_image_fid']->content; ?>
  <?php } else { ?>
 <img src="http://www.unca.edu/sites/default/files/images/Not_Available.png" width="175" height="175" alt="headshot" class="profile-image"/>
 <?php } ?>
 <h2><?php print $fields['title']->content; ?></h2>
<p><?php print $fields['field_subhead_value']->content; ?><br />
<?php

switch (TRUE){
  case strip_tags($fields['field_profile_contact_info']->content) != "":
    print $fields['field_profile_contact_info']->content;
    break;
  case strip_tags($fields['field_profile_personal_statement']->content) != "":
    print $fields['field_profile_personal_statement']->content;
    break;
  default:
    print $fields['field_teaser_text_value']->content;
    break;
}
?></p>
</div>