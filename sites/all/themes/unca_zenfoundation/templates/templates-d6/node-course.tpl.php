<?php $base_path = base_path();?>
 <?php if ($field_instructor_photo[0]['filepath']){?>
 <img src="
 <?php print $base_path . $field_instructor_photo[0]['filepath']; ?>
 " width="150" alt="Instructor Photos" class="right profiles"/>
 <?php } else { ?>
 <img src="http://www.unca.edu/sites/default/files/images/Not_Available.png" width="175" alt="Project Logo" class="left profiles"/>
 <?php } ?>

 <h2><?php print $fields['title']->content; ?></h2>
 <div class="crn"><strong>CRN:</strong> <?php print $node->field_course_number[0]['safe']; ?></div>
 <div class="course_dates"><strong>Course Dates:</strong> <?php print $node->field_course_dates[0]['safe']; ?></div>
 <div class="course_times"><strong>Course Times:</strong> <?php print $node->field_times[0]['safe']; ?></div>
 <div class="course_instructor"><strong>Instructor:</strong> <?php print $node->field_instructor[0]['safe'] . " (<a href='http://olliasheville.com/all-courses?field_instructor_value=" . urlencode($node->field_instructor[0]['safe']) . "'>Instructor history</a>)"; ?></div>
 <!--<div class="course_instructor"><strong>Instructor:</strong> <?php print $node->field_instructor[0]['safe']; ?></div>-->
<?php /* sort taxonomy links by vocabulary 8 - Catalogs*/
$terms = taxonomy_node_get_terms_by_vocabulary($node, 8);
//print_r($terms);
if ($terms) {
  print '<div class="course_terms"><strong>Term:</strong> ';
     foreach ($terms as $key => $term) {
     print $term->name;
     }
  print '</div>';
}
?>
<?php if ($node->body) print $node->body;?>



<p><hr/><a href="http://olliasheville.com/courses">View our current courses and workshops.</a></p>