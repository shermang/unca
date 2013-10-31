<?php
$eventtime = strtotime($row->field_data_field_date_field_date_value);
$month = date('M',$eventtime);
$day = date('j',$eventtime);
$time = date('g:i A',$eventtime);
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
