<?php

class UNCACampusUpdateMigration extends DrupalNode6Migration {

  protected $pre_rollback_nids;

  public function __construct(array $arguments) {

    parent::__construct($arguments);


    // Temporarily correct pending updates in features
    $program_type_mach_name = migrate_d2d_unca_get_vocab_mach_name('program_type');
    $prog_type_migration_machine_name = 'Term_' . $program_type_mach_name;

    // Field mappings
    $this->addFieldMapping('field_image', 'field_image')
       ->sourceMigration('UNCAFile');
    $this->addFieldMapping('field_image:file_class')
      ->defaultValue('MigrateFileFid');

// field_video_embed
// field_tags NEW
// field_featured_update NEW

    // Note that we map migrated terms by the vocabulary ID.
    $this->addFieldMapping('field_video_embed', 'field_video_embed');



    // $this->addFieldMapping('field_studyabroad_region', '4')
    //      ->sourceMigration('Term_region')
    //      ->arguments(array('source_type' => 'tid'));
    // $this->addFieldMapping('field_university_semester_term', '5')
    //      ->sourceMigration('Term_university_term')
    //      ->arguments(array('source_type' => 'tid'));

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

      drush_print_r($row);
    // Process embedded video field

    // // Get embedded video field data
    $qry = Database::getConnection('default', $this->sourceConnection)
                     ->select('node', 'n');
    $qry->join('content_field_video_embed', 've', 'n.nid = ve.nid');
    $qry->fields('n');
    $qry->fields('ve');
    $qry->isNotNull('ve.field_video_embed_embed');
    $qry->condition('n.nid', $row->nid);
    $rslt = $qry->execute();
    $data = $rslt->fetchAssoc();

    if($data) {
      $srcval = $data['field_video_embed_value'];
      $srcprovider = $data['field_video_embed_provider'];
      switch( $srcprovider ) {
        case 'youtube':
          $destdata = array(
           'uri' => 'youtube://v/' . $srcval ,
           'mime' => 'video/youtube',
          );
          break;
        case 'vimeo':
          $destdata = array(
           'uri' => 'vimeo://v/' . $srcval ,
           'mime' => 'video/vimeo',
          );
          break;
        case 'zzz_custom_url':
          $destdata = array(
           'uri' => $srcval ,
           'mime' => 'application/x-shockwave-flash',
          );
          break;
        default:
          $destdata = array(
           'uri' => $srcval ,
           'mime' => 'application/octet-stream',
          );
          break;
      }
      $f = file_uri_to_object(  $destdata['uri']  );
      $f->filemime = $destdata['mime']  ;


      file_save($f);
      $fid = $f->fid;

      $row->field_video_embed = $fid;

    }




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





  /**
   * Post-import processing
   *
   * @param $row
   * @return bool
   */
  public function cccccomplete($entity, $row) {

    // drush_print_r('xxxxxxxxxxxxx   complete  xxxxxxxxxxxxxx');
    //drush_print_r(array($entity,$row));


    // Process embedded video field
    $source_nid = $row->nid;
    $destination_nid = $entity->nid;

    // Get embedded video field data
    $qry = Database::getConnection('default', $this->sourceConnection)
                     ->select('node', 'n');
    $qry->join(   'content_field_video_embed'  ,  've'  ,  'n.nid = ve.nid'  );
    $qry->fields('n');
    $qry->fields('ve');
    $qry->isNotNull('ve.field_video_embed_embed');
    $rslt = $qry->execute();
    $source_video_data = array();
    while($data = $rslt->fetchAssoc()) {
        $source_video_data[$data['nid']] = $data;
    }


// destination
// youtube://v/_TP_AQDBrFs video/youtube
// vimeo://v/70424560   video/vimeo
// http://www2.unca.edu/samples/welcome/welcome.swf    application/x-shockwave-flash
// 
// 
// Source
// http://www2.unca.edu/ss/ss.swf   zzz_custom_url
// 0spfZkM9qQ4  youtube
// 26920499    vimeo

    foreach($source_video_data as $srcnid => $item) {
      // create file record
        $srcval = $item['field_video_embed_value'];
        $srcprovider = $item['field_video_embed_provider'];

        switch( $srcprovider ) {
            case 'youtube':
                $destdata = array(
                 'uri' => 'youtube://v/' . $srcval ,
                 'mime' => 'video/youtube',
                );
                break;
            case 'vimeo':
                $destdata = array(
                 'uri' => 'vimeo://v/' . $srcval ,
                 'mime' => 'video/vimeo',
                );
                break;
            case 'zzz_custom_url':
                $destdata = array(
                 'uri' => $srcval ,
                 'mime' => 'application/x-shockwave-flash',
                );
                break;
            default:
                $destdata = array(
                 'uri' => $srcval ,
                 'mime' => 'application/octet-stream',
                );
                break;
        }
        $f = file_uri_to_object(  $destdata['uri']  );
        $f->filemime = $destdata['mime']  ;
        file_save($f);
        $fid = $f->fid;
     
        // Set node file ref
        $n = node_load(160);
      
    }

    // $destination_name = $this->roleMappings[$role->name];
    // $destination_rid = db_select('role', 'r')
    //                  ->fields('r', array('rid'))
    //                  ->condition('name', $destination_name)
    //                  ->execute()
    //                  ->fetchField();
    // if ($destination_rid) {
    //     $role->rid = $destination_rid;
    //     // Make sure we don't change the destination name
    //     $role->name = $destination_name;
    //     $this->rollbackAction = MigrateMap::ROLLBACK_PRESERVE;
    // }

  }

  /**
   * Save pre-rollback nids in order to delete associated files in postRollback()
   * @return [type] [description]
   */
  public function ppppreRollback() {
    // drush_print_r('xxxxxxxxxxxx  pre rollback xxxxxxxxxxxxxxx');
   
    $this->pre_rollback_nids = Database::getConnection('default', 'default')
                   ->select('node', 'n')
                   ->fields('n', array('nid'))
                   ->condition('type', 'campus_update')
                   ->execute()
                   ->fetchCol();
    // drush_print_r($this->pre_rollback_nids);
  }

  /**
   * Delete associated files in postRollback()
   * @return [type] [description]
   */
  public function ppppostRollback() {
    // drush_print_r('xxxxxxxxxxxx  Post rollback xxxxxxxxxxxxxxx');
    $post_rollback_nids = Database::getConnection('default', 'default')
                   ->select('node', 'n')
                   ->fields('n', array('nid'))
                   ->condition('type', 'campus_update')
                   ->execute()
                   ->fetchCol();
    $rolled_back_nids = array_diff($this->pre_rollback_nids, $post_rollback_nids);
    // drush_print_r('xxxxxxxxxxxx  $rolled_back_nids xxxxxxxxxxxxxxx');
    // drush_print_r($rolled_back_nids);

    // get rolled back fids
    $qry = Database::getConnection('default', 'default')
                   ->select('node', 'n');
    $qry->join('field_data_field_video_embed', 've', 'n.nid = ve.entity_id');
    $qry->fields('ve', array('field_video_embed_fid'));
    $qry->condition('n.nid', array($rolled_back_nids), 'in');
    $post_rollback_fids =  $qry->execute()->fetchCol();

    // drush_print_r('xxxxxxxxxxxx  $post_rollback_fids xxxxxxxxxxxxxxx');
    // drush_print_r($post_rollback_fids);


    // delete file entries
    if(!empty($post_rollback_fids)) {
      $deleted = db_delete('file_managed', array('target' => 'default'))
        ->condition('fid', $post_rollback_fids, 'in')
        ->execute();
      // drush_print_r('xxxxxxxxxxxx  deleted ' . $deleted . ' xxxxxxxxxxxxxxx');
    }

  }

}
