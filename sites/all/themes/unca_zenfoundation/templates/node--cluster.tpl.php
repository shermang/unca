<?php $base_path = base_path();?>
<?php print render($content['field_image']); ?>
<ul>
<li>An<span class="alert"> instructor's name</span> beside the course indicates it must be taken with that instructor to count for the cluster.</li>
<li>Students are responsible for checking the <a href="http://catalog.unca.edu/" target="_blank">course catalog</a> to verify when a course is being taught.</li>
</ul>
<h2>About this cluster:</h2>
<?php print render($field_date); ?>
<?php print render($field_coordinator); ?>
<?php print render($content); ?>