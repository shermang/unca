<?php
/**
 * @file
 * unca_roles_permission.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function unca_roles_permission_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access all webform results'.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access devel information'.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: 'access mcfilemanager files'.
  $permissions['access mcfilemanager files'] = array(
    'name' => 'access mcfilemanager files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mcfilemanager',
  );

  // Exported permission: 'access news feeds'.
  $permissions['access news feeds'] = array(
    'name' => 'access news feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: 'access own webform results'.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access own webform submissions'.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access weather pages'.
  $permissions['access weather pages'] = array(
    'name' => 'access weather pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'weather',
  );

  // Exported permission: 'add media from remote sources'.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer CAPTCHA settings'.
  $permissions['administer CAPTCHA settings'] = array(
    'name' => 'administer CAPTCHA settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer addthis'.
  $permissions['administer addthis'] = array(
    'name' => 'administer addthis',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'addthis',
  );

  // Exported permission: 'administer advanced addthis'.
  $permissions['administer advanced addthis'] = array(
    'name' => 'administer advanced addthis',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'addthis',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer contexts'.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'administer custom weather block'.
  $permissions['administer custom weather block'] = array(
    'name' => 'administer custom weather block',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'weather',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer field collections'.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer flickr'.
  $permissions['administer flickr'] = array(
    'name' => 'administer flickr',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'flickr',
  );

  // Exported permission: 'administer google analytics'.
  $permissions['administer google analytics'] = array(
    'name' => 'administer google analytics',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imagecrop'.
  $permissions['administer imagecrop'] = array(
    'name' => 'administer imagecrop',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'imagecrop',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer mcfilemanager'.
  $permissions['administer mcfilemanager'] = array(
    'name' => 'administer mcfilemanager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mcfilemanager',
  );

  // Exported permission: 'administer media'.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer news feeds'.
  $permissions['administer news feeds'] = array(
    'name' => 'administer news feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'aggregator',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer recaptcha'.
  $permissions['administer recaptcha'] = array(
    'name' => 'administer recaptcha',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'recaptcha',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(),
    'module' => 'rules',
  );

  // Exported permission: 'administer scanner settings'.
  $permissions['administer scanner settings'] = array(
    'name' => 'administer scanner settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scanner',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'advanced migration information'.
  $permissions['advanced migration information'] = array(
    'name' => 'advanced migration information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'migrate',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(),
    'module' => 'user',
  );

  // Exported permission: 'context ajax block access'.
  $permissions['context ajax block access'] = array(
    'name' => 'context ajax block access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: 'create campus_update content'.
  $permissions['create campus_update content'] = array(
    'name' => 'create campus_update content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create cluster content'.
  $permissions['create cluster content'] = array(
    'name' => 'create cluster content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create course content'.
  $permissions['create course content'] = array(
    'name' => 'create course content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dept_update content'.
  $permissions['create dept_update content'] = array(
    'name' => 'create dept_update content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create destination content'.
  $permissions['create destination content'] = array(
    'name' => 'create destination content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_iframe'.
  $permissions['create field_iframe'] = array(
    'name' => 'create field_iframe',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create gmap macro'.
  $permissions['create gmap macro'] = array(
    'name' => 'create gmap macro',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gmap_macro_builder',
  );

  // Exported permission: 'create map_item content'.
  $permissions['create map_item content'] = array(
    'name' => 'create map_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create news_article content'.
  $permissions['create news_article content'] = array(
    'name' => 'create news_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create policy content'.
  $permissions['create policy content'] = array(
    'name' => 'create policy content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create profiles content'.
  $permissions['create profiles content'] = array(
    'name' => 'create profiles content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create project content'.
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create slideshow_item content'.
  $permissions['create slideshow_item content'] = array(
    'name' => 'create slideshow_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create student_organization content'.
  $permissions['create student_organization content'] = array(
    'name' => 'create student_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create student_project content'.
  $permissions['create student_project content'] = array(
    'name' => 'create student_project content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'create webform content'.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'crop any image'.
  $permissions['crop any image'] = array(
    'name' => 'crop any image',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'imagecrop',
  );

  // Exported permission: 'crop own images'.
  $permissions['crop own images'] = array(
    'name' => 'crop own images',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'imagecrop',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete all webform submissions'.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete any campus_update content'.
  $permissions['delete any campus_update content'] = array(
    'name' => 'delete any campus_update content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any cluster content'.
  $permissions['delete any cluster content'] = array(
    'name' => 'delete any cluster content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any course content'.
  $permissions['delete any course content'] = array(
    'name' => 'delete any course content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dept_update content'.
  $permissions['delete any dept_update content'] = array(
    'name' => 'delete any dept_update content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any destination content'.
  $permissions['delete any destination content'] = array(
    'name' => 'delete any destination content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any map_item content'.
  $permissions['delete any map_item content'] = array(
    'name' => 'delete any map_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any news_article content'.
  $permissions['delete any news_article content'] = array(
    'name' => 'delete any news_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any policy content'.
  $permissions['delete any policy content'] = array(
    'name' => 'delete any policy content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any profiles content'.
  $permissions['delete any profiles content'] = array(
    'name' => 'delete any profiles content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any project content'.
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any slideshow_item content'.
  $permissions['delete any slideshow_item content'] = array(
    'name' => 'delete any slideshow_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any student_organization content'.
  $permissions['delete any student_organization content'] = array(
    'name' => 'delete any student_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any student_project content'.
  $permissions['delete any student_project content'] = array(
    'name' => 'delete any student_project content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any webform content'.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own campus_update content'.
  $permissions['delete own campus_update content'] = array(
    'name' => 'delete own campus_update content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own cluster content'.
  $permissions['delete own cluster content'] = array(
    'name' => 'delete own cluster content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own course content'.
  $permissions['delete own course content'] = array(
    'name' => 'delete own course content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dept_update content'.
  $permissions['delete own dept_update content'] = array(
    'name' => 'delete own dept_update content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own destination content'.
  $permissions['delete own destination content'] = array(
    'name' => 'delete own destination content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own map_item content'.
  $permissions['delete own map_item content'] = array(
    'name' => 'delete own map_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own news_article content'.
  $permissions['delete own news_article content'] = array(
    'name' => 'delete own news_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own policy content'.
  $permissions['delete own policy content'] = array(
    'name' => 'delete own policy content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own profiles content'.
  $permissions['delete own profiles content'] = array(
    'name' => 'delete own profiles content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own project content'.
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own slideshow_item content'.
  $permissions['delete own slideshow_item content'] = array(
    'name' => 'delete own slideshow_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own student_organization content'.
  $permissions['delete own student_organization content'] = array(
    'name' => 'delete own student_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own student_project content'.
  $permissions['delete own student_project content'] = array(
    'name' => 'delete own student_project content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform content'.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own webform submissions'.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in course_catalogs'.
  $permissions['delete terms in course_catalogs'] = array(
    'name' => 'delete terms in course_catalogs',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in course_days'.
  $permissions['delete terms in course_days'] = array(
    'name' => 'delete terms in course_days',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in course_times'.
  $permissions['delete terms in course_times'] = array(
    'name' => 'delete terms in course_times',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in course_topic'.
  $permissions['delete terms in course_topic'] = array(
    'name' => 'delete terms in course_topic',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in department'.
  $permissions['delete terms in department'] = array(
    'name' => 'delete terms in department',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in event_categories'.
  $permissions['delete terms in event_categories'] = array(
    'name' => 'delete terms in event_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in event_type'.
  $permissions['delete terms in event_type'] = array(
    'name' => 'delete terms in event_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in groups_policies_apply_to'.
  $permissions['delete terms in groups_policies_apply_to'] = array(
    'name' => 'delete terms in groups_policies_apply_to',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in humanities_level'.
  $permissions['delete terms in humanities_level'] = array(
    'name' => 'delete terms in humanities_level',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in location_type'.
  $permissions['delete terms in location_type'] = array(
    'name' => 'delete terms in location_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in news_and_event_type'.
  $permissions['delete terms in news_and_event_type'] = array(
    'name' => 'delete terms in news_and_event_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in news_and_events_categories'.
  $permissions['delete terms in news_and_events_categories'] = array(
    'name' => 'delete terms in news_and_events_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in news_category'.
  $permissions['delete terms in news_category'] = array(
    'name' => 'delete terms in news_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in page_layout'.
  $permissions['delete terms in page_layout'] = array(
    'name' => 'delete terms in page_layout',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in policy_categories'.
  $permissions['delete terms in policy_categories'] = array(
    'name' => 'delete terms in policy_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in policy_owner'.
  $permissions['delete terms in policy_owner'] = array(
    'name' => 'delete terms in policy_owner',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in program_types'.
  $permissions['delete terms in program_types'] = array(
    'name' => 'delete terms in program_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in project_type'.
  $permissions['delete terms in project_type'] = array(
    'name' => 'delete terms in project_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in region'.
  $permissions['delete terms in region'] = array(
    'name' => 'delete terms in region',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in responsible_office'.
  $permissions['delete terms in responsible_office'] = array(
    'name' => 'delete terms in responsible_office',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in slideshows'.
  $permissions['delete terms in slideshows'] = array(
    'name' => 'delete terms in slideshows',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in student_organization'.
  $permissions['delete terms in student_organization'] = array(
    'name' => 'delete terms in student_organization',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in university_semester'.
  $permissions['delete terms in university_semester'] = array(
    'name' => 'delete terms in university_semester',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'edit all webform submissions'.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit any campus_update content'.
  $permissions['edit any campus_update content'] = array(
    'name' => 'edit any campus_update content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any cluster content'.
  $permissions['edit any cluster content'] = array(
    'name' => 'edit any cluster content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any course content'.
  $permissions['edit any course content'] = array(
    'name' => 'edit any course content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dept_update content'.
  $permissions['edit any dept_update content'] = array(
    'name' => 'edit any dept_update content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any destination content'.
  $permissions['edit any destination content'] = array(
    'name' => 'edit any destination content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any main profile'.
  $permissions['edit any main profile'] = array(
    'name' => 'edit any main profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any map_item content'.
  $permissions['edit any map_item content'] = array(
    'name' => 'edit any map_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any news_article content'.
  $permissions['edit any news_article content'] = array(
    'name' => 'edit any news_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any policy content'.
  $permissions['edit any policy content'] = array(
    'name' => 'edit any policy content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any profiles content'.
  $permissions['edit any profiles content'] = array(
    'name' => 'edit any profiles content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any project content'.
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any slideshow_item content'.
  $permissions['edit any slideshow_item content'] = array(
    'name' => 'edit any slideshow_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any student_organization content'.
  $permissions['edit any student_organization content'] = array(
    'name' => 'edit any student_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any student_project content'.
  $permissions['edit any student_project content'] = array(
    'name' => 'edit any student_project content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any webform content'.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_iframe'.
  $permissions['edit field_iframe'] = array(
    'name' => 'edit field_iframe',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit media'.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'edit own campus_update content'.
  $permissions['edit own campus_update content'] = array(
    'name' => 'edit own campus_update content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own cluster content'.
  $permissions['edit own cluster content'] = array(
    'name' => 'edit own cluster content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own course content'.
  $permissions['edit own course content'] = array(
    'name' => 'edit own course content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dept_update content'.
  $permissions['edit own dept_update content'] = array(
    'name' => 'edit own dept_update content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own destination content'.
  $permissions['edit own destination content'] = array(
    'name' => 'edit own destination content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_iframe'.
  $permissions['edit own field_iframe'] = array(
    'name' => 'edit own field_iframe',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own main profile'.
  $permissions['edit own main profile'] = array(
    'name' => 'edit own main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own map_item content'.
  $permissions['edit own map_item content'] = array(
    'name' => 'edit own map_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own news_article content'.
  $permissions['edit own news_article content'] = array(
    'name' => 'edit own news_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own policy content'.
  $permissions['edit own policy content'] = array(
    'name' => 'edit own policy content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own profiles content'.
  $permissions['edit own profiles content'] = array(
    'name' => 'edit own profiles content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own project content'.
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own slideshow_item content'.
  $permissions['edit own slideshow_item content'] = array(
    'name' => 'edit own slideshow_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own student_organization content'.
  $permissions['edit own student_organization content'] = array(
    'name' => 'edit own student_organization content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own student_project content'.
  $permissions['edit own student_project content'] = array(
    'name' => 'edit own student_project content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform content'.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own webform submissions'.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: 'edit terms in course_catalogs'.
  $permissions['edit terms in course_catalogs'] = array(
    'name' => 'edit terms in course_catalogs',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in course_days'.
  $permissions['edit terms in course_days'] = array(
    'name' => 'edit terms in course_days',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in course_times'.
  $permissions['edit terms in course_times'] = array(
    'name' => 'edit terms in course_times',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in course_topic'.
  $permissions['edit terms in course_topic'] = array(
    'name' => 'edit terms in course_topic',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in department'.
  $permissions['edit terms in department'] = array(
    'name' => 'edit terms in department',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in event_categories'.
  $permissions['edit terms in event_categories'] = array(
    'name' => 'edit terms in event_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in event_type'.
  $permissions['edit terms in event_type'] = array(
    'name' => 'edit terms in event_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in groups_policies_apply_to'.
  $permissions['edit terms in groups_policies_apply_to'] = array(
    'name' => 'edit terms in groups_policies_apply_to',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in humanities_level'.
  $permissions['edit terms in humanities_level'] = array(
    'name' => 'edit terms in humanities_level',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in location_type'.
  $permissions['edit terms in location_type'] = array(
    'name' => 'edit terms in location_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in news_and_event_type'.
  $permissions['edit terms in news_and_event_type'] = array(
    'name' => 'edit terms in news_and_event_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in news_and_events_categories'.
  $permissions['edit terms in news_and_events_categories'] = array(
    'name' => 'edit terms in news_and_events_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in news_category'.
  $permissions['edit terms in news_category'] = array(
    'name' => 'edit terms in news_category',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in page_layout'.
  $permissions['edit terms in page_layout'] = array(
    'name' => 'edit terms in page_layout',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in policy_categories'.
  $permissions['edit terms in policy_categories'] = array(
    'name' => 'edit terms in policy_categories',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in policy_owner'.
  $permissions['edit terms in policy_owner'] = array(
    'name' => 'edit terms in policy_owner',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in program_types'.
  $permissions['edit terms in program_types'] = array(
    'name' => 'edit terms in program_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in project_type'.
  $permissions['edit terms in project_type'] = array(
    'name' => 'edit terms in project_type',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in region'.
  $permissions['edit terms in region'] = array(
    'name' => 'edit terms in region',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in responsible_office'.
  $permissions['edit terms in responsible_office'] = array(
    'name' => 'edit terms in responsible_office',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in slideshows'.
  $permissions['edit terms in slideshows'] = array(
    'name' => 'edit terms in slideshows',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in student_organization'.
  $permissions['edit terms in student_organization'] = array(
    'name' => 'edit terms in student_organization',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in university_semester'.
  $permissions['edit terms in university_semester'] = array(
    'name' => 'edit terms in university_semester',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'execute php code'.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'export nodes'.
  $permissions['export nodes'] = array(
    'name' => 'export nodes',
    'roles' => array(),
    'module' => 'node_export',
  );

  // Exported permission: 'export own nodes'.
  $permissions['export own nodes'] = array(
    'name' => 'export own nodes',
    'roles' => array(),
    'module' => 'node_export',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'import media'.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(),
    'module' => 'features',
  );

  // Exported permission: 'migration information'.
  $permissions['migration information'] = array(
    'name' => 'migration information',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'migrate',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'opt-in or out of tracking'.
  $permissions['opt-in or out of tracking'] = array(
    'name' => 'opt-in or out of tracking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'perform search and replace'.
  $permissions['perform search and replace'] = array(
    'name' => 'perform search and replace',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scanner',
  );

  // Exported permission: 'publish any campus_update content'.
  $permissions['publish any campus_update content'] = array(
    'name' => 'publish any campus_update content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any cluster content'.
  $permissions['publish any cluster content'] = array(
    'name' => 'publish any cluster content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any content'.
  $permissions['publish any content'] = array(
    'name' => 'publish any content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any course content'.
  $permissions['publish any course content'] = array(
    'name' => 'publish any course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any dept_update content'.
  $permissions['publish any dept_update content'] = array(
    'name' => 'publish any dept_update content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any destination content'.
  $permissions['publish any destination content'] = array(
    'name' => 'publish any destination content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any event content'.
  $permissions['publish any event content'] = array(
    'name' => 'publish any event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any map_item content'.
  $permissions['publish any map_item content'] = array(
    'name' => 'publish any map_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any news_article content'.
  $permissions['publish any news_article content'] = array(
    'name' => 'publish any news_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any page content'.
  $permissions['publish any page content'] = array(
    'name' => 'publish any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any policy content'.
  $permissions['publish any policy content'] = array(
    'name' => 'publish any policy content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any profiles content'.
  $permissions['publish any profiles content'] = array(
    'name' => 'publish any profiles content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any project content'.
  $permissions['publish any project content'] = array(
    'name' => 'publish any project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any slideshow_item content'.
  $permissions['publish any slideshow_item content'] = array(
    'name' => 'publish any slideshow_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any student_organization content'.
  $permissions['publish any student_organization content'] = array(
    'name' => 'publish any student_organization content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any student_project content'.
  $permissions['publish any student_project content'] = array(
    'name' => 'publish any student_project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish any webform content'.
  $permissions['publish any webform content'] = array(
    'name' => 'publish any webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish blocks'.
  $permissions['publish blocks'] = array(
    'name' => 'publish blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'sharedblocks',
  );

  // Exported permission: 'publish editable campus_update content'.
  $permissions['publish editable campus_update content'] = array(
    'name' => 'publish editable campus_update content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable cluster content'.
  $permissions['publish editable cluster content'] = array(
    'name' => 'publish editable cluster content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable content'.
  $permissions['publish editable content'] = array(
    'name' => 'publish editable content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable course content'.
  $permissions['publish editable course content'] = array(
    'name' => 'publish editable course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable dept_update content'.
  $permissions['publish editable dept_update content'] = array(
    'name' => 'publish editable dept_update content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable destination content'.
  $permissions['publish editable destination content'] = array(
    'name' => 'publish editable destination content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable event content'.
  $permissions['publish editable event content'] = array(
    'name' => 'publish editable event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable map_item content'.
  $permissions['publish editable map_item content'] = array(
    'name' => 'publish editable map_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable news_article content'.
  $permissions['publish editable news_article content'] = array(
    'name' => 'publish editable news_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable page content'.
  $permissions['publish editable page content'] = array(
    'name' => 'publish editable page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable policy content'.
  $permissions['publish editable policy content'] = array(
    'name' => 'publish editable policy content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable profiles content'.
  $permissions['publish editable profiles content'] = array(
    'name' => 'publish editable profiles content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable project content'.
  $permissions['publish editable project content'] = array(
    'name' => 'publish editable project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable slideshow_item content'.
  $permissions['publish editable slideshow_item content'] = array(
    'name' => 'publish editable slideshow_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable student_organization content'.
  $permissions['publish editable student_organization content'] = array(
    'name' => 'publish editable student_organization content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable student_project content'.
  $permissions['publish editable student_project content'] = array(
    'name' => 'publish editable student_project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable webform content'.
  $permissions['publish editable webform content'] = array(
    'name' => 'publish editable webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own campus_update content'.
  $permissions['publish own campus_update content'] = array(
    'name' => 'publish own campus_update content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own cluster content'.
  $permissions['publish own cluster content'] = array(
    'name' => 'publish own cluster content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own course content'.
  $permissions['publish own course content'] = array(
    'name' => 'publish own course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own dept_update content'.
  $permissions['publish own dept_update content'] = array(
    'name' => 'publish own dept_update content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own destination content'.
  $permissions['publish own destination content'] = array(
    'name' => 'publish own destination content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own event content'.
  $permissions['publish own event content'] = array(
    'name' => 'publish own event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own map_item content'.
  $permissions['publish own map_item content'] = array(
    'name' => 'publish own map_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own news_article content'.
  $permissions['publish own news_article content'] = array(
    'name' => 'publish own news_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own page content'.
  $permissions['publish own page content'] = array(
    'name' => 'publish own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own policy content'.
  $permissions['publish own policy content'] = array(
    'name' => 'publish own policy content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own profiles content'.
  $permissions['publish own profiles content'] = array(
    'name' => 'publish own profiles content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own project content'.
  $permissions['publish own project content'] = array(
    'name' => 'publish own project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own slideshow_item content'.
  $permissions['publish own slideshow_item content'] = array(
    'name' => 'publish own slideshow_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own student_organization content'.
  $permissions['publish own student_organization content'] = array(
    'name' => 'publish own student_organization content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own student_project content'.
  $permissions['publish own student_project content'] = array(
    'name' => 'publish own student_project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own webform content'.
  $permissions['publish own webform content'] = array(
    'name' => 'publish own webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'search Google CSE'.
  $permissions['search Google CSE'] = array(
    'name' => 'search Google CSE',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'google_cse',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'skip CAPTCHA'.
  $permissions['skip CAPTCHA'] = array(
    'name' => 'skip CAPTCHA',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'captcha',
  );

  // Exported permission: 'submit latitude/longitude'.
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: 'subscribe to blocks'.
  $permissions['subscribe to blocks'] = array(
    'name' => 'subscribe to blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'sharedblocks',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'switch users'.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'devel',
  );

  // Exported permission: 'unpublish any campus_update content'.
  $permissions['unpublish any campus_update content'] = array(
    'name' => 'unpublish any campus_update content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any cluster content'.
  $permissions['unpublish any cluster content'] = array(
    'name' => 'unpublish any cluster content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any content'.
  $permissions['unpublish any content'] = array(
    'name' => 'unpublish any content',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any course content'.
  $permissions['unpublish any course content'] = array(
    'name' => 'unpublish any course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any dept_update content'.
  $permissions['unpublish any dept_update content'] = array(
    'name' => 'unpublish any dept_update content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any destination content'.
  $permissions['unpublish any destination content'] = array(
    'name' => 'unpublish any destination content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any event content'.
  $permissions['unpublish any event content'] = array(
    'name' => 'unpublish any event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any map_item content'.
  $permissions['unpublish any map_item content'] = array(
    'name' => 'unpublish any map_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any news_article content'.
  $permissions['unpublish any news_article content'] = array(
    'name' => 'unpublish any news_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any page content'.
  $permissions['unpublish any page content'] = array(
    'name' => 'unpublish any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any policy content'.
  $permissions['unpublish any policy content'] = array(
    'name' => 'unpublish any policy content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any profiles content'.
  $permissions['unpublish any profiles content'] = array(
    'name' => 'unpublish any profiles content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any project content'.
  $permissions['unpublish any project content'] = array(
    'name' => 'unpublish any project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any slideshow_item content'.
  $permissions['unpublish any slideshow_item content'] = array(
    'name' => 'unpublish any slideshow_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any student_organization content'.
  $permissions['unpublish any student_organization content'] = array(
    'name' => 'unpublish any student_organization content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any student_project content'.
  $permissions['unpublish any student_project content'] = array(
    'name' => 'unpublish any student_project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any webform content'.
  $permissions['unpublish any webform content'] = array(
    'name' => 'unpublish any webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable campus_update content'.
  $permissions['unpublish editable campus_update content'] = array(
    'name' => 'unpublish editable campus_update content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable cluster content'.
  $permissions['unpublish editable cluster content'] = array(
    'name' => 'unpublish editable cluster content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable content'.
  $permissions['unpublish editable content'] = array(
    'name' => 'unpublish editable content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable course content'.
  $permissions['unpublish editable course content'] = array(
    'name' => 'unpublish editable course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable dept_update content'.
  $permissions['unpublish editable dept_update content'] = array(
    'name' => 'unpublish editable dept_update content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable destination content'.
  $permissions['unpublish editable destination content'] = array(
    'name' => 'unpublish editable destination content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable event content'.
  $permissions['unpublish editable event content'] = array(
    'name' => 'unpublish editable event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable map_item content'.
  $permissions['unpublish editable map_item content'] = array(
    'name' => 'unpublish editable map_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable news_article content'.
  $permissions['unpublish editable news_article content'] = array(
    'name' => 'unpublish editable news_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable page content'.
  $permissions['unpublish editable page content'] = array(
    'name' => 'unpublish editable page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable policy content'.
  $permissions['unpublish editable policy content'] = array(
    'name' => 'unpublish editable policy content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable profiles content'.
  $permissions['unpublish editable profiles content'] = array(
    'name' => 'unpublish editable profiles content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable project content'.
  $permissions['unpublish editable project content'] = array(
    'name' => 'unpublish editable project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable slideshow_item content'.
  $permissions['unpublish editable slideshow_item content'] = array(
    'name' => 'unpublish editable slideshow_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable student_organization content'.
  $permissions['unpublish editable student_organization content'] = array(
    'name' => 'unpublish editable student_organization content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable student_project content'.
  $permissions['unpublish editable student_project content'] = array(
    'name' => 'unpublish editable student_project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable webform content'.
  $permissions['unpublish editable webform content'] = array(
    'name' => 'unpublish editable webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own campus_update content'.
  $permissions['unpublish own campus_update content'] = array(
    'name' => 'unpublish own campus_update content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own cluster content'.
  $permissions['unpublish own cluster content'] = array(
    'name' => 'unpublish own cluster content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own course content'.
  $permissions['unpublish own course content'] = array(
    'name' => 'unpublish own course content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own dept_update content'.
  $permissions['unpublish own dept_update content'] = array(
    'name' => 'unpublish own dept_update content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own destination content'.
  $permissions['unpublish own destination content'] = array(
    'name' => 'unpublish own destination content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own event content'.
  $permissions['unpublish own event content'] = array(
    'name' => 'unpublish own event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own map_item content'.
  $permissions['unpublish own map_item content'] = array(
    'name' => 'unpublish own map_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own news_article content'.
  $permissions['unpublish own news_article content'] = array(
    'name' => 'unpublish own news_article content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own page content'.
  $permissions['unpublish own page content'] = array(
    'name' => 'unpublish own page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own policy content'.
  $permissions['unpublish own policy content'] = array(
    'name' => 'unpublish own policy content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own profiles content'.
  $permissions['unpublish own profiles content'] = array(
    'name' => 'unpublish own profiles content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own project content'.
  $permissions['unpublish own project content'] = array(
    'name' => 'unpublish own project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own slideshow_item content'.
  $permissions['unpublish own slideshow_item content'] = array(
    'name' => 'unpublish own slideshow_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own student_organization content'.
  $permissions['unpublish own student_organization content'] = array(
    'name' => 'unpublish own student_organization content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own student_project content'.
  $permissions['unpublish own student_project content'] = array(
    'name' => 'unpublish own student_project content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own webform content'.
  $permissions['unpublish own webform content'] = array(
    'name' => 'unpublish own webform content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'use PHP for title patterns'.
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'auto_nodetitle',
  );

  // Exported permission: 'use PHP for tracking visibility'.
  $permissions['use PHP for tracking visibility'] = array(
    'name' => 'use PHP for tracking visibility',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'googleanalytics',
  );

  // Exported permission: 'use PHP to import nodes'.
  $permissions['use PHP to import nodes'] = array(
    'name' => 'use PHP to import nodes',
    'roles' => array(),
    'module' => 'node_export',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use text format code'.
  $permissions['use text format code'] = array(
    'name' => 'use text format code',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view advanced help index'.
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view advanced help popup'.
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view advanced help topic'.
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view all flickr photos'.
  $permissions['view all flickr photos'] = array(
    'name' => 'view all flickr photos',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'flickr',
  );

  // Exported permission: 'view any main profile'.
  $permissions['view any main profile'] = array(
    'name' => 'view any main profile',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view location directory'.
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view media'.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: 'view node location table'.
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view node map'.
  $permissions['view node map'] = array(
    'name' => 'view node map',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: 'view own field_iframe'.
  $permissions['view own field_iframe'] = array(
    'name' => 'view own field_iframe',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own flickr photos'.
  $permissions['view own flickr photos'] = array(
    'name' => 'view own flickr photos',
    'roles' => array(
      'administrator' => 'administrator',
      'content manager' => 'content manager',
    ),
    'module' => 'flickr',
  );

  // Exported permission: 'view own main profile'.
  $permissions['view own main profile'] = array(
    'name' => 'view own main profile',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view user location details'.
  $permissions['view user location details'] = array(
    'name' => 'view user location details',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: 'view user location table'.
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view user map'.
  $permissions['view user map'] = array(
    'name' => 'view user map',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'gmap_location',
  );

  return $permissions;
}
