<?php

/**
 * @file
 * Default theme implementation to format an individual feed item for display
 * on the aggregator page.
 *
 * Available variables:
 * - $feed_url: URL to the originating feed item.
 * - $feed_title: Title of the feed item.
 * - $source_url: Link to the local source section.
 * - $source_title: Title of the remote source.
 * - $source_date: Date the feed was posted on the remote source.
 * - $content: Feed item content.
 * - $categories: Linked categories assigned to the feed.
 *
 * @see template_preprocess()
 * @see template_preprocess_aggregator_item()
 *
 * @ingroup themeable
 */
?>
<div class="feed-item">
  <h3 class="feed-item-title">
    <a href="<?php print $feed_url; ?>"><?php print $feed_title; ?></a>
  </h3>
</div>
