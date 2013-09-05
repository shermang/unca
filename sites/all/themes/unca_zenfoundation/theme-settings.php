<?php
/**
 * Implements hook_form_system_theme_settings_alter().
 *
 * @param $form
 *   Nested array of form elements that comprise the form.
 * @param $form_state
 *   A keyed array containing the current state of the form.
 */
function unca_zenfoundation_form_system_theme_settings_alter(&$form, &$form_state, $form_id = NULL)  {
  // Work-around for a core bug affecting admin themes. See issue #943212.
  if (isset($form_id)) {
    return;
  }

  // Create the form using Forms API: http://api.drupal.org/api/7

  /* -- Delete this line if you want to use this setting
  $form['unca_zenfoundation_example'] = array(
    '#type'          => 'checkbox',
    '#title'         => t('UNCA Zen Foundation sample setting'),
    '#default_value' => theme_get_setting('unca_zenfoundation_example'),
    '#description'   => t("This option doesn't do anything; it's just an example."),
  );
  // */

  // Remove some of the base theme's settings.
  /* -- Delete this line if you want to turn off this setting.
  unset($form['themedev']['zen_wireframes']); // We don't need to toggle wireframes on this site.
  // */

  // We are editing the $form in place, so we don't need to return anything.

  if (!isset($form['unca_zenfoundation'])) {
    $form['unca_zenfoundation'] = array(
      '#type' => 'vertical_tabs',
      '#weight' => -10,
    );

    /*
     * General Settings.
     */
    $form['unca_zenfoundation']['general'] = array(
      '#type' => 'fieldset',
      '#title' => t('General Settings'),
    );

    $form['unca_zenfoundation']['general']['theme_settings'] = $form['theme_settings'];
    unset($form['theme_settings']);

    $form['unca_zenfoundation']['general']['logo'] = $form['logo'];
    unset($form['logo']);

    $form['unca_zenfoundation']['general']['favicon'] = $form['favicon'];
    unset($form['favicon']);

    /*
     * Foundation Top Bar.
     */
    $form['unca_zenfoundation']['topbar'] = array(
      '#type' => 'fieldset',
      '#title' => t('Foundation Top Bar'),
      '#description' => t('The Foundation Top Bar gives you a great way to display a complex navigation bar on small or large screens.'),
    );

    $form['unca_zenfoundation']['topbar']['unca_zenfoundation_top_bar_enable'] = array(
      '#type' => 'select',
      '#title' => t('Enable'),
      '#description' => t('If enabled, the site name and main menu will appear in a bar along the top of the page.'),
      '#options' => array(
        0 => t('Never'),
        1 => t('Always'),
        2 => t('Mobile only'),
      ),
      '#default_value' => theme_get_setting('unca_zenfoundation_top_bar_enable'),
    );

    // Group the rest of the settings in a container to be able to quickly hide
    // them if the Top Bar isn't being used.
    $form['unca_zenfoundation']['topbar']['container'] = array(
      '#type' => 'container',
      '#states' => array(
        'visible' => array(
          'select[name="unca_zenfoundation_top_bar_enable"]' => array('!value' => '0'),
        ),
      ),
    );

    $form['unca_zenfoundation']['topbar']['container']['unca_zenfoundation_top_bar_grid'] = array(
      '#type' => 'checkbox',
      '#title' => t('Contain to grid'),
      '#description' => t('Check this for your top bar to be set to your grid width.'),
      '#default_value' => theme_get_setting('unca_zenfoundation_top_bar_grid'),
    );

    $form['unca_zenfoundation']['topbar']['container']['unca_zenfoundation_top_bar_sticky'] = array(
      '#type' => 'checkbox',
      '#title' => t('Sticky'),
      '#description' => t('Check this for your top bar to stick to the top of the screen when the user scrolls down. If you\'re using the Admin Menu module and have it set to \'Keep menu at top of page\', you\'ll need to check this option to maintain compatibility.'),
      '#default_value' => theme_get_setting('unca_zenfoundation_top_bar_sticky'),
    );

    $form['unca_zenfoundation']['topbar']['container']['unca_zenfoundation_top_bar_scrolltop'] = array(
      '#type' => 'checkbox',
      '#title' => t('Scroll to top on click'),
      '#description' => t('Jump to top when sticky nav menu toggle is clicked.'),
      '#default_value' => theme_get_setting('unca_zenfoundation_top_bar_scrolltop'),
      '#states' => array(
        'visible' => array(
          'input[name="unca_zenfoundation_top_bar_sticky"]' => array('checked' => TRUE),
        ),
      ),
    );

    $form['unca_zenfoundation']['topbar']['container']['unca_zenfoundation_top_bar_is_hover'] = array(
      '#type' => 'checkbox',
      '#title' => t('Hover to expand menu'),
      '#description' => t('Set this to false to require the user to click to expand the dropdown menu.'),
      '#default_value' => theme_get_setting('unca_zenfoundation_top_bar_is_hover'),
    );

    // Menu settings.
    $form['unca_zenfoundation']['topbar']['container']['menu'] = array(
      '#type' => 'fieldset',
      '#title' => t('Dropdown Menu'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );

    $form['unca_zenfoundation']['topbar']['container']['menu']['unca_zenfoundation_top_bar_menu_text'] = array(
      '#type' => 'textfield',
      '#title' => t('Menu text'),
      '#description' => t('Specify text to go beside the mobile menu icon or leave blank for none.'),
      '#default_value' => theme_get_setting('unca_zenfoundation_top_bar_menu_text'),
    );

    $form['unca_zenfoundation']['topbar']['container']['menu']['unca_zenfoundation_top_bar_custom_back_text'] = array(
      '#type' => 'checkbox',
      '#title' => t('Enable custom back text'),
      '#description' => t('This is the text that appears to navigate back one level in the dropdown menu. Set this to false and it will pull the top level link name as the back text.'),
      '#default_value' => theme_get_setting('unca_zenfoundation_top_bar_custom_back_text'),
    );

    $form['unca_zenfoundation']['topbar']['container']['menu']['unca_zenfoundation_top_bar_back_text'] = array(
      '#type' => 'textfield',
      '#title' => t('Custom back text'),
      '#description' => t('Define what you want your custom back text to be.'),
      '#default_value' => theme_get_setting('unca_zenfoundation_top_bar_back_text'),
      '#states' => array(
        'visible' => array(
          'input[name="unca_zenfoundation_top_bar_custom_back_text"]' => array('checked' => TRUE),
        ),
      ),
    );

    /*
     * Tooltips.
     */
    $form['unca_zenfoundation']['tooltips'] = array(
      '#type' => 'fieldset',
      '#title' => t('Tooltips'),
      '#collapsible' => TRUE,
    );

    $form['unca_zenfoundation']['tooltips']['unca_zenfoundation_tooltip_enable'] = array(
      '#type' => 'checkbox',
      '#title' => t('Display form element descriptions in a tooltip'),
      '#default_value' => theme_get_setting('unca_zenfoundation_tooltip_enable'),
    );

    $form['unca_zenfoundation']['tooltips']['unca_zenfoundation_tooltip_position'] = array(
      '#type' => 'select',
      '#title' => t('Tooltip position'),
      '#options' => array(
        'tip-top' => t('Top'),
        'tip-bottom' => t('Bottom'),
        'tip-right' => t('Right'),
        'tip-left' => t('Left'),
      ),
      '#default_value' => theme_get_setting('unca_zenfoundation_tooltip_position'),
      '#states' => array(
        'visible' => array(
          'input[name="unca_zenfoundation_tooltip_enable"]' => array('checked' => TRUE),
        ),
      ),
    );

    $form['unca_zenfoundation']['tooltips']['unca_zenfoundation_tooltip_mode'] = array(
      '#type' => 'select',
      '#title' => t('Display mode'),
      '#description' => t('You can either display the tooltip on the form element itself or on a "More information?" link below the element.'),
      '#options' => array(
        'element' => t('On the form element'),
        'text' => t('Below element on "More information?" text'),
      ),
      '#default_value' => theme_get_setting('unca_zenfoundation_tooltip_mode'),
      '#states' => array(
        'visible' => array(
          'input[name="unca_zenfoundation_tooltip_enable"]' => array('checked' => TRUE),
        ),
      ),
    );

    $form['unca_zenfoundation']['tooltips']['unca_zenfoundation_tooltip_text'] = array(
      '#type' => 'textfield',
      '#title' => t('More information text'),
      '#description' => t('Customize the tooltip trigger text.'),
      '#default_value' => theme_get_setting('unca_zenfoundation_tooltip_text'),
      '#states' => array(
        'visible' => array(
          'input[name="unca_zenfoundation_tooltip_enable"]' => array('checked' => TRUE),
          'select[name="unca_zenfoundation_tooltip_mode"]' => array('value' => 'text'),
        ),
      ),
    );

    $form['unca_zenfoundation']['tooltips']['unca_zenfoundation_tooltip_touch'] = array(
      '#type' => 'checkbox',
      '#title' => t('Disable for touch devices'),
      '#description' => t('If you don\'t want tooltips to interfere with a touch event, you can disable them for those devices.'),
      '#default_value' => theme_get_setting('unca_zenfoundation_tooltip_touch'),
      '#states' => array(
        'visible' => array(
          'input[name="unca_zenfoundation_tooltip_enable"]' => array('checked' => TRUE),
        ),
      ),
    );

  }
}

