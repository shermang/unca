<?php
/**
 * @file views-view-fields.tpl.php
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->separator: an optional separator that may appear before a field.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<?php $base_path = base_path();?>
<div class="profile">
<div class="float-right">
<?php if ($fields['field_image_fid']->content){?>
 <img src="
 <?php print $fields['field_image_fid']->content; ?>
 " width="150" alt="project image" class="profile-image"/>
 <?php } else { ?>
 <img src="http://www.unca.edu/sites/default/files/images/Not_Available.png" width="150" alt="project image" class="profile-image"/>
 <?php } ?>
 </div>
 <h2><?php print $fields['title']->content; ?></h2>
<?php print $fields['field_teaser_text_value']->content; ?></p>
</div>