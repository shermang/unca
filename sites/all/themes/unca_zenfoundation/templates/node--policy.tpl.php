<?php $base_path = base_path();?>

<h2><?php print render($content['field_policy_number']); ?></h2>
<ul>
  <li><?php print render($content['field_policy_approved_by']); ?></li>
  <li><?php print render($content['field_policy_type']); ?></li> 
  <li><?php print render($content['field_policy_owner_term']); ?></li>  
  <li><?php print render($content['field_policy_responsible_term']); ?></li> 
</ul>
<h2>Revision History</h2>
<ul>
  <li><?php print render($content['field_policy_responsible_term']); ?></li>
  <li><?php print render($content['field_policy_origination_date']); ?></li>
  <li><?php print render($content['field_policy_last_amended_date']); ?></li> 
  <li><?php print render($content['field_policy_approval_date']); ?></li>  
  <li><?php print render($content['field_policy_next_review_date']); ?></li> 
</ul>
<?php
  $body = field_get_items('node',$node, 'body');
  print $body[0]['value'];
?>
<hr/>
  <?php print render($content['field_policy_reference_materials']); ?>
  <?php print render($content['	field_policy_origination_date']); ?>

<?php print render($content['links']); ?>