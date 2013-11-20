<?php
class UNCAVariableMigration extends DrupalMigration {

  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->source = new MigrateSourceSQL($this->query(), array(), NULL, array('map_joinable' => FALSE));

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'name' => array(
          'description' => 'The name of the variable.',
          'type' => 'varchar',
          'length' => 128,
          'not null' => TRUE,
          'default' => '',
        ),
      ),
      MigrateDestinationTable::getKeySchema('variable')
    );


    $this->destination = new MigrateDestinationTable('variable');

    $this->addFieldMapping('value', 'value');
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

    $value = unserialize($row->value);
    switch($row->name){
      case 'site_frontpage':
      case 'site_404':
      case 'site_403':
        $tmp_value = explode('/',$value);
        if(!empty($tmp_value[0]) && ($tmp_value[0] == 'node')){

          $result = db_select('migrate_map_uncapagect','p')
            ->fields('p')
            ->condition('sourceid1',$tmp_value[1],'=')
            ->execute()
            ->fetchAssoc();
          if($result){
            $row->value = serialize('node/'.$result['destid1']);
          }
        }

        break;
      default:
        break;

    }
    variable_set($row->name,unserialize($row->value));

    // we always want to return false as we don't want migrate to actually process the row
    return FALSE;
  }

  protected function query() {
    $variables = array(
      'site_name',
      'site_mail',
      'site_default_country',
      'site_frontpage',
      'site_offline_messsage',
      'site_404',
      'site_403',
    );
    $query = Database::getConnection('default', 'legacy')
      ->select('variable', 'v')
      ->fields('v')
      ->condition('name',$variables,'IN');
    return $query;
  }
}

