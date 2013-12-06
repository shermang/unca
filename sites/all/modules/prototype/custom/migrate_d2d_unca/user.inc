<?php
/**
 * @file
 * Implementation of DrupalUserMigration for Drupal 6 sources.
 */

/**
 * Handling specific to a Drupal 6 source for users.
 */
class UNCAUserMigration extends DrupalUser6Migration {
  /**
   * @param array $arguments
   */
  public function __construct(array $arguments) {
    parent::__construct($arguments);
  }

  /**
   * Implementation of Migration::prepareRow().
   *
   * Manually handle 'admin' role (nec. due to changed rid in d6 sites)
   *
   * @param $row
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

    // print_r($row);

    // if(in_array(3, $row->roles[0])) {

    // }
    // [roles] => Array
    //     (
    //         [0] => 4
    //     )

    // $image_row = Database::getConnection('default', $this->sourceConnection)
    //              ->select('custom_image_table', 'i')
    //              ->fields('i', array('copyright', 'filename'))
    //              ->condition('vid', $row->vid)
    //              ->execute()
    //              ->fetchObject();
    // if ($image_row) {
    //   $row->copyright = $image_row->copyright;
    //   $row->filename = $image_row->filename;
    // }
    // else {
    //   $this->saveMessage(t('No custom_image_table data for image node with vid !vid',
    //                      array('!vid' => $row->vid)));
    // }
  }


}
