<?php $base_path = base_path();?>
<?php print render($content['field_image']); ?>

<?php if (!$page && $title): ?>
  <header>
    <h2<?php print $title_attributes; ?>><a href="<?php print $node_url ?>" rel="external" title="<?php print $title ?>"><?php print $title ?></a></h2>
  </header>
<?php endif; ?>

 <div class="crn"><?php print render($content['field_course_number']); ?></div>
 <div class="course_dates"><?php print render($content['field_course_dates']); ?></div>
 <div class="times"><?php print render($content['field_times']); ?></div>
 <div class="course_instructor"><?php print render($content['field_instructor']) ?></div>
 <div class="catalog_term"><?php print render($content['field_course_catalog_term']) ?></div>
 <div class="days_term"><?php print render($content['field_course_days_term']) ?></div>
 <div class="times_term"><?php print render($content['field_course_times_term']) ?></div>
 <div class="topics_term"><?php print render($content['field_course_topics_term']) ?></div>

<?php
  $body = field_get_items('node',$node, 'body');
  print $body[0]['value'];
?>

 <p><hr/><a href="http://olliasheville.com/courses">View our current courses and workshops.</a></p>

