<div id="footer-profile">
<img src="<?php if (isset($fields['field_image'])) print $fields['field_image']->content; ?>" id="profile-headshot"/>
<p id="profile-name"><?php if (isset($fields['title']))  print $fields['title']->content; ?></p>
<!-- <p id="profile-major"><?php if (isset($fields['field_subhead'])) print $fields['field_subhead']->content; ?></p> -->
<p id="profile-abstract"><?php if (isset($fields['field_teaser_text_value'])) print $fields['field_teaser_text_value']->content; ?></p>
<a class="button-blue-rounded" href="/faces/<?php print strtolower($fields['name']->content); ?>"><span>Meet more of our <?php print strtolower($fields['name']->content); ?></span></a>
<div class="clear">&nbsp;</div>
</div>
