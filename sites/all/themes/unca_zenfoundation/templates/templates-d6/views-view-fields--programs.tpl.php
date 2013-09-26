<?php $base_path = base_path();?>
<div class="profile">
<a href="<?php print $fields['path']->content;?>"><?php if ($fields['field_image_fid']->content){?>
 <img src="
 <?php print $fields['field_image_fid']->content; ?>
 " width="150" alt="project image" class="profile-image" style="border-style: solid; border-width: 1px;"/>
 <?php } else { ?>
 <img src="http://www.unca.edu/sites/default/files/images/Not_Available.png" width="150" alt="project image" class="profile-image"/>
 <?php } ?></a>
 <?php print "<h2>" . $fields['title']->content . "</h2><b>" .$fields['tid']->content . "</b><br/>"; ?>
<?php print $fields['field_teaser_text_value']->content;?></p>
</div>
<hr/>