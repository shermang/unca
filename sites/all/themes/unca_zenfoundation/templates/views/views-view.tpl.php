<?php
/**
 * Variables available:
 * - $css_name: A css-safe version of the view name.
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 * - $admin_links: A rendered list of administrative links
 * - $admin_links_raw: A list of administrative links suitable for theme('links')
 *
 * @ingroup views_templates
 */
?>
  <?php if (isset($admin_links)): ?>
    <div class="admin-links"><?php print $admin_links; ?></div>
  <?php endif; ?>
  <?php if ($header): ?>
    <div class="view-header"><?php print $header; ?></div>
  <?php endif; ?>
  <?php if ($exposed): ?>
    <div class="view-filters"><?php print $exposed; ?></div>
  <?php endif; ?>
  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before"><?php print $attachment_before; ?></div>
  <?php endif; ?>
  <?php if ($rows): ?><?php print $rows; ?>
  <?php elseif ($empty): ?><?php print $empty; ?>
  <?php endif; ?>
  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>
  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after"><?php print $attachment_after; ?></div>
  <?php endif; ?>
  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>
  <?php if ($footer): ?>
    <div class="view-footer"><?php print $footer; ?></div>
  <?php endif; ?>
  <?php if ($feed_icon): ?>
    <div class="feed-icon"><?php print $feed_icon; ?></div>
  <?php endif; ?>