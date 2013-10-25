<?php

/**
 * Common mappings for the Drupal 6 node migrations.
 */
abstract class UNCANodeMigration extends DrupalNode6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);
  }

  public function prepare(stdClass $entity, stdClass $row) {
   // make sure that the pathauto module doesn't rewrite the url alias
    if(module_exists('pathauto')){
      if(!empty($row->path)){
        $entity->path['pathauto'] = 0;
      }
    }

    // Convert d6 emfield data to d7 media/media_internet file reference field
    $fve = property_exists($row, 'field_video_embed:value');
    $viddler = property_exists($row, 'field_viddler_video');

    if($fve) {
      $vidvalue = $row->{'field_video_embed:value'}[0];
      $vidprovider = $row->{'field_video_embed:provider'}[0];
    } elseif($viddler) {
      $vidvalue = $row->{'field_viddler_video'};
      $vidprovider = 'viddler';
    }

    if($fve || $viddler) {
      if(!empty($vidvalue)) {
        // Convert field data for media_internet
        $vidtype = false; # let media module handle when it can
        switch( $vidprovider ) {
          case 'youtube':
            $viduri = 'youtube://v/' . $vidvalue;
            $vidmime = 'video/youtube';
            break;
          case 'vimeo':
            $viduri = 'vimeo://v/' . $vidvalue;
            $vidmime = 'video/vimeo';
            break;
          case 'viddler':
            $viduri = 'viddler://' . $vidvalue;
            $vidmime = 'video/viddler';
            break;
          case 'zzz_custom_url':
            $viduri = $vidvalue;
            $vidmime = 'application/x-shockwave-flash';
            $vidtype = 'legacy';  
            break;
          default:
            $viduri = $vidvalue;
            $vidmime = 'application/octet-stream';
            $vidtype = 'legacy';
            break;
        }
        // Create file record
        $f = file_uri_to_object($viduri, true);
        $f->filemime = $vidmime;
        if($vidtype) $f->type = $vidtype;
        @file_save($f); # ignore errors (swf file refs cause file stat error that isn't critical but breaks migration process)
        $fid = $f->fid;

        // Add file ref to new node
        $entity->field_video_embed = array();
        $entity->field_video_embed['und'][0]['fid'] = $fid;
        $entity->field_video_embed['und'][0]['display'] = 1;
      }
    }
  }

  public function getDestinationImageFieldNames($baseFieldName = NULL){
    if(empty($baseFieldName)){
      $baseFieldName = 'field_image';
    }

    return
      array(
        $baseFieldName,
        $baseFieldName .':file_class',
        $baseFieldName .':language',
        $baseFieldName .':preserve_files',
        $baseFieldName .':destination_dir',
        $baseFieldName .':destination_file',
        $baseFieldName .':file_replace',
        $baseFieldName .':source_dir',
        $baseFieldName .':urlencode',
        $baseFieldName .':alt',
        $baseFieldName .':title',
      );
  }

  public function getDestinationTermFieldNames($baseFieldName = NULL){
    if(empty($baseFieldName)){
      $baseFieldName = 'field_tags';
    }

    return
      array(
        $baseFieldName,
        $baseFieldName .':source_type',
        $baseFieldName .':create_term',
        $baseFieldName .':ignore_case'
      );
  }

  public function getDestinationVideoFieldNames($baseFieldName = NULL){
    if(empty($baseFieldName)){
      $baseFieldName = 'field_video_embed';
    }

    return
      array(
        $baseFieldName,
        $baseFieldName .':file_class',
        $baseFieldName .':language',
        $baseFieldName .':preserve_files',
        $baseFieldName .':destination_dir',
        $baseFieldName .':destination_file',
        $baseFieldName .':file_replace',
        $baseFieldName .':source_dir',
        $baseFieldName .':urlencode',
        $baseFieldName .':description',
        $baseFieldName .':display',
      );
  }

}

/**
 * Image-specific mappings and handling.
 */
class UNCAImageMigration extends UNCANodeMigration {
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
