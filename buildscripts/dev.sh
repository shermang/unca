#!/bin/bash

# modules that we want enabled.
drush en --yes \
field_group \
field_permissions \
references \
admin_menu \
admin_menu_toolbar \
captcha \
ctools \
customerror \
date \
devel \
devel_themer \
draggableviews \
emfield \
entity_path \
feeds \
flickr \
gmap \
html_export \
image_caption \
imagecrop \
imce \
imce_wysiwyg \
insert_block \
job_scheduler \
jquery_update \
lightbox2 \
link \
location \
mcfilemanager \
media_viddler \
node_export \
pathauto \
print \
profile2 \
recaptcha \
rules \
scanner \
scheduler \
sharethis \
taxonomy_menu \
taxonomy_menu_block \
token \
viddler \
views \
views_bulk_operations \
views_data_export \
views_flipped_table \
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
unca_global_header_and_footer \
unca_slideshow \
unca_department_navigation \
unca_home \


# To disable modules, uncomment the following command and list the modules to disable
drush dis --yes \
# {module_name} \
toolbar \
securelogin

# perform any db queries required by code changes to modules from git pull
echo "Running any required database updates"
drush --nocolor updatedb --yes
echo ""

# clear the cache
echo "Clearing the drupal cache"
drush --nocolor cc all
echo ""

echo "Done!"

