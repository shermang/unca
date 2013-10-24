<?php
/**
 * @file
 * Zen theme's implementation to display a single Drupal page.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $secondary_menu_heading: The title of the menu used by the secondary links.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['header']: Items for the header region.
 * - $page['navigation']: Items for the navigation region, below the main menu (if any).
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['footer']: Items for the footer region.
 * - $page['bottom']: Items to appear at the bottom of the page below the footer.
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see zen_preprocess_page()
 * @see template_process()
 */
?>
<?php if ($page['emergency']): ?>
<div id="region_emergency">
  <?php print render($page['emergency']); ?>
</div>
<?php endif; ?>
<div id="page">
  <?php include(path_to_theme().'/templates/header.tpl.php'); ?>

  <div id="main" class="row top-stripes">

<?php 
/*  <?php if ($breadcrumb): ?>
 *      <?php print $breadcrumb; ?>
 * <?php endif; ?>
 */
?>

  <?php if ($page['notice']): ?>
    <div id="region_notice">
      <?php print render($page['notice']); ?>
    </div>
  <?php endif; ?>



    <div id="content" class="bottom-stripes content <?php print $page_layout_wrapper_classes; ?>" role="content">
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="title" id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>

      <!-- Primary Content Column -->
      <?php print render($page['content']); ?>
      <!-- Content Row 1-->
      <?php if ($page['content_row_1']): ?>
      <div class="content_row_1">
        <?php print render($page['content_row_1']); ?>
      </div>
      <?php endif; ?>
      <!-- Content Row 2 Column 1-->
      <?php if ($page['content_row_2_column_1'] || $page['content_row_2_column_2']): ?>
        <div class="row featured-blocks">
          <?php if ($page['content_row_2_column_1']): ?>
          <div class="content_row_2_column_1 tiny-12 small-6 columns">
            <?php print render($page['content_row_2_column_1']); ?>
          </div>
          <?php endif; ?>
          <!-- Content Row 2 Column 2-->
          <?php if ($page['content_row_2_column_2']): ?>
          <div class="content_row_2_column_2 tiny-12 small-6 columns">
            <?php print render($page['content_row_2_column_2']); ?>
          </div>
          <?php endif; ?>
        </div>
      <?php endif; ?>
      <?php print $feed_icons; ?>
    </div><!-- /#content -->

    <!-- Let's simplify the sidebar logic since we only have one sidebar region. -->
    <?php if ($page['sidebar_first']): ?>
      <aside class="sidebar">
        <div class="block block-menu contextual-links-region first odd block-menu-menu-secondary-navigation---prot navigation-secondary right-spiff" id="block-menu-menu-secondary-navigation-prot" role="navigation">
          <?php print render($sidebar_menu); ?>
        </div>
        <?php print render($page['sidebar_first']); ?>
      </aside><!-- /.sidebar -->
    <?php endif; ?>

  </div><!-- /#main -->

 <?php if ($page['footer'] || $page['footer_promo_a'] || $page['footer_promo_large'] || $page['footer_promo_b']): ?>

    <div id="bottom-spiffs" class="row fill-left fill-right footer-blocks ">
        <?php if ($page['footer_promo_a']): ?>
          <div class="column large-3 columns first">
            <?php print render($page['footer_promo_a']); ?>
          </div><!-- /.column .columns .first -->
        <?php endif; ?>

        <?php if ($page['footer_promo_large']): ?>
          <div id="footer-profile" class="column large-6 columns interior">
            <?php print render($page['footer_promo_large']); ?>
          </div><!-- /.column .columns .interior -->
        <?php endif; ?>      

        <?php if ($page['footer_promo_b']): ?>
          <div class="column large-3 columns last">
            <?php print render($page['footer_promo_b']); ?>
          </div><!-- /.column .columns .last -->
        <?php endif; ?>
    </div><!-- /.row .fill-left .fill-right .footer-blocks -->

    <div class="footer">
       <?php print render($page['footer']); ?>
    </div><!-- /.footer -->
  <?php endif; ?>

</div><!-- /#page -->

<?php print render($page['bottom']); ?>
