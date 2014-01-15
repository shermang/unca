<?php if (isset ($fields['title'])) print $fields['title']->content; ?>
<?php if (isset ($fields['created'])) print "<p>" . $fields['created']->content . "</p>"; ?>
	<?php if (isset ($fields['field_campus_update_image_fid'])) print $fields['field_campus_update_image_fid']->content; ?> 
	<?php if (isset ($fields['body'])) print "<p>" . $fields['body']->content; ?>
	<?php if (isset ($fields['view_node'])) print $fields['view_node']->content . "</p>"; ?>