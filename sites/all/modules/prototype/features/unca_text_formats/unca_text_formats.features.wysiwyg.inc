<?php
/**
 * @file
 * unca_text_formats.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function unca_text_formats_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: filtered_html
  $profiles['filtered_html'] = array(
    'format' => 'filtered_html',
    'editor' => 'tinymce',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'theme' => 'advanced',
      'language' => 'en',
      'buttons' => array(
        'default' => array(
          'bold' => 1,
          'italic' => 1,
          'underline' => 1,
          'justifyright' => 1,
          'bullist' => 1,
          'numlist' => 1,
          'outdent' => 1,
          'indent' => 1,
          'undo' => 1,
          'redo' => 1,
          'link' => 1,
          'unlink' => 1,
          'anchor' => 1,
          'image' => 1,
          'cleanup' => 1,
          'styleselect' => 1,
          'fontselect' => 1,
          'fontsizeselect' => 1,
          'forecolor' => 1,
          'sup' => 1,
          'sub' => 1,
          'blockquote' => 1,
          'hr' => 1,
          'cut' => 1,
          'copy' => 1,
          'paste' => 1,
          'removeformat' => 1,
        ),
        'advimage' => array(
          'advimage' => 1,
        ),
        'contextmenu' => array(
          'contextmenu' => 1,
        ),
        'paste' => array(
          'pastetext' => 1,
        ),
        'table' => array(
          'tablecontrols' => 1,
        ),
        'imce' => array(
          'imce' => 1,
        ),
      ),
      'toolbar_loc' => 'top',
      'toolbar_align' => 'left',
      'path_loc' => 'bottom',
      'resizing' => 1,
      'verify_html' => 1,
      'preformatted' => 0,
      'convert_fonts_to_spans' => 1,
      'remove_linebreaks' => 1,
      'apply_source_formatting' => 1,
      'paste_auto_cleanup_on_paste' => 1,
      'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
      'css_setting' => 'self',
      'css_path' => 'themes/unca_zenfoundation/css/global.css, themes/unca_zenfoundation/css/page.tpl.css, themes/unca_zenfoundation/css/editor.css',
      'css_classes' => 'Notification=notification
Alert=alert
Critical Information=critical
Column=column
Drop Cap=dropcap
Float Left=left
Float Right=right
Checkmark SPIFF=footer-spiff-apply
Eye SPIFF=footer-spiff-tour
Question SPIFF=footer-spiff-question
Facebook SPIFF=footer-spiff-facebook
Email SPIFF=footer-spiff-mailinglist
Captioned Image=caption',
    ),
    'rdf_mapping' => array(),
  );

  // Exported profile: full_html
  $profiles['full_html'] = array(
    'format' => 'full_html',
    'editor' => 'tinymce',
    'settings' => FALSE,
    'rdf_mapping' => array(),
  );

  return $profiles;
}
