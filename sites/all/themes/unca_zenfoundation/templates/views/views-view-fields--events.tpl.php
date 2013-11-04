<?php
$eventtime = strtotime($row->field_data_field_date_field_date_value);
$timezone = $row->field_field_date[0]['raw']['timezone'];
$month = format_date($eventtime, 'custom', 'M', $timezone);
$day = format_date($eventtime, 'custom', 'j', $timezone);
$time = format_date($eventtime, 'custom', 'g:i A',$timezone);

if(!empty($row->field_field_link_value[0]['raw']['value'])){
  $field_link_value = $row->field_field_link_value[0]['raw']['value'];
} else {
  $field_link_value = '';
}

?>
<a href="<?php print $field_link_value; ?>" class="calendar-graphic">
  <span class="calendar-month"><?php print $month; ?></span>
  <span class="calendar-day"><?php print $day; ?></span>
</a>
<a href="<?php print $field_link_value ?>" class="calendar-text">
  <span class="calendar-time"><?php print $time; ?></span>
  <br />
  <?php print $fields['title']->content; ?>
</a>
<div class="clear"></div>
