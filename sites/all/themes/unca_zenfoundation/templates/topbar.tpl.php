<?php
/**
 * @file
 * Include file containing header content used on all pages
 *
 * This is not a fully-fledged drupal tpl, simply an include. All vars are
 * courtesy of the parent tpl including this file
 */
?>



        <nav class="top-bar">
          <ul class="title-area">
            <!-- Title Area -->
            <li class="name">
              <h1><a href="#"><?php print $site_name; ?></a></h1>
            </li>
            <!-- Remove the class "menu-icon" to get rid of menu icon. Take out "Menu" to just have icon alone -->
            <li class="toggle-topbar menu-icon"><a href="#"><span aria-hidden="true" class="icon-menu">Menu</span></a></li>
          </ul>

          <section id="navigation-primary-wrapper" class="top-bar-section">
            <?php
              print theme('links__system_main_menu', array(
                'links' => $main_menu,
                'attributes' => array(
                  'id' => array('navigation-primary'),
                  'class' => array('list-horizontal, main-menu-links', 'links', 'left'),
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