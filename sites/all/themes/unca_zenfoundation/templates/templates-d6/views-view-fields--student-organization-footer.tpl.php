<div id="footer-profile">
<p id="profile-name"><?php print $fields['title']->content; ?></p>
<p id="profile-abstract"><?php print $fields['field_teaser_text_value']->content; ?></p>
<a class="button-blue-rounded" href="student-organizations-list<?php print strtolower($fields['name']->content); ?>"><span>See more of our Student Organizations</span></a>
<div class="clear">&nbsp;</div>
</div>