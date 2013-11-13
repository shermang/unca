#!/bin/bash

# modules that we want enabled.
drush en --yes \
advanced_help \
aggregator \
field_group \
field_permissions \
references \
admin_views \
captcha \
ctools \
customerror \
date \
devel \
draggableviews \
entity_path \
feeds \
flickr \
gmap \
gmap_location \
gmap_macro_builder \
gmap_taxonomy \
html_export \
image_caption \
imagecrop \
imce \
imce_wysiwyg \
insert_block \
job_scheduler \
jquery_update \
link \
location \
location_cck \
mcfilemanager \
media_viddler \
media_youtube \
menu_attributes \
menu_block \
node_export \
pathauto \
print \
profile2 \
recaptcha \
rules \
scheduler \
taxonomy_menu \
taxonomy_menu_block \
token \
toolbar \
views \
views_bulk_operations \
views_data_export \
views_flipped_table \
views_ui \
views_slideshow \
weather \
webform \
wysiwyg \
wysiwyg_spellcheck \
features \
media \
date_api \
simplehtmldom \
entity \
file_entity \
media_internet \
uuid \
entity_token \
googleanalytics \
ldap_authentication \
ldap_user \
ldap_servers \
html_export \
context \
context_layouts \
context_ui \
ds \
ds_ui \
unca_date_settings \
unca_global_header_and_footer \
unca_slideshow \
unca_department_navigation \
unca_home \
unca_profile \
unca_project_views \
unca_site_admin_views \
unca_student_organization \
study_abroad \
unca_policy \
unca_event \
unca_cluster \
unca_course \
unca_campus_update \
unca_news \
unca_project \
unca_fields \
unca_home_home_page \
unca_zenfoundation \
libraries \
flexslider \
entityreference \
references_dialog \
strongarm \
unca_slideshow \
email \
unca_student_project \
unca_maps \
unca_map_views \
pathologic \
link_iframe_formatter_options \
unca_page \
unca_text_formats \
date_views \
unca_custom \
unca_departmental_update \
unca_image_styles \
unca_roles_permission \
migrate \
migrate_ui \
date_migrate \
migrate_d2d \
migrate_d2d_unca \
addthis \

# To disable modules, uncomment the following command and list the modules to disable
drush dis --yes \
admin_menu \
admin_menu_toolbar \
overlay \
securelogin \
slideshow_entity \
lightbox2 \
sharethis \
scanner

# uninstall slideshow entity
echo "Uninstalling Slideshow Entity"
drush pm-uninstall slideshow_entity
echo ""

# uninstall slideshow entity
echo "Uninstalling Lightbox2"
drush pm-uninstall lightbox2
echo ""

# perform any db queries required by code changes to modules from git pull
echo "Running any required database updates"
drush --nocolor updatedb --yes
echo ""

# Set unca_zenfoundation as the active theme
echo "Setting unca_zenfoundation as the active theme"
drush vset theme_default unca_zenfoundation

# clear the cache
echo "Clearing the drupal cache"
drush --nocolor cc all
echo ""

# Revert all features
drush fra --yes

# clear the cache
echo "Clearing the drupal cache"
drush --nocolor cc all

echo ""
echo "Done!"

