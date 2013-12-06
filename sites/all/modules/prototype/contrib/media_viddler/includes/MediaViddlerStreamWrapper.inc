<?php

class MediaViddlerStreamWrapper extends MediaReadOnlyStreamWrapper {
  protected $base_url = 'http://www.viddler.com/';

  function interpolateUrl() {
    return $this->base_url . $this->get_parameters();
  }

  function getTarget($f) {
    return FALSE;
  }

  function getExternalUrl() {
    // Return the direct image.
    $id = $this->get_parameters();
    $json = drupal_http_request('http://www.viddler.com/oembed/?url=http://www.viddler.com/v/' . $id);
    $data = drupal_json_decode($json->data);
    return $data['thumbnail_url'];
  }

  function getOriginalThumbnailPath() {
    return $this->getExternalUrl();
  }
  function getLocalThumbnailPath() {
    $local_path = 'public://viddler/' . $this->get_parameters() . '.jpg';
    if (!file_exists($local_path)) {
      $dirname = drupal_dirname($local_path);
      file_prepare_directory($dirname, FILE_CREATE_DIRECTORY | FILE_MODIFY_PERMISSIONS);
      @copy($this->getOriginalThumbnailPath(), $local_path);
    }
    return $local_path;
  }

  static function getMimeType($uri, $mapping = NULL) {
    return 'video/viddler';
  }

  function setUri($uri) {
    parent::setUri($uri);
  }

  protected function _parse_url($url) {
    $path = explode('://', $url);
    return $path[1];
  }
}
