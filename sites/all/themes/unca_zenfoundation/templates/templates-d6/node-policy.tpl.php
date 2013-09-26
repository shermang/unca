<?php $base_path = base_path();?>
<?php //print_r($node) ?>
<div style="float:right;">
<?php print("<a href=\"" . $base_path . $node->links['print_html']['href'] . "\">" . $node->links['print_html']['title'] . "</a>") ?>
</div>
<!--<a href="http://administration.unca.edu/policies">Return to Policies</a>-->
<h2><?php print "Policy Number: " . $node->field_policy_number[0]['value']; ?></h2>
<?php //if ($node->field_teaser_text[0]['safe'])
  //print $node->field_teaser_text[0]['safe'];?>
<ul>

<?php if ($node->field_approved_by[0]['safe']) print "<li><strong>Approval Authority: </strong>" . $node->field_approved_by[0]['safe'] . "</li>";?>
<?php if ($node->field_policy_type[0]['safe']) print "<li><strong>Policy Type: </strong>" . $node->field_policy_type[0]['safe'] . "</li>";?>
<?php 
	print "<li><strong>Policy Owner: </strong>";
	foreach($node->taxonomy as $term){
		if ($term->vid == 4)
		 print $term->name;
	}
	"</li>";
?>
<?php 
	print "<li><strong>Responsible Office: </strong>";
	foreach($node->taxonomy as $term){
		if ($term->vid == 7)
		 print $term->name;
	}
	"</li>";
?>
</ul>
<h2>Revision History</h2>
<ul>
<?php if ($node->field_responsible_office[0]['safe']) print "<li><strong>Responsible Office: </strong>" . $node->field_responsible_office[0]['safe'] . "</li>";?>
<?php if ($node->field_date_issued[0]['view']) print "<li><strong>Origination Date: </strong>" . $node->field_date_issued[0]['view'] . "</li>";?>
<?php if ($node->field_date_issued[0]['view']) print "<li><strong>Last Amended: </strong>" . $node->field_last_amended[0]['view'] . "</li>";?>
<?php if ($node->field_date_issued[0]['view']) print "<li><strong>Approval Date: </strong>" . $node->field_approval_date[0]['view'] . "</li>";?>
<?php if ($node->field_date_issued[0]['view']) print "<li><strong>Next Review: </strong>" . $node->field_next_review[0]['view'] . "</li>";?>
</ul>
<?php if ($node->body) print $node->body;?>
<hr/>
<?php if ($node->field_reference_materials[0]['safe']) print "<h2>Reference Materials</h2>" . $node->field_reference_materials[0]['safe'];?>
<?php if ($node->field_associated_forms[0]['safe']) print "<h2>Associated Forms</h2>" . $node->field_associated_forms[0]['safe'];?>
<!--<a href="http://administration.unca.edu/policies">Return to Policies</a>-->
<?php //print $content; ?>