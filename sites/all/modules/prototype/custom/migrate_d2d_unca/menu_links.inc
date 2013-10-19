<?php
// adding this class stub in case we find that we need to override something
class UNCADrupalMenuLinks6Migration extends DrupalMenuLinks6Migration {
  /**
   * @param array $arguments
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments);
  }

  public function prepareRow($row) {
    parent::prepareRow($row);
    if ($row->menu_name == 'main-menu' || $row->menu_name == 'primary-links'){
      $row->menu_name = 'menu-secondary-navigation---prot';
    }
  }

  /**
   * extend Query for the basic menu_links data.
   *
   * @return QueryConditionInterface
   */
  protected function query() {
    $query = parent::query();
    $query->condition('menu_name','primary-links','=');
    return $query;
  }


}