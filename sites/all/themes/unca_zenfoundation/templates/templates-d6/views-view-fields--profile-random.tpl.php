<div id="footer-profile">
<img src="<?php print $fields['field_image_fid']->content; ?>" id="profile-headshot" width="129" height="129" alt="" />
<p id="profile-name"><?php print $fields['title']->content; ?></p>
<p id="profile-major"><?php print $fields['field_subhead']->content; ?></p>
<p id="profile-abstract"><?php print $fields['field_teaser_text_value']->content; ?></p>
<a class="button-blue-rounded" href="/faces/<?php print strtolower($fields['name']->content); ?>"><span>Meet more of our <?php print strtolower($fields['name']->content); ?></span></a>
<div class="clear">&nbsp;</div>
</div>