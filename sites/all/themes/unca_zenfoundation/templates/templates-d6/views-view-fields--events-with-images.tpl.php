<?php 
$eventtime = $fields['created']->raw;
$month = date('M',$eventtime);
$day = date('j',$eventtime);
$weekday = date('l',$eventtime);
$year = date('Y',$eventtime);
$time = date('g:i A',$eventtime);
if ($fields['field_image_fid']->content){
	$image = "<img src=\"" . $fields['field_image_fid']->content . "\" width=\"200\" alt=\"Event Image\" 
	style=\"margin-top: 0px; margin-right: 20px; margin-bottom: 5px;
    margin-left: 0px; float: left; padding: 0px; border: 0px initial initial;\" />";
 } else {
 	$image = "<img src=\"http://www.unca.edu/sites/default/files/images/Not_Available.png\" width=\"200\" alt=\"Event Image\" 
	style=\"margin-top: 0px; margin-right: 20px; margin-bottom: 5px;
    margin-left: 0px; float: left; padding: 0px; border: 0px initial initial;\" class=\"left\"/>";
}

?>

   <?php 
    print "<h2>" . $fields['title']->content . "</h2>";
    print "<h3>" . $fields['field_subheading_value']->content . "</h3>";
    print "<p>$time $weekday, $month $day, $year. " . $fields['field_location_value']->content . "</p>";
	print "<a href=\"" . $fields['path']->content . "\">" . $image . "</a>";
	print $fields['body']->content;
	print "<HR />";
   ?>
</a>
<div class="clear"></div>

