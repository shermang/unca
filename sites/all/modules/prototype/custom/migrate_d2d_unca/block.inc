<?php
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
      MigrateDestinationTable::getKeySchema('block')
    );


    $this->destination = new MigrateDestinationTable('block');

    $this->addFieldMapping('delta', 'delta')
      ->sourceMigration('UNCABoxes');

    $this->addSimpleMappings(
      array(
        'module',
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

    if(($row->visibility == 1) && empty($row->pages)){
      // we have to do this because of a "bug" in D6 which allowed you to set visibility to 1 and
      // not list anything in pages, therefore showing the block in all pages.  In D7, the visibility needs
      // to be set to 0 and pages needs to be empty to show on all pages.
      $row->visibility == 0;
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
        $row->region = 'content_row_1';
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
        // any regions not listed above will be disabled
        $row->region = -1;
        $row->status = 0;
        break;
    }

    switch(TRUE){
      case (($row->delta == 'News-block_1') && ($row->theme == 'unca.department')):
        $row->delta = 'News-block_4';
        break;
      case (($row->delta == 'News-block_2') && ($row->theme == 'unca.department')):
        $row->delta = 'News-block_5';
        break;
      case (($row->delta == 'News-block_1') && ($row->theme == 'unca')):
        $row->delta = 'News-block_1';
        break;
      case (($row->delta == 'News-block_2') && ($row->theme == 'unca')):
        $row->delta = 'News-block_2';
        break;
      case (($row->delta == 'News-block_3') && ($row->theme == 'unca')):
        $row->delta = 'News-block_3';
        break;
      case ($row->delta == 'Events_with_images-block_1'):
        $row->delta = 'Events-block_3';
        break;
      case ($row->delta == 'Events_with_images-block_2'):
        $row->delta = 'Events-block_5';
        break;
      case ($row->delta == 'Campus_Updates-block_1'):
        $row->delta = 'campus_updates-block_1'; // note change in capitalization
        break;
    }
    $row->theme = 'unca_zenfoundation';


    $result = db_select('block','b')
      ->fields('b')
      ->condition('theme',$row->theme,'=')
      ->condition('module',$row->module,'=')
      ->condition('delta',$row->delta,'=')
      ->execute()
      ->fetchAssoc();
    switch($row->module){
      case 'views':
        if($result){
          if($row->status){
            $row->bid = $result['bid'];
            drupal_write_record('block', $row, 'bid');
          }

          return FALSE;
        }
        break;
      case 'block':
        if($result){
          return FALSE;
        }
        break;
      default:
        if($result){
          return FALSE;
        }
        break;
    }
  }

  protected function query() {
    db_set_active('legacy');
    $results = db_select('variable', 'v')
      ->fields('v',array('value'))
      ->condition('name','theme_default','=')
      ->execute()
      ->fetchCol();
    $theme = unserialize($results[0]);
    db_set_active();

    $query = Database::getConnection('default', 'legacy')
      ->select('blocks', 'b')
      ->fields('b')
      ->condition('module',array('menu','system'),'NOT IN') // an array of modules that we do not want to migrate
      ->condition('delta','0','<>')
      ->condition('theme',$theme,'=')
      ->condition('theme',array('unca','unca.department','unca_gateway','ncccr'),'IN');
    return $query;
  }

  public function prepare($entity, $row){
    if($entity->delta == ''){
      $entity->delta = $row->delta;
    }
  }
}

class UNCABoxesMigration extends DrupalMigration {

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
          'alias' => 'bx',
        ),
      ),
      array(
        'bid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => TRUE,
          'alias' => 'bc',
        ),
      )
    );

    $this->destination = new MigrateDestinationTable('block_custom');

//    $this->addFieldMapping('bid','bid');
    $this->addFieldMapping('body','body');
    $this->addFieldMapping('info','info');
    $this->addFieldMapping('format','format')
      ->callbacks(array($this, 'mapFormat'));
  }


  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
  }

  protected function query() {
    $query = Database::getConnection('default', 'legacy')
      ->select('boxes', 'b')
      ->fields('b');
    return $query;
  }
}

