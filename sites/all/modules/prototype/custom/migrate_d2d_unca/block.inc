<?php
/**
 * @file
 * Implementation of DrupalFileMigration for Drupal 6 sources.
 */

class UNCABlockMigration extends DrupalMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

//    $this->source = new MigrateSourceSQL($this->query(), $this->sourceFields,
//      NULL, $this->sourceOptions);

    $this->source = new MigrateSourceSQL($this->query(), array(), NULL, array('map_joinable' => FALSE));

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'bid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'alias' => 'b',
        ),
      ),
      MigrateDestinationTable::getKeySchema()
    );


    $this->destination = new MigrateDestinationTable('block');

    $this->addSimpleMappings(
      array(
        'module',
        'delta',
        'theme',
        'status',
        'weight',
        'region',
        'custom',
        'visibility',
        'pages',
        'title',
        'cache',
      )
    );
  }


  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    switch ($row->region){
      case 'emergency':
        break;
      case 'notice':
        break;
      case 'content_top_left':
        $row->region = 'content_row_1';
        break;
      case 'content_top_right':
        $row->region = 'content_row_1';
        break;
      case 'content_top':
        $row->region = 'content_row_1';
        break;
      case 'content_bottom_left':
        $row->region = 'content_row_2_column_1';
        break;
      case 'content_bottom_right':
        $row->region = 'content_row_2_column_2';
        break;
      case 'content_bottom':
        $row->region = 'bottom';
        break;
      case 'right_column':
        $row->region = 'sidebar_first';
        break;
      case 'footer_spiff_left':
        $row->region = 'footer_promo_a';
        break;
      case 'footer_spiff_interior':
        $row->region = 'footer_promo_large';
        break;
      case 'footer_spiff_right':
        $row->region = 'footer_promo_b';
        break;
      case 'footer':
        $row->region = 'footer';
        break;
      case 'home_main':
        $row->region = 'content_row_1';
        break;
      case 'home_left':
        $row->region = 'content_row_2_column_1';
        break;
      case 'home_interior':
        $row->region = 'content_row_2_column_2';
        break;
      case 'home_right':
        $row->region = 'sidebar_first';
        break;
      case 'gateway_flickr':
        $row->region = 'gateway_row_1';
        break;
      case 'gateway_top_left':
        $row->region = 'gateway_row_2_column_1';
        break;
      case 'gateway_top_interior':
        $row->region = 'gateway_row_2_column_2';
        break;
      case 'gateway_right':
        $row->region = 'gateway_row_2_column_2';
        break;
      default:
        // any regions not listed above will be thrown away
        return FALSE;
        break;
    }

  }

  protected function query() {
    $query = Database::getConnection('default', 'legacy')
      ->select('blocks', 'b')
      ->fields('b')
      ->condition('module','block','=')
      ->condition('theme',array('unca','unca.department','unca_gateway','ncccr'),'IN');
    return $query;
  }
}