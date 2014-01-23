<?php
/**
 * @file
 * unca_global_header_and_footer.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function unca_global_header_and_footer_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
  );
  // Exported menu link: main-menu:http://news.unca.edu/
  $menu_links['main-menu:http://news.unca.edu/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://news.unca.edu/',
    'router_path' => '',
    'link_title' => 'News & Events',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Exported menu link: main-menu:http://www.unca.edu/about
  $menu_links['main-menu:http://www.unca.edu/about'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.unca.edu/about',
    'router_path' => '',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: main-menu:http://www.unca.edu/academics
  $menu_links['main-menu:http://www.unca.edu/academics'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.unca.edu/academics',
    'router_path' => '',
    'link_title' => 'Academics',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: main-menu:http://www.unca.edu/admissions
  $menu_links['main-menu:http://www.unca.edu/admissions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.unca.edu/admissions',
    'router_path' => '',
    'link_title' => 'Admissions',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: main-menu:http://www.unca.edu/centers
  $menu_links['main-menu:http://www.unca.edu/centers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.unca.edu/centers',
    'router_path' => '',
    'link_title' => 'Centers',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
  );
  // Exported menu link: main-menu:http://www.unca.edu/life-campus
  $menu_links['main-menu:http://www.unca.edu/life-campus'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.unca.edu/life-campus',
    'router_path' => '',
    'link_title' => 'Life on Campus',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: main-menu:http://www.uncabulldogs.com/
  $menu_links['main-menu:http://www.uncabulldogs.com/'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://www.uncabulldogs.com/',
    'router_path' => '',
    'link_title' => 'Athletics',
    'options' => array(
      'attributes' => array(
        'target' => '_top',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-global-footer-menu:http://bulldogalert.unca.edu/
  $menu_links['menu-global-footer-menu:http://bulldogalert.unca.edu/'] = array(
    'menu_name' => 'menu-global-footer-menu',
    'link_path' => 'http://bulldogalert.unca.edu/',
    'router_path' => '',
    'link_title' => 'Emergency Information',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-global-footer-menu:http://hr.unca.edu/
  $menu_links['menu-global-footer-menu:http://hr.unca.edu/'] = array(
    'menu_name' => 'menu-global-footer-menu',
    'link_path' => 'http://hr.unca.edu/',
    'router_path' => '',
    'link_title' => 'Employment',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-global-footer-menu:http://www.unca.edu/a-z
  $menu_links['menu-global-footer-menu:http://www.unca.edu/a-z'] = array(
    'menu_name' => 'menu-global-footer-menu',
    'link_path' => 'http://www.unca.edu/a-z',
    'router_path' => '',
    'link_title' => 'A-Z Index',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-global-footer-menu:http://www.unca.edu/about-this-site
  $menu_links['menu-global-footer-menu:http://www.unca.edu/about-this-site'] = array(
    'menu_name' => 'menu-global-footer-menu',
    'link_path' => 'http://www.unca.edu/about-this-site',
    'router_path' => '',
    'link_title' => 'About this Site',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Exported menu link: menu-global-footer-menu:http://www.unca.edu/about/contact-us
  $menu_links['menu-global-footer-menu:http://www.unca.edu/about/contact-us'] = array(
    'menu_name' => 'menu-global-footer-menu',
    'link_path' => 'http://www.unca.edu/about/contact-us',
    'router_path' => '',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-global-footer-menu:http://www.unca.edu/giving
  $menu_links['menu-global-footer-menu:http://www.unca.edu/giving'] = array(
    'menu_name' => 'menu-global-footer-menu',
    'link_path' => 'http://www.unca.edu/giving',
    'router_path' => '',
    'link_title' => 'Giving',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-global-footer-menu:http://www.unca.edu/quick-links
  $menu_links['menu-global-footer-menu:http://www.unca.edu/quick-links'] = array(
    'menu_name' => 'menu-global-footer-menu',
    'link_path' => 'http://www.unca.edu/quick-links',
    'router_path' => '',
    'link_title' => 'Quick Links',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
  );
  // Exported menu link: menu-global-tools-menu:http://bullpup.lib.unca.edu/library/
  $menu_links['menu-global-tools-menu:http://bullpup.lib.unca.edu/library/'] = array(
    'menu_name' => 'menu-global-tools-menu',
    'link_path' => 'http://bullpup.lib.unca.edu/library/',
    'router_path' => '',
    'link_title' => 'Library',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
  );
  // Exported menu link: menu-global-tools-menu:http://calendar.unca.edu/
  $menu_links['menu-global-tools-menu:http://calendar.unca.edu/'] = array(
    'menu_name' => 'menu-global-tools-menu',
    'link_path' => 'http://calendar.unca.edu/',
    'router_path' => '',
    'link_title' => 'Calendar',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
  );
  // Exported menu link: menu-global-tools-menu:http://learnonline.unca.edu/
  $menu_links['menu-global-tools-menu:http://learnonline.unca.edu/'] = array(
    'menu_name' => 'menu-global-tools-menu',
    'link_path' => 'http://learnonline.unca.edu/',
    'router_path' => '',
    'link_title' => 'Moodle',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
  );
  // Exported menu link: menu-global-tools-menu:http://maps.unca.edu/
  $menu_links['menu-global-tools-menu:http://maps.unca.edu/'] = array(
    'menu_name' => 'menu-global-tools-menu',
    'link_path' => 'http://maps.unca.edu/',
    'router_path' => '',
    'link_title' => 'Maps',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
  );
  // Exported menu link: menu-global-tools-menu:http://oneport.unca.edu/
  $menu_links['menu-global-tools-menu:http://oneport.unca.edu/'] = array(
    'menu_name' => 'menu-global-tools-menu',
    'link_path' => 'http://oneport.unca.edu/',
    'router_path' => '',
    'link_title' => 'OnePort',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
  );
  // Exported menu link: menu-global-tools-menu:http://webmail.unca.edu/
  $menu_links['menu-global-tools-menu:http://webmail.unca.edu/'] = array(
    'menu_name' => 'menu-global-tools-menu',
    'link_path' => 'http://webmail.unca.edu/',
    'router_path' => '',
    'link_title' => 'Email',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A-Z Index');
  t('About');
  t('About this Site');
  t('Academics');
  t('Admissions');
  t('Athletics');
  t('Calendar');
  t('Centers');
  t('Contact Us');
  t('Email');
  t('Emergency Information');
  t('Employment');
  t('Giving');
  t('Home');
  t('Library');
  t('Life on Campus');
  t('Maps');
  t('Moodle');
  t('News & Events');
  t('OnePort');
  t('Quick Links');


  return $menu_links;
}
