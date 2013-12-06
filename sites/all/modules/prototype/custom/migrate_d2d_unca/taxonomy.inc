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

  public function preImport() {
    parent::preImport();
  }

  public function import(){
    parent::import();
  }

  public function prepare($entity, $row){
    // set database connection to taxonomy database as defined in settings.php
    db_set_active('taxonomy');

    //check if exists
    $results = db_select('migrate_taxonomy_term_data', 't')
      ->fields('t')
      ->condition('vid',$entity->vid,'=')
      ->condition('name',$row->name,'=')
      ->execute()
      ->fetchAssoc();
    if($results){
      // set tid to taxonomy database
      $entity->tid = $results['tid'];
      // migrate requires that the record already exists if we assign the tid
      $term = new StdClass();
      $term->tid = $results['tid'];
      $term->name = 'Stub term: ' . $results['tid'];
      $term->description = '';
      $term->vid = $entity->vid;

      // make sure we are in the default database
      db_set_active();
      $status = drupal_write_record('taxonomy_term_data', $term);

    } else {
      // we will save the tid back to the taxonomy database in function complete() below
      // after the tid is assigned
    }

    // reset to default database
    db_set_active();
  }

  public function complete($entity, $row) {
    db_set_active('taxonomy');
    db_merge('migrate_taxonomy_term_data')
      ->key(array('tid' => $entity->tid))
      ->fields(array(
        'tid' => $entity->tid,
        'vid' => $entity->vid,
        'name' => $entity->name
      ))
      ->execute();
    db_set_active();
  }
}
