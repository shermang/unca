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
            <li class="name"><!-- Site name left empty http://foundation.zurb.com/docs/components/top-bar.html --></li>
            <!-- Remove the class "menu-icon" to get rid of menu icon. Take out "Menu" to just have icon alone -->
            <li class="toggle-topbar menu-icon"><a href="#"><span aria-hidden="true" class="icon-menu">Menu</span></a></li>
          </ul>

          <section class="top-bar-section">
            <ul class="top-bar-search">
              <li class="has-form search">
                <div id="search" class="search-bar">
                <?php
                  $block = module_invoke('search', 'block_view', 'search');
                  print render($block);
                ?>
				<div id="searchPeopleButton"  onClick="searchPeople();"></div>
                </div> <!-- /#search -->
              </li>
            </ul>
            <?php
              print theme('links__system_main_menu', array(
                'links' => $main_menu,
                'attributes' => array(
                  'id' => array('navigation-primary'),
                  'class' => array('list-horizontal', 'main-menu-links', 'links', 'left', 'top-bar-primary'),
                  ),
                'heading' => array(
                  'text' => t('Main menu'),
                  'level' => 'h2',
                  'class' => array('element-invisible'),
                  ),
                )
              );
            ?>
            <ul class="top-bar-secondary show-for-tiny">
              <li>
                <?php print $secondary_menu; ?>
              </li>
              <li>
                <?php print $utility_menu; ?>
              </li>
            </ul>
          </section>
        </nav> <!-- /.top-bar -->
