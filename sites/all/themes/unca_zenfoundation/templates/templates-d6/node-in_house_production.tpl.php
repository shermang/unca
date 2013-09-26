<?php $base_path = base_path();
//print_r($node);?>
<?php if ($field_image[0]['filepath']){?>
 <img src="
 <?php print $base_path . $field_image[0]['filepath']; ?>
 " width="175" alt="Production Still" class="left profiles"/>
 <?php } else { ?>
 <img src="http://www.unca.edu/sites/default/files/images/Not_Available.png" width="175" alt="Production Still" class="left profiles"/>
 <?php } 
 if ($field_production_date[0]['view'])
 if ($field_number[0]['view'])
  //print ("<h3>Production Number: " . $field_number[0]['view'] . "</h3>");
print $content;
print ("<p>Produced on " . $field_production_date[0]['view'] . "</p>");
print "<hr/>";
foreach ($field_video_embed as $video){
 print $video['view'];
}
foreach ($field_viddler_video as $video){
 print $video['view'];
}