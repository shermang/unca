<?php

class UNCAPageMigration extends UNCANodeMigration {

  protected $pre_rollback_nids;

  public function __construct(array $arguments) {

    parent::__construct($arguments);

    // Temporarily correct pending updates in features
    $program_type_mach_name = migrate_d2d_unca_get_vocab_mach_name('program_type');
    $prog_type_migration_machine_name = 'Term_' . $program_type_mach_name;

  }

  /**
   * Implementation of Migration::prepareRow().
   *
   * Here we pull in additional data from a non-core, non-CCK table.
   *
   * @param $row
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
  }

  public function prepare(stdClass $entity, stdClass $row){
    parent::prepare($entity, $row);
    db_set_active('legacy');
    $subSite_nid = db_select('subsites_node', 's')
      ->fields('s',array('nid'))
      ->condition('nid',$row->nid,'=')
      ->execute()
      ->fetchField();
    if($subSite_nid){
      $entity->field_page_layout['und'][0]['value'] = 'gateway';
    }
    db_set_active();
  }
}
