<?php

class UNCAFileMigration extends DrupalFile6Migration {
  protected $legacyPath;

  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('preserve_files')
      ->defaultValue(TRUE);
  }

  protected function query() {
    $query = Database::getConnection('default', $this->sourceConnection)
      ->select('files', 'f')
      ->fields('f')
      ->orderBy('timestamp');
    return $query;
  }

  protected function fixUri($uri) {
    // Get the URI relative to the file directory
    $result = str_replace($this->legacyPath, '', $uri);
    return $result;
  }
}