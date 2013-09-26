<?php
/**
 * @file
 * Implementation of DrupalFileMigration for Drupal 6 sources.
 */

class UNCAFileMigration extends DrupalFile6Migration {
  protected $legacyPath;

  public function __construct(array $arguments) {
    parent::__construct($arguments);
/*
    $this->highwaterField = array(
      'name' => 'timestamp',
      'alias' => 'f',
      'type' => 'int',
    );

    $this->addFieldMapping('value', 'filepath')
      ->callbacks(array($this, 'fixUri'));
    $this->addFieldMapping('destination_file', 'filepath')
      ->callbacks(array($this, 'fixUri'));
    $this->addFieldMapping('timestamp', 'timestamp');

    $this->legacyPath = unserialize(
      Database::getConnection('default', $this->sourceConnection)
        ->select('variable', 'v')
        ->fields('v', array('value'))
        ->condition('name', 'file_directory_path')
        ->execute()
        ->fetchField());
    // Strip ./ from the beginning
    if (substr($this->legacyPath, 0, 2) == './') {
      $this->legacyPath = substr($this->legacyPath, 2);
    }

    $this->addUnmigratedSources(array('status'));
*/
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