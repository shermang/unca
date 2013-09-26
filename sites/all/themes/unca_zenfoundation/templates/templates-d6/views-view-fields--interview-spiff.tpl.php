<div id="footer-profile">
<img src="<?php print $fields['field_image_fid']->content; ?>" id="project-thumbnail" width="130" alt="" />
<p id="project-name"><?php print $fields['title']->content; ?></p>
<p id="profile-abstract"><?php print $fields['field_teaser_text_value']->content; ?></p>
<a class="button-blue-rounded" href="/interviews/<?php print strtolower($fields['name']->content); ?>"><span>View more of our interviews.</span></a>
<div class="clear">&nbsp;</div>
</div>