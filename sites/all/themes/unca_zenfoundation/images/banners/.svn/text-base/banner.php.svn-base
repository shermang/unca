<?php
$directory = '../banners/'; // Must have trailing slash

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

//$finfo = finfo_open(FILEINFO_MIME);
//$mime = finfo_file($finfo, $image);
//finfo_close($finfo);

header('Content-type: ' . 'image/png' /* $mime */);
readfile($image);
?>