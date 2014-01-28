<?php
// settings needed for migrations.  This file should be deleted 
// once the migrations are complete

$databases['legacy']['default'] =
  array(
    'database' => 'drupal_'.$site,
    'username' => 'migrate',
    'password' => 'D459Sm425C86MGwr',
    'host' => 'cms.unca.edu',
    'port' => '',
    'driver' => 'mysql',
    'prefix' => '',
  );

$databases['taxonomy']['default'] =
  array(
    'database' => 'd7_unca',
    'username' => 'unca_drupal',
    'password' => 'HcGrUDFQTEsLnAmS',
    'host' => 'localhost',
    'port' => '',
    'driver' => 'mysql',
    'prefix' => '',
  );


$conf['migrate_files_source_dir'] =  'http://'.$site.'.unca.edu/sites/'.$site.'.unca.edu/files';

ini_set('allow_url_fopen',true);

