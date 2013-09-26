<?PHP
if ($fields['field_slideshow_link_url']->content){
	$link = $fields['field_slideshow_link_url']->content;
} else {
	//The following code is required to pull out the URL from the view_node output.  For whatever
	//reason, Drupal won't just give us the URL without the link code wrapped around it.
	$url_start=strpos($fields['view_node']->content, "\"") +1 ;
	$url_end=strpos($fields['view_node']->content, "\"",10);
	$url_length = $url_end - $url_start;
	$link = substr($fields['view_node']->content, $url_start, $url_length);
}
//print_r($fields['view_node']);
?>
<div class="slide">
	<img src="<?php print $fields['field_slideshow_image_fid']->content; ?>" width="712" height="400" alt="<?php print $fields['field_slideshow_caption_value']->content;?>" />
	<p class="caption">
	<span class="heading"><?php print $fields['field_slideshow_caption_value']->content;?></span>
	<span class="subheading"><?php print $fields['field_subhead_value']->content;?></span>
	<span>
	<?php print ("<a class=\"button-blue-rounded\" href=\"$link\"><span>Read More</span></a>");?>
   </span></p>
</div>