<?php
$timezone = $row->field_field_date[0]['raw']['timezone_db'];
$eventtime = strtotime($row->field_data_field_date_field_date_value.' '.$timezone);

$month = format_date($eventtime, 'custom', 'M');
$day = format_date($eventtime, 'custom', 'j');
$time = format_date($eventtime, 'custom', 'g:i A');

if(!empty($row->field_field_link_value[0]['raw']['value'])){
  $field_link_value = $row->field_field_link_value[0]['raw']['value'];
} else {
  $field_link_value = '';
}

?>
<a href="<?php print $field_link_value; ?>">
  <span><?php print $month; ?></span>
  <span><?php print $day; ?></span>
</a>
<a href="<?php print $field_link_value ?>">
  <span><?php print $time; ?></span>
  <br />
  <?php print $fields['title']->content; ?>
</a>
<div class="clear"></div>
