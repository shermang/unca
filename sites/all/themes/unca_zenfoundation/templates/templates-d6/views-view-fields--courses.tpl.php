 
 <h2><?php print $fields['title']->content; ?></h2>
 <div class="crn"><strong>CRN:</strong> <?php print $fields['field_course_number_value']->content; ?></div>
 <div class="course_dates"><strong>Course Dates:</strong> <?php print $fields['field_course_dates_value']->content; ?></div>
 <div class="course_times"><strong>Course Times:</strong> <?php print $fields['field_times_value']->content; ?></div>
 <!--<div class="course_instructor"><strong>Instructor:</strong> <?php print "<a href='" . $base_path . "?field_instructor_value=" . $fields['field_instructor_value']->content . "'>" . $fields['field_instructor_value']->content. "</a>"; ?></div>-->
 <div class="course_instructor"><strong>Instructor:</strong> <?php print $fields['field_instructor_value']->content; ?></div>
 


<?php /* sort taxonomy links by vocabulary 8 - Catalogs*/
$nid = $fields['nid']->content;
$node = node_load($nid);
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