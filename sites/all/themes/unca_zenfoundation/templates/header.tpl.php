<?php
/**
 * @file
 * Include file containing header content used on all pages
 *
 * This is not a fully-fledged drupal tpl, simply an include. All vars are
 * courtesy of the parent tpl including this file
 */
?>

<div class="header-wrapper">
  <header id="header">
      <div class="inner">
        <?php if ($logo): ?>
          <a class="logo-link" href="<?php print url('<front>') ?>" title="<?php print t('Home'); ?>"><img id="logo" src="<?php print $logo; ?>"></a>
        <?php endif; ?>
        <?php if ($site_name): ?>
          <h1 id="site-name"><a href="<?php print url('<front>') ?>" title="<?php print t('Home'); ?>"><?php print $site_name; ?></a></h1>
        <?php endif; ?>

        <?php print render($page['header']); ?>

        <!-- Uncomment this next line if you want the Foundation topbar for the main menu -->
        <!-- <?php //include(path_to_theme().'/templates/topbar.tpl.php'); ?> -->

        <?php if ($page['navigation']): ?>
          <nav class="navigation js-toggle">
            <?php print render($page['navigation']); ?>
          </nav>
        <?php endif; ?>
      </div><!-- /.inner -->
  </header>
</div> <!-- /.header-wrapper -->