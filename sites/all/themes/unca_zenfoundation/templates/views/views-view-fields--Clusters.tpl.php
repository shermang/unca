<?php $base_path = base_path();?>
<div class="profile">
    <div class="profile-image"/> <?php print $fields['field_image_fid']->content; ?></div>
	<h2><?php print $fields['field_number_value']->content . " - " .  $fields['title']->content; ?></h2>
	<?php print $fields['field_teaser_text_value']->content; ?>
</div>