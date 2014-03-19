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
  <header id="header" class="row">
      <div class="inner">
        <?php if ($logo): ?>
          <a class="logo-link" href="http://www.unca.edu" title="<?php print t('Home'); ?>"><img id="logo" src="<?php print $logo; ?>"></a>
        <?php endif; ?>
        <?php print render($page['header']); ?>
        <div id="navigation-primary-wrapper">
        <!-- Uncomment this next line if you want the Foundation topbar for the main menu -->
        <?php include(path_to_theme().'/templates/topbar.tpl.php'); ?>

        <?php if ($page['navigation']): ?>
          <nav class="navigation js-toggle">
            <?php print render($page['navigation']); ?>
          </nav>
        <?php endif; ?>
        </div> <!-- /#navigation-primary-wrapper -->
        <?php if($display_dept_name): ?>
          <div id="department-name-wrapper">
            <a href="<?php print check_url($front_page); ?>" accesskey="1"><?php print $site_name; ?>
              <span id="home-icon">&nbsp;</span>
            </a>
          </div>
        <?php endif; ?>
      </div><!-- /.inner -->
  </header>
</div> <!-- /.header-wrapper -->
