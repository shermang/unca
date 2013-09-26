<?php 
$eventtime = $fields['created']->raw;
$month = date('M',$eventtime);
$day = date('j',$eventtime);
$time = date('g:i A',$eventtime);

?>

<a href="<?php print $fields['path']->content; ?>" class="calendar-graphic">
   <span class="calendar-month"><?php print $month; ?></span> 
   <span class="calendar-day"><?php print $day; ?></span>
</a> 
<a href="<?php print $fields['path']->content; ?>" class="calendar-text">
   <span class="calendar-time"><?php print $time; ?></span>
   <br />
   <?php 
    print $fields['title']->content;
   ?>
</a>
<div class="clear"></div>

