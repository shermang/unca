drush en --yes advanced_help aggregator field_group field_permissions references admin_views captcha ctools customerror date devel devel_themer draggableviews entity_path feeds flickr gmap html_export image_caption imagecrop imce imce_wysiwyg insert_block job_scheduler jquery_update lightbox2 link location mcfilemanager media_viddler media_youtube menu_block node_export pathauto print profile2 recaptcha rules scanner scheduler sharethis taxonomy_menu taxonomy_menu_block toolbar token views views_bulk_operations views_data_export views_flipped_table views_ui views_slideshow weather webform wysiwyg wysiwyg_spellcheck features media date_api simplehtmldom entity file_entity media_internet uuid entity_token googleanalytics html_export context context_layouts context_ui ds ds_ui unca_global_header_and_footer unca_slideshow unca_department_navigation unca_home unca_profile unca_project_views unca_site_admin_views unca_student_organization study_abroad unca_policy unca_event unca_cluster unca_course unca_campus_update unca_news unca_project unca_fields slideshow_entity unca_home_home_page unca_zenfoundation libraries flexslider entityreference references_dialog strongarm unca_slideshow email unca_student_project unca_maps unca_map_views pathologic link_iframe_formatter_options unca_page unca_text_formats date_views unca_custom unca_departmental_update unca_image_styles unca_roles_permission

drush dis --yes admin_menu admin_menu_toolbar ldap_authentication ldap_user ldap_servers overlay securelogin
drush --nocolor updatedb --yes
drush vset theme_default unca_zenfoundation
drush --nocolor cc all
drush fra --yes
drush --nocolor cc all
echo ""

echo "Done!"

