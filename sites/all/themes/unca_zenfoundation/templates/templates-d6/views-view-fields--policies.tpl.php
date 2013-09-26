<?php $base_path = base_path();?>
<div class="profile">

<?php
if ($fields['field_policy_number_value']->content)
print "<h2>" .$fields['field_policy_number_value']->content . ". ";
print $fields['title']->content . "</h2>";
//if ($fields['field_date_issued_value']->content) print " (" . $fields['field_date_issued_value']->content . ")</h2>";
?>
<?php //Use this if we decide to go with summaries.  Otherwise, output the body trimmed to 200 characters.
//print $fields['field_teaser_text_value']->content;
// print $fields['body']->content;?>
<ul>

<?php //if ($fields['field_policy_type_value']->content) print "<li><strong>Policy Type: </strong>" . $fields['field_policy_type_value']->content . "</li>";?>
<?php if ($fields['name']->content) print "<li><strong>Policy Owners: </strong>" . $fields['name']->content . "</li>";?>
<?php if ($fields['field_approval_date_value']->content) print "<li><strong>Approval Date: </strong>" . $fields['field_approval_date_value']->content . "</li>";?>
<?php if ($fields['field_approved_by_value']->content) print "<li><strong>Approved By: </strong>" . $fields['field_approved_by_value']->content . "</li>";?>
<?php 
$nid = $fields['nid']->content;
$node = node_load($nid);
$terms = taxonomy_node_get_terms_by_vocabulary($node, 5);
/*if (count($terms)==1){
	$cat = "Category";
} else $cat = "Categories";
if ($terms) {
  print "<li><strong>$cat:</strong> ";
     foreach ($terms as $key => $term) {
		$terms_string .= $term->name . ", ";
     }
  $terms_string = substr($terms_string, 0, strlen($terms_string)-2);
  print "$terms_string </li>";
} else {
	print "<li><strong>$cat:</strong> None";
}*/
?>
</ul>
</div>
<hr/>