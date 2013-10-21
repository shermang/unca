<?php

class UNCACourseMigration extends UNCANodeMigration {
  public function __construct(array $arguments) {

    parent::__construct($arguments);

    // Field mappings
    $this->addFieldMapping('field_image', 'field_instructor_photo')
         ->sourceMigration('UNCAFile');
    $this->addFieldMapping('field_image:file_class')
        ->defaultValue('MigrateFileFid');

    $this->addFieldMapping('field_course_number', 'field_course_number');
    $this->addFieldMapping('field_instructor', 'field_instructor');
    $this->addFieldMapping('field_times', 'field_times');
    $this->addFieldMapping('field_ending_date', 'field_ending_date');
    $this->addFieldMapping('field_course_dates', 'field_course_dates');
   
    // Note that we map migrated terms by the vocabulary ID.
    // 
    $course_catalog_src_vid = migrate_d2d_unca_get_src_vocab_id('course_catalogs');
    $course_days_src_vid = migrate_d2d_unca_get_src_vocab_id('course_days');
    $course_times_src_vid = migrate_d2d_unca_get_src_vocab_id('course_times');
    $course_topic_src_vid = migrate_d2d_unca_get_src_vocab_id('course_topic');
  
    $this->addFieldMapping('field_course_catalog_term', $course_catalog_src_vid)
         ->sourceMigration('Term_course_catalogs')
         ->arguments(array('source_type' => 'tid'));

    $this->addFieldMapping('field_course_days_term', $course_days_src_vid)
         ->sourceMigration('Term_course_days')
         ->arguments(array('source_type' => 'tid'));

    $this->addFieldMapping('field_course_times_term', $course_times_src_vid)
         ->sourceMigration('Term_course_times')
         ->arguments(array('source_type' => 'tid'));

    $this->addFieldMapping('field_course_topics_term', $course_topic_src_vid)
         ->sourceMigration('Term_course_topic')
         ->arguments(array('source_type' => 'tid'));

  }

  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
  }

  public function prepare($entity, $row) {
    parent::prepare($entity, $row);

    // Manually set date value (migrate_d2d was not handling, for unkown reason)
    if($row->field_ending_date) {
      $field_date = array(
        'und' => array(
          array(
            'value' => $row->field_ending_date,
            'timezone' => 'America/New_York',
            'timezone_db' => 'America/New_York',
            'date_type' => 'datetime',
          ),
        ),
      ); 
      $entity->field_ending_date = $field_date;
    }

  }

}
