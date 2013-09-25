<?php
/**
 * @file
 * Base class for migrating roles into Drupal.
 */

/**
 * 
 * 
 */
class UNCARoleMigration extends DrupalRole6Migration {

  /**
   * @param array $arguments
   * role_mappings - Array keyed by the legacy role name, with the destination
   *  role name as the value.
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments);
  }

  /**
   * Add conditions to the query generated DrupalRole6Migration by base class(es)
   *
   * @return QueryConditionInterface
   */
  public function query() {
    $query = parent::query();
    // Don't migrate the admin role, which has a different rid on the D6 sites
    // $query->condition('name', 'administrator', '<>');
    return $query;
  }


}
