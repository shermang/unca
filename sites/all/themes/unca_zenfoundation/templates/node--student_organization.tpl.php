<?php if ($page == 0): ?>
<h2><a href="<?php print $node_url ?>" title="<?php print $title ?>"><?php print $title ?></a></h2>
<?php endif; ?>
<?php print render($content['field_teaser_text']); ?>
<hr>
<p><a href="http://studentactivities.unca.edu/student-organizations-list">Back to Student Organizations</a></p>