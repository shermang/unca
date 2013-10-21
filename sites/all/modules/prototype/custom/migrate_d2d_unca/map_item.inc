<?php

class UNCAMapItemMigration extends UNCANodeMigration {
  public function __construct(array $arguments) {
// Add any other data we're pulling into the source row, before the parent
// constructor.

    parent::__construct($arguments);

    $this->addFieldMapping('field_image','field_map_item_image')
      ->sourceMigration('UNCAFile');
    $this->addFieldMapping('field_image:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_image:preserve_files')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_image:title', 'image_copyright')
      ->defaultValue('');
    $this->addFieldMapping('field_image:alt', 'image_description')
      ->defaultValue('');
    $this->addFieldMapping('field_image:language')
      ->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_map_number','field_map_number');
    $this->addFieldMapping('field_map_number:language')
      ->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_link','field_map_item_link');
    $this->addFieldMapping('field_link:language')
      ->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('field_location_with_map:name','name');
    $this->addFieldMapping('field_location_with_map:street','street');
    $this->addFieldMapping('field_location_with_map:additional','additional');
    $this->addFieldMapping('field_location_with_map:city','city');
    $this->addFieldMapping('field_location_with_map:province','province');
    $this->addFieldMapping('field_location_with_map:postal_code','postal_code');
    $this->addFieldMapping('field_location_with_map:country','country');
    $this->addFieldMapping('field_location_with_map:latitude','latitude');
    $this->addFieldMapping('field_location_with_map:longitude','longitude');
    $this->addFieldMapping('field_location_with_map:source','source');
    $this->addFieldMapping('field_location_with_map:is_primary','is_primary');

//    $this->addFieldMapping('field_location_with_map:lid','lid')
//      ->sourceMigration('UNCLocationMigration');
// Note that we map migrated terms by the vocabulary ID.
    if($arguments['unca_source_database'] == 'D6_drupal_maps'){
    $this->addFieldMapping('field_location_type_term', '5')
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('location_type'))
      ->arguments(array('source_type' => 'tid'));
    } else {
      $this->addFieldMapping('field_location_type_term', '3')
        ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('location_type'))
        ->arguments(array('source_type' => 'tid'));
    }
  }


  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    return TRUE;
  }

  // extend the query to get the location and location_instance tables
  protected function query() {
    $query = parent::query();

    // Join location table, which is not CCK
    $query->join('location_instance', 'i', 'i.nid = n.nid AND i.vid = n.vid');
    $query->join('location', 'l', 'l.lid = i.lid');
    $query->fields('l', array('name','street', 'additional', 'city', 'province', 'postal_code', 'country', 'latitude', 'longitude','source','is_primary'));

    return $query;
  }

  public function prepare(stdClass $entity, stdClass $row) {
    parent::prepare($entity, $row);
  }

}

class UNCALocationMigration extends DynamicMigration {
  public function __construct(array $arguments) {

    parent::__construct(MigrateGroup::getInstance($arguments['group'], array('default')));

    $table_name = 'location';

    $map_source_pkey = array(
      'lid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
    );
    $this->map = new MigrateSQLMap($this->machineName,
      $map_source_pkey,
      MigrateDestinationTable::getKeySchema($table_name)
    );

    // Source query
    $query = Database::getConnection('default', 'legacy')
      ->select($table_name, 'l')
      ->fields('l')
      ->orderBy('lid', 'ASC'); //

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query);

    // Set up our destination
    $this->destination = new MigrateDestinationTable($table_name);

    // Field mappings
    $this->addSimpleMappings(array(
      'name',
      'street',
      'additional',
      'city',
      'province',
      'postal_code',
      'country',
      'latitude',
      'longitude',
      'source',
      'is_primary',
    ));
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
  }

  public function prepare($entity, $row) {
    // drush_print_r($row);
    // drush_print_r($entity);
  }
}


class UNCALocationInstanceMigration extends DynamicMigration {
  public function __construct(array $arguments) {

    parent::__construct(MigrateGroup::getInstance($arguments['group'], array('default')));

    $table_name = 'location_instance';

    $map_source_pkey = array(
      'lid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
    );
    $this->map = new MigrateSQLMap($this->machineName,
      $map_source_pkey,
      $map_source_pkey
    );

    //MigrateDestinationTable::getKeySchema($table_name)
    // Source query
    $query = Database::getConnection('default', 'legacy')
      ->select($table_name, 'li')
      ->fields('li')
      ->orderBy('lid', 'ASC'); //

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query);

    // Set up our destination
    $this->destination = new MigrateDestinationTable($table_name);

    // Field mappings
    $this->addFieldMapping('nid','nid')
      ->sourceMigration('UNCAMapItem');
    $this->addFieldMapping('vid','vid');
    $this->addFieldMapping('uid','uid');
//       ->sourceMigration('UNCAUser');
    $this->addFieldMapping('genid','genid');
    $this->addFieldMapping('lid','lid')
      ->sourceMigration('UNCALocation');
  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }

  }

  public function prepare($entity, $row) {
    // drush_print_r($row);
    // drush_print_r($entity);
  }
}
