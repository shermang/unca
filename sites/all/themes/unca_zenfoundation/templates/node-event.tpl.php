<div id="node-<?php print $node->nid; ?>" class="node<?php if ($sticky) { print ' sticky'; } ?><?php if (!$status) { print ' node-unpublished'; } ?>">
<?php print $picture;
$base_path = base_path();


$eventtime = $created;
$month = date('M',$eventtime);
$day = date('j',$eventtime);
$year = date('Y',$eventtime);
$weekday = date('l',$eventtime);
$time = date('g:i A',$eventtime);

if ($field_image[0]['filepath']){
	$image = "<img src=\"" . $base_path . $field_image[0]['filepath'] . "\" width=\"200\" alt=\"Event Image\" 
	style=\"margin-top: 0px; margin-right: 20px; margin-bottom: 5px;
    margin-left: 0px; float: left; padding: 0px; border: 0px initial initial;\" />";
 } else {
 	$image = "<img src=\"../../default/files/images/Not_Available.png\" width=\"200\" alt=\"Event Image\" 
	style=\"margin-top: 0px; margin-right: 20px; margin-bottom: 5px;
    margin-left: 0px; float: left; padding: 0px; border: 0px initial initial;\" class=\"left\"/>";
}

 ?>
<?php if ($page == 0): ?>
<h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>

<?php 
	print "<h2>" . $field_subheading[0]['safe'] . "</h2>";
    print "$time $weekday, $month $day, $year. " . $field_location[0]['safe'] . "";
	if(!$node->field_video_embed[0]['embed']) {
		print $image;
	}
print $content 
?>

<div class="meta">
   <?php if ($taxonomy): ?>
   <?php //print $terms ?>
   <?php endif;?>
</div>

<?php if ($links): ?>
<div class="links"><?php print $links; ?></div>
<?php endif; ?>
</div><!-- /node -->