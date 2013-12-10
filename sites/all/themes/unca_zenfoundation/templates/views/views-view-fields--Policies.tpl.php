<?php $base_path = base_path();?>
<div class="profile">

<?php
if ($fields['field_policy_number_value']->content)
print "<h2>" .$fields['field_policy_number_value']->content . ". ";
print $fields['title']->content . "</h2>";
?>
<ul>

<?php if ($fields['field_policy_type_value']->content) print "<li><strong>Policy Type: </strong>" . $fields['field_policy_type_value']->content . "</li>";?>
<?php //if ($fields['field_policy_owner_term']->content) print "<li><strong>Policy Owners: </strong>" . $fields['field_policy_owner_term']->content . "</li>";?>
<?php if ($fields['field_approval_date_value']->content) print "<li><strong>Approval Date: </strong>" . $fields['field_approval_date_value']->content . "</li>";?>
<?php if ($fields['field_approved_by_value']->content) print "<li><strong>Approved By: </strong>" . $fields['field_approved_by_value']->content . "</li>";?>
<?php if ($fields['field_associated_forms_value']->content) print "<li><strong>Approved By: </strong>" . $fields['field_associated_forms_value']->content . "</li>";?>
<?php 
  $nid = $fields['nid']->content;
  $node = node_load($nid);
  $terms = taxonomy_vocabulary_machine_name_load('policy_categories');
?>
</ul>
</div>
<hr/>