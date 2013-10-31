<?php

class UNCAIframeMigration extends UNCANodeMigration {

  public function __construct(array $arguments) {

    parent::__construct($arguments);

    $this->addFieldMapping('field_iframe','field_iframe');
    $this->addFieldMapping('field_iframe:title','field_iframe:title');
    $this->addFieldMapping('field_iframe:attributes','field_iframe:attributes');
    $this->addFieldMapping('field_iframe:language')
      ->defaultValue(LANGUAGE_NONE);
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
  }
}