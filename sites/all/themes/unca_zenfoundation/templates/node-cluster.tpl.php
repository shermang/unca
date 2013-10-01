<?php $base_path = base_path();?>
<?php if ($field_image[0]['filepath']){?>
 <img src=" <?php print $base_path . $field_image[0]['filepath']; ?> " width="175" alt="Cluster Logo" class="right profiles"/>
 <?php } else { ?>
 <img src="<?php print base_path() . path_to_theme(); ?>/images/Not_Available.png" width="175" alt="Cluster Thumbnail" class="left profiles"/>
 <?php } ?>
<ul>
<li>An<span class="alert"> instructor's name</span> beside the course indicates it must be taken with that instructor to count for the cluster.</li>
<li>Students are responsible for checking the <a href="http://catalog.unca.edu/" target="_blank">course catalog</a> to verify when a course is being taught.</li>
</ul>
<?php if ($body_summary[0]['safe']) { print ("<h2>Description:</h2> <p>" . $body_summary[0]['safe'] . "</p>"); }?>
<h2>About this cluster:</h2>
<?php if ($field_date[0]['view']) { print ("<h3>Approved Through:</h3><p>" . $field_date[0]['view'] . "</p>"); }?>
<?php if ($field_cluster_coordinator[0]['safe']) { print ("<h3>Coordinator:</h3> " . $field_cluster_coordinator[0]['safe']) ; }?>
 <?php print $content; ?></p>