drush en --yes field_group field_permissions references admin_menu admin_menu_toolbar captcha ctools customerror date devel devel_themer draggableviews emfield entity_path feeds flickr gmap html_export image_caption imagecrop imce imce_wysiwyg insert_block job_scheduler jquery_update lightbox2 link location mcfilemanager media_viddler media_youtube node_export pathauto print profile2 recaptcha rules scanner scheduler sharethis taxonomy_menu taxonomy_menu_block token views views_bulk_operations views_data_export views_flipped_table views_ui views_slideshow weather webform wysiwyg wysiwyg_spellcheck features media date_api simplehtmldom entity file_entity media_internet uuid entity_token googleanalytics html_export context context_layouts context_ui ds ds_ui unca_global_header_and_footer unca_slideshow unca_department_navigation unca_home unca_profile unca_student_organization study_abroad unca_policy unca_event unca_cluster unca_course unca_campus_update unca_news unca_project unca_fields slideshow_entity unca_home_home_page unca_zenfoundation libraries flexslider entityreference references_dialog strongarm unca_slideshow unca_maps email unca_student_project unca_maps pathologic link_iframe_formatter_options unca_page unca_text_formats admin_views unca_site_admin_views menu_block unca_project_views unca_custom

drush dis --yes toolbar overlay securelogin
drush --nocolor updatedb --yes
drush vset theme_default unca_zenfoundation
drush fra --yes
drush --nocolor cc all
echo ""

echo "Done!"

