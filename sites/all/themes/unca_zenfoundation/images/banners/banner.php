<?php

$custom_banner_dir = '../../../../../default/files/banner_images';
$directory = '../banners/'; // Must have trailing slash

if (file_exists($custom_banner_dir) && is_dir($custom_banner_dir)) {
  $files = scandir($custom_banner_dir);
  foreach ($files as $file) {
    $file_path = $custom_banner_dir . '/' . $file;
    $file_properties = getimagesize($file_path);
    if (is_array($file_properties)) {
      $directory = $custom_banner_dir . '/';
      break;
    }
  }
}

$accept = array('gif', 'png', 'jpg');
$deny = array('file1.jpg', 'file2.gif');

$files = scandir($directory);
$files = array_filter($files, 'filter_images');

function filter_images($image)
{
    global $accept, $deny;

    if (in_array($image, array_merge($deny, array('.', '..', '.htaccess', 'index.html'))))
    {
        // Remove, because we don't accept those files
    }

    $ext = substr(strrchr($image, '.'), 1);

    if (!in_array($ext, $accept))
    {
        // Remove, because its not an accepted extension
        return false;
    }

    // This image passed the tests
    return true;
}

$files = array_values($files);
$rand = mt_rand(0, count($files) - 1); // mt_rand(min, max);
$image = $directory . $files[$rand];

header('Content-type: ' . 'image/png' /* $mime */);
readfile($image);
