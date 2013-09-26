<div id="footer-profile">
<img src="<?php print $fields['field_image_fid']->content; ?>" id="project-thumbnail" width="130" alt="" />
<p id="project-name"><?php print $fields['title']->content; ?></p>
<p id="profile-abstract"><?php print $fields['field_teaser_text_value']->content; ?></p>
<a class="button-blue-rounded" href="/projects/<?php print strtolower($fields['name']->content); ?>"><span>Find out more about upcoming projects.</span></a>
<div class="clear">&nbsp;</div>
</div>