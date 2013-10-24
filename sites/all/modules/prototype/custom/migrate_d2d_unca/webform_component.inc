<?php

class UNCAWebformComponentMigration extends DrupalMigration {
  public function __construct($arguments) {

    parent::__construct($arguments);

    $table_name = 'webform_component';

    $map_source_pkey = array(
      'nid' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      ),
      'cid' => array(
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
                     ->select($table_name, 'wc')
             ->fields('wc')
             ->orderBy('pid', 'ASC'); // // This sort assures that parents are saved before children.

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query);

    // Set up our destination
    $this->destination = new MigrateDestinationTable($table_name);

    // Field mappings
    $this->addFieldMapping('nid', 'nid')
        ->sourceMigration('UNCAWebFormNode');
    $this->addFieldMapping('cid', 'cid');
    $this->addFieldMapping('pid','pid');
    $this->addFieldMapping('form_key', 'form_key');
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('type', 'type');
    $this->addFieldMapping('value', 'value');
    $this->addFieldMapping('extra', 'extra');
    $this->addFieldMapping('mandatory', 'mandatory');
    $this->addFieldMapping('weight', 'weight');

  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    // the following code comes from the webform.install file update_7313
    $component['extra'] = unserialize($row->extra);
    if (!isset($component['extra']['start_date']) && !isset($component['end_date'])) {
      foreach (array('year_start' => 'start_date', 'year_end' => 'end_date') as $key => $replacement) {
        $value = isset($component['extra'][$key]) ? trim($component['extra'][$key]) : '';
        // Relative years.
        if (preg_match('/[-+][ ]*[0-9]+/', $value)) {
          $component['extra'][$replacement] = ($value == 1) ? ($value . ' year') : ($value . ' years');
        }
        // Absolute years.
        elseif (is_numeric($value)) {
          $component['extra'][$replacement] = 'Dec 31 ' . $value;
        }
        unset($component['extra'][$key]);
      }
      $row->extra = serialize($component['extra']);
    }
    // the following code comes from the webform.install update_7318
    $component['extra'] = unserialize($row->extra);
    if (!isset($component['extra']['directory'])) {
      $component['extra']['directory'] = $component['extra']['savelocation'];
      $component['extra']['scheme'] = file_default_scheme();
      $component['extra']['filtering']['size'] = $component['extra']['filtering']['size'] . ' KB';
      unset($component['extra']['savelocation']);
      $row->extra = serialize($component['extra']);
    }
  }

  public function prepare($entity, $row) {
    // drush_print_r($row);
    // drush_print_r($entity);
  }

  protected function query(){
    return parent::query();
  }

}
