<?php 
$eventtime = $fields['created']->raw;
$month = date('M',$eventtime);
$day = date('j',$eventtime);
$weekday = date('l',$eventtime);
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

//print_r($field_location);
//print_r(get_defined_vars());
//print_r ($fields['title']);
//print_r($fields['field_subheading_value']);
?>

   <?php 
    print "<h2>" . $fields['title']->content . "</h2>";
    print "<h3>" . $fields['field_subheading_value']->content . "</h3>";
    print "<p>$time $weekday, $month $day. " . $fields['field_location_value']->content . "</p>";
	print $image;
	print $fields['body']->content;
	print "<HR />";
   ?>
</a>
<div class="clear"></div>

