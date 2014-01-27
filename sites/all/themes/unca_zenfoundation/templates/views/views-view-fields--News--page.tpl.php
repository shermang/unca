<div class="node">
   <h2><?php if (isset ($fields['title'])) print $fields['title']->content; ?></h2>
   <p class="article-date"><?php print $fields['created']->content; ?></p>
   <?php if (isset ($fields['field_news_teaser_value'])) print $fields['field_news_teaser_value']->content; ?>
</div>