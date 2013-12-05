<?php

class UNCAStudentProjectMigration extends UNCANodeMigration {
  public function __construct(array $arguments) {

    parent::__construct($arguments);


    // Field mappings
    $this->addFieldMapping('field_image','field_image')
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

    $this->addFieldMapping('field_course_number','field_course_number');
    $this->addFieldMapping('field_link', 'field_url');
    // video_embed will be handled in node.inc prepare function
    //$this->addFieldMapping('field_video_embed','field_video_embed');
    $this->addFieldMapping('field_student_fullname','field_name');
    $this->addFieldMapping('field_email','field_email_address');
    $this->addFieldMapping('field_graduation_year','field_year');
  }

  public function prepare(stdClass $entity, stdClass $row){
    parent::prepare($entity, $row);
  }
}
