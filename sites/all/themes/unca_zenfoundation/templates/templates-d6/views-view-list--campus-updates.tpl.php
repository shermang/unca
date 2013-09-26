<<?php print $options['type']; ?> class="list-unstyled campus-updates">
<?php foreach ($rows as $id => $row): ?>
   <li class="<?php print $classes[$id]; ?>"><?php print $row; ?></li>
<?php endforeach; ?>
</<?php print $options['type']; ?>>
<div class="clear">&nbsp;</div>