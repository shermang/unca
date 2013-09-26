<?php
/**
 * @file
 * Implementation of DrupalTermMigration for Drupal 6 sources.
 */

/**
 * Handling specific to a Drupal 6 source for taxonomy terms.
 */
class UNCATermMigration extends DrupalTerm6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);
  }

  /**
   * Implementation of DrupalTermMigration::query().
   *
   * @return SelectQueryInterface
   */
  protected function query() {
    $query = parent::query();
    return $query;
  }

  /**
   * Implementation of Migration::prepareRow().
   *
   * @param $row
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    static $t;
    if(!$t) {
      drush_print_r($row);
      $t = true;
    }

  }
}