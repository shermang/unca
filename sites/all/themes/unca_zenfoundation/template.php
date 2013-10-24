<?php
/**
 * @file
 * Contains the theme's functions to manipulate Drupal's default markup.
 *
 * A QUICK OVERVIEW OF DRUPAL THEMING
 *
 *   The default HTML for all of Drupal's markup is specified by its modules.
 *   For example, the comment.module provides the default HTML markup and CSS
 *   styling that is wrapped around each comment. Fortunately, each piece of
 *   markup can optionally be overridden by the theme.
 *
 *   Drupal deals with each chunk of content using a "theme hook". The raw
 *   content is placed in PHP variables and passed through the theme hook, which
 *   can either be a template file (which you should already be familiary with)
 *   or a theme function. For example, the "comment" theme hook is implemented
 *   with a comment.tpl.php template file, but the "breadcrumb" theme hooks is
 *   implemented with a theme_breadcrumb() theme function. Regardless if the
 *   theme hook uses a template file or theme function, the template or function
 *   does the same kind of work; it takes the PHP variables passed to it and
 *   wraps the raw content with the desired HTML markup.
 *
 *   Most theme hooks are implemented with template files. Theme hooks that use
 *   theme functions do so for performance reasons - theme_field() is faster
 *   than a field.tpl.php - or for legacy reasons - theme_breadcrumb() has "been
 *   that way forever."
 *
 *   The variables used by theme functions or template files come from a handful
 *   of sources:
 *   - the contents of other theme hooks that have already been rendered into
 *     HTML. For example, the HTML from theme_breadcrumb() is put into the
 *     $breadcrumb variable of the page.tpl.php template file.
 *   - raw data provided directly by a module (often pulled from a database)
 *   - a "render element" provided directly by a module. A render element is a
 *     nested PHP array which contains both content and meta data with hints on
 *     how the content should be rendered. If a variable in a template file is a
 *     render element, it needs to be rendered with the render() function and
 *     then printed using:
 *       <?php print render($variable); ?>
 *
 * ABOUT THE TEMPLATE.PHP FILE
 *
 *   The template.php file is one of the most useful files when creating or
 *   modifying Drupal themes. With this file you can do three things:
 *   - Modify any theme hooks variables or add your own variables, using
 *     preprocess or process functions.
 *   - Override any theme function. That is, replace a module's default theme
 *     function with one you write.
 *   - Call hook_*_alter() functions which allow you to alter various parts of
 *     Drupal's internals, including the render elements in forms. The most
 *     useful of which include hook_form_alter(), hook_form_FORM_ID_alter(),
 *     and hook_page_alter(). See api.drupal.org for more information about
 *     _alter functions.
 *
 * OVERRIDING THEME FUNCTIONS
 *
 *   If a theme hook uses a theme function, Drupal will use the default theme
 *   function unless your theme overrides it. To override a theme function, you
 *   have to first find the theme function that generates the output. (The
 *   api.drupal.org website is a good place to find which file contains which
 *   function.) Then you can copy the original function in its entirety and
 *   paste it in this template.php file, changing the prefix from theme_ to
 *   unca_zenfoundation_. For example:
 *
 *     original, found in modules/field/field.module: theme_field()
 *     theme override, found in template.php: unca_zenfoundation_field()
 *
 *   where unca_zenfoundation is the name of your sub-theme. For example, the
 *   zen_classic theme would define a zen_classic_field() function.
 *
 *   Note that base themes can also override theme functions. And those
 *   overrides will be used by sub-themes unless the sub-theme chooses to
 *   override again.
 *
 *   Zen core only overrides one theme function. If you wish to override it, you
 *   should first look at how Zen core implements this function:
 *     theme_breadcrumbs()      in zen/template.php
 *
 *   For more information, please visit the Theme Developer's Guide on
 *   Drupal.org: http://drupal.org/node/173880
 *
 * CREATE OR MODIFY VARIABLES FOR YOUR THEME
 *
 *   Each tpl.php template file has several variables which hold various pieces
 *   of content. You can modify those variables (or add new ones) before they
 *   are used in the template files by using preprocess functions.
 *
 *   This makes THEME_preprocess_HOOK() functions the most powerful functions
 *   available to themers.
 *
 *   It works by having one preprocess function for each template file or its
 *   derivatives (called theme hook suggestions). For example:
 *     THEME_preprocess_page    alters the variables for page.tpl.php
 *     THEME_preprocess_node    alters the variables for node.tpl.php or
 *                              for node--forum.tpl.php
 *     THEME_preprocess_comment alters the variables for comment.tpl.php
 *     THEME_preprocess_block   alters the variables for block.tpl.php
 *
 *   For more information on preprocess functions and theme hook suggestions,
 *   please visit the Theme Developer's Guide on Drupal.org:
 *   http://drupal.org/node/223440 and http://drupal.org/node/1089656
 */


/**
 * Override or insert variables into the maintenance page template.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("maintenance_page" in this case.)
 */
/* -- Delete this line if you want to use this function
function unca_zenfoundation_preprocess_maintenance_page(&$variables, $hook) {
  // When a variable is manipulated or added in preprocess_html or
  // preprocess_page, that same work is probably needed for the maintenance page
  // as well, so we can just re-use those functions to do that work here.
  unca_zenfoundation_preprocess_html($variables, $hook);
  unca_zenfoundation_preprocess_page($variables, $hook);
}
// */

/**
 * Override or insert variables into the html templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("html" in this case.)
 */
function unca_zenfoundation_preprocess_html(&$variables, $hook) {
  //$variables['sample_variable'] = t('Lorem ipsum.');

  // The body tag's classes are controlled by the $classes_array variable. To
  // remove a class from $classes_array, use array_diff().
  //$variables['classes_array'] = array_diff($variables['classes_array'], array('class-to-remove'));


  // Foundation js required for mobile bar
  // @todo This should get turned into a proper library call
  drupal_add_js('sites/all/libraries/foundation/javascripts/foundation/foundation.js', array('scope' => 'footer', 'weight' => 15));
  drupal_add_js('sites/all/libraries/foundation/javascripts/foundation/foundation.topbar.js', array('scope' => 'footer', 'weight' => 16));
  // // above foundation scripts fired from our theme script footer
  drupal_add_js(path_to_theme() . '/js/script_footer.js', array('scope' => 'footer', 'weight' => 50));

  foreach ($variables['classes_array'] as $index => $class) {
    $class_arr = explode(' ', $class);
    $class_index = array_search('sidebar-first', $class_arr);
    if (!empty($class_index)) {
      unset($class_arr[$class_index]);
    }
    $variables['classes_array'][$index] = implode(' ', $class_arr);
  }

}

/**
 * Override or insert variables into the page templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("page" in this case.)
 */

function unca_zenfoundation_preprocess_page(&$variables, $hook) {

  $variables['is_unca_main'] = variable_get('unca_main_site', FALSE);
  
  $variables['sidebar_menu'] = unca_zenfoundation_sidebar_menu();
  $hp_sidebar_menu_tree = menu_tree_page_data('menu-home-page-secondary-navigat');
  $variables['hp_sidebar_menu'] = menu_tree_output($hp_sidebar_menu_tree);

  // Add layout classes

  // Add special classes for Gateway regions
  $gateway_layout_wrapper_classes = array('unca-gateway', 'clearfix');
  if (!$variables['page']['gateway_row_2_column_1']) {
    $gateway_layout_wrapper_classes[] = 'no-gateway-row-2-column-1';
  }
  if (!$variables['page']['gateway_row_2_column_2']) {
    $gateway_layout_wrapper_classes[] = 'no-gateway-row-2-column-2';
  }
  if (!$variables['page']['gateway_row_3_column_1']) {
    $gateway_layout_wrapper_classes[] = 'no-gateway-row-3-column-1';
  }
  if (!$variables['page']['gateway_row_3_column_2']) {
    $gateway_layout_wrapper_classes[] = 'no-gateway-row-3-column-2';
  }
  $variables['gateway_layout_wrapper_classes'] = implode(' ', $gateway_layout_wrapper_classes);

  // Add special classes for page regions
  $page_layout_wrapper_classes = array('unca-default','clearfix');

  if ($variables['page']['sidebar_first']) {
    $page_layout_wrapper_classes[] = 'has-sidebar';
  }
  if (!$variables['page']['content_row_2_column_1']) {
    $page_layout_wrapper_classes[] = 'no-content-row-2-column-1';
  }
  if (!$variables['page']['content_row_2_column_2']) {
    $page_layout_wrapper_classes[] = 'no-content-row-2-column-2';
  }
  if (!$variables['page']['footer_promo_a']) {
    $page_layout_wrapper_classes[] = 'no-footer-promo-a';
  }
  if (!$variables['page']['footer_promo_b']) {
    $page_layout_wrapper_classes[] = 'no-footer-promo-b';
  }
  if (!$variables['page']['footer_promo_large']) {
    $page_layout_wrapper_classes[] = 'no-footer-promo-large';
  }
  // Add special classes for home page
  if ($variables['is_front']) {
    $page_layout_wrapper_classes[] = 'unca-home';
  }

  $variables['page_layout_wrapper_classes'] = implode(' ', $page_layout_wrapper_classes);

  $variables['display_dept_name'] = variable_get('display_dept_name', TRUE);

  $secondary_menu = menu_tree_all_data('menu-secondary-navigation---prot');
  $secondary_menu = menu_tree_output($secondary_menu);
  $secondary_menu = unca_zenfoundation_topbar_menu($secondary_menu, array('class' => array('secondary-nav-mini')));
  $variables['secondary_menu'] = $secondary_menu;

  $utility_menu = menu_tree_all_data('menu-global-tools-menu');
  $utility_menu = menu_tree_output($utility_menu);
  $utility_menu = unca_zenfoundation_topbar_menu($utility_menu, array('class' => array('util-nav-mini')));
  $variables['utility_menu'] = $utility_menu;

  return $variables;

}
// */

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
/* -- Delete this line if you want to use this function
function unca_zenfoundation_preprocess_node(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');

  // Optionally, run node-type-specific preprocess functions, like
  // unca_zenfoundation_preprocess_node_page() or unca_zenfoundation_preprocess_node_story().
  $function = __FUNCTION__ . '_' . $variables['node']->type;
  if (function_exists($function)) {
    $function($variables, $hook);
  }
}
// */

/**
 * Override or insert variables into the comment templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("comment" in this case.)
 */
/* -- Delete this line if you want to use this function
function unca_zenfoundation_preprocess_comment(&$variables, $hook) {
  $variables['sample_variable'] = t('Lorem ipsum.');
}
// */

/**
 * Override or insert variables into the region templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("region" in this case.)
 */
function unca_zenfoundation_preprocess_region(&$variables, $hook) {
  // Don't use Zen's region--sidebar.tpl.php template for sidebars.
  //if (strpos($variables['region'], 'sidebar_') === 0) {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('region__sidebar'));
  //}

  // remove .column from region classes (a zen default)
  // if (in_array('column', $vars['classes_array'])) {
  //   $vars['classes_array'] = array_diff($vars['classes_array'], (array)'column');
  // }
}

/**
 * Override or insert variables into the block templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("block" in this case.)
 */
function unca_zenfoundation_preprocess_block(&$variables, $hook) {
  // Add block machine name to classes
  $variables['classes_array'][] = 'block-' . $variables['block']->module . '-' . $variables['block']->delta;
  if (($variables['block']->module == 'menu') && ($variables['block']->delta == 'menu-secondary-navigation---prot')) {
    $variables['classes_array'][] = 'navigation-secondary';
  }

  switch($variables['block']->region) {
    case 'content_row_1':
    case 'content_row_2_column_1':
    case 'content_row_2_column_2':
      $variables['title_attributes_array']['class'][] = 'section-heading';
      $variables['content_attributes'] = ' class="highlight-box"';
      break;
    case 'sidebar_first':
      $variables['classes_array'][] = 'right-spiff';
      break;
    default:
      $variables['content_attributes'] = '';
      break;
  }
  //
  // Examples provided by Zen
  //

  // Add a count to all the blocks in the region.
  // $variables['classes_array'][] = 'count-' . $variables['block_id'];

  // By default, Zen will use the block--no-wrapper.tpl.php for the main
  // content. This optional bit of code undoes that:
  //if ($variables['block_html_id'] == 'block-system-main') {
  //  $variables['theme_hook_suggestions'] = array_diff($variables['theme_hook_suggestions'], array('block__no_wrapper'));
  //}
}

/**
 * Programmatically generate the sidebar menu.
 */
function unca_zenfoundation_sidebar_menu() {
  $item = menu_get_object();
  if (isset($item->type)) {
    switch ($item->type) {
      case 'profiles':
        $parent_link = menu_link_get_preferred('faces', 'menu-secondary-navigation---prot');
        return unca_zenfoundation_sidebar_menu_links($parent_link['mlid']);
        break;

      case 'news_article':
        $parent_link = menu_link_get_preferred('news-events', 'menu-secondary-navigation---prot');
        return unca_zenfoundation_sidebar_menu_links($parent_link['mlid']);
        break;

      default:
        return unca_zenfoundation_sidebar_menu_links();
        break;
    }
  }
  else {
    return unca_zenfoundation_sidebar_menu_links();
  }
}

function unca_zenfoundation_sidebar_menu_links($parent_link_id = NULL) {
  $tree = menu_tree_page_data('menu-secondary-navigation---prot');

  if (!empty($parent_link_id)) {
    foreach($tree as $key => $mi) {
      if ($mi['link']['p1'] == $parent_link_id) {
        $menu = menu_tree_output($tree[$key]['below']);
      }
    }
  }
  else {
    foreach($tree as $key => $mi) {
      if ($mi['link']['in_active_trail'] && $tree[$key]['below']) {
        $menu = menu_tree_output($tree[$key]['below']);
      }
    }
  }
  if (isset($menu)){
    return $menu;
  }
  else {
    return NULL;
  }

}

/**
 * Implements theme_links() targeting the main menu specifically
 * Outputs Foundation Nav bar http://foundation.zurb.com/docs/navigation.php
 *
 * This should really be more render-array-y
 */
function unca_zenfoundation_links__system_main_menu($vars) {
  // Get all the main menu links
  $menu_links = menu_tree_output(menu_tree_all_data('main-menu'));

  // Initialize some variables to prevent errors
  $output = '';
  $sub_menu = '';

  foreach ($menu_links as $key => $link) {
    // Add special class needed for Foundation dropdown menu to work
    if (!empty($link['#below'])) {
      $link['#attributes']['class'][] = 'has-dropdown';
    }

    // Printing the actual menu item
    if (!empty($link['#href'])) {
      $output .= '<li' . drupal_attributes($link['#attributes']) . '>'
      . l(
        $link['#title'],
        $link['#href']
      );

      // Get sub navigation links if they exist
      foreach ($link['#below'] as $key => $sub_link) {
        // dpm($sub_menu);
        if (!empty($sub_link['#href'])) {
         $sub_menu .= '<li>'
         . l(
            $sub_link['#title'],
            $sub_link['#href']
          )
         . '</li>';
        }
      }
      $output .= !empty($link['#below']) ? '<ul class="dropdown">' . $sub_menu . '</ul>' : '';

      $output .=  '</li>';

    }

  }

  // Wrap the whole thing in a ul
  return '<ul' . drupal_attributes($vars['attributes']) . '>' . $output . '</ul>';

}

/**
 * Theme a copy of the secondary menu to place into the Foundation mobile topbar.
 */
function unca_zenfoundation_topbar_menu(&$menu_links, $attributes = array()) {
  // Initialize some variables to prevent errors
  $output = '';
  $sub_menu = '';

  foreach ($menu_links as $key => $link) {
    // Add special class needed for Foundation dropdown menu to work
    if (!empty($link['#below'])) {
      $link['#attributes']['class'][] = 'has-dropdown';
    }

    // Printing the actual menu item
    if (!empty($link['#href'])) {
      $output .= '<li' . drupal_attributes($link['#attributes']) . '>'
      . l(
        $link['#title'],
        $link['#href']
      );

      // Get sub navigation links if they exist
      foreach ($link['#below'] as $key => $sub_link) {
        if (!empty($sub_link['#href'])) {
         $sub_menu .= '<li>'
         . l(
            $sub_link['#title'],
            $sub_link['#href']
          )
         . '</li>';
        }
      }
      $output .= !empty($link['#below']) ? '<ul class="dropdown">' . $sub_menu . '</ul>' : '';

      $output .=  '</li>';

    }

  }

  // Wrap the whole thing in a ul
  return '<ul ' . drupal_attributes($attributes) . '>' . $output . '</ul>';
}
