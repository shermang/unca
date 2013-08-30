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

        <nav class="top-bar">
          <ul class="title-area">
            <!-- Remove the class "menu-icon" to get rid of menu icon. Take out "Menu" to just have icon alone -->
            <li class="toggle-topbar menu-icon"><a href="#"><span aria-hidden="true" class="icon-menu">Menu</span></a></li>
          </ul>

          <section class="top-bar-section">
            <?php
              print theme('links__system_main_menu', array(
                'links' => $main_menu,
                'attributes' => array(
                  'class' => array('main-menu-links', 'links', 'inline', 'clearfix'),
                  ),
                'heading' => array(
                  'text' => t('Main menu'),
                  'level' => 'h2',
                  'class' => array('element-invisible'),
                  ),
                )
              );
            ?>
          </section>
        </nav> <!-- /.top-bar -->
      </div><!-- /.inner -->
  </header>
</div> <!-- /.header-wrapper -->