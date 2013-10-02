<?php

class UNCAIframeMigration extends UNCANodeMigration {

  protected $pre_rollback_nids;

  public function __construct(array $arguments) {

    parent::__construct($arguments);

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



}