<?php
class UNCAProfileMigration extends UNCANodeMigration {
  public function __construct(array $arguments) {
// Add any other data we're pulling into the source row, before the parent
// constructor.

    parent::__construct($arguments);

    $this->addFieldMapping('field_profile_first_name','field_firstname');
    $this->addFieldMapping('field_profile_last_name','field_lastname');
    $this->addFieldMapping('field_profile_suffix','field_suffix');
    $this->addFieldMapping('field_subheading','field_subhead');
    // image field
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
    // end image field
    $this->addFieldMapping('field_contact_info','field_teaser_text');
    $this->addFieldMapping('field_personal_statement','field_teaser_text');
    $this->addFieldMapping('field_weight','field_weight');


// Note that we map migrated terms by the vocabulary ID.
    $this->addFieldMapping('field_profile_type_term', migrate_d2d_unca_get_src_vocab_id('profile_type'))
      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('profile_type'));
    $this->addFieldMapping('field_profile_type_term:source_type')
      ->defaultValue('tid');

//  // department is a new field and we don't need to migrate
//    $this->addFieldMapping('field_department_term', '1')
//      ->sourceMigration('Term_'.migrate_d2d_unca_get_vocab_mach_name('department'))
//      ->arguments(array('source_type' => 'tid'));

  }

  /**
   * Implementation of Migration::prepareRow().
   *
   * Manually handle 'retire' field
   *
   * @param $row
   * @return bool
   */
  public function prepareRow($row) {
    if (parent::prepareRow($row) === FALSE) {
      return FALSE;
    }
    if(empty($row->field_firstname) && empty($row->field_lastname)){
      $name = new HumanNameParser_Parser($row->title);
      $row->field_firstname = $name->getFirst();
      $row->field_lastname = $name->getLast();
      $row->field_suffix = $name->getSuffix();
    }

    return TRUE;
  }

  public function prepare(stdClass $entity, stdClass $row){
    parent::prepare($entity, $row);
  }

}


/**
 * Does cutting and matching stuff with a name string.
 * Note that the string has to be UTF8-encoded.
 *
 */
class HumanNameParser_Name {
  private $str;

  function __construct($str)
  {
    $this->setStr($str);
  }

  /**
   * Checks encoding, normalizes whitespace/punctuation, and sets the name string.
   *
   * @param String $str a utf8-encoding string.
   * @throws Exception
   * @return Bool True on success
   */
  public function setStr($str)
  {
    if (!mb_check_encoding($str)){
      throw new Exception("Name is not encoded in UTF-8");
    }
    $this->str = $str;
    $this->norm();
    return true;
  }

  public function getStr()
  {
    return $this->str;
  }


  /**
   * Uses a regex to chop off and return part of the namestring
   * There are two parts: first, it returns the matched substring,
   * and then it removes that substring from $this->str and normalizes.
   *
   * @param string $regex matches the part of the namestring to chop off
   * @param integer $submatchIndex    which of the parenthesized submatches to use
   * @param string $regexFlags    optional regex flags
   * @throws Exception
   * @return string    the part of the namestring that got chopped off
   */
  public function chopWithRegex($regex, $submatchIndex = 0, $regexFlags = '')
  {
    $regex = $regex . "ui" . $regexFlags; // unicode + case-insensitive
    preg_match($regex, $this->str, $m);
    $subset = (isset($m[$submatchIndex])) ? $m[$submatchIndex] : '';

    if ($subset){
      $this->str = preg_replace($regex, ' ', $this->str, -1, $numReplacements);
      if ($numReplacements > 1){
        throw new Exception("The regex being used to find the name has multiple matches.");
      }
      $this->norm();
      return $subset;
    }
    else {
      return '';
    }
  }

  /*
   * Flips the front and back parts of a name with one another.
   * Front and back are determined by a specified character somewhere in the
   * middle of the string.
   *
   * @param	String $flipAroundChar	the character(s) demarcating the two halves you want to flip.
   * @return Bool True on success.
   */
  public function flip($flipAroundChar)
  {
    $substrings = preg_split("/$flipAroundChar/u", $this->str);
    if (count($substrings) == 2){
      $this->str = $substrings[1] . " " . $substrings[0];
      $this->norm();
    }
    else if (count($substrings) > 2) {
      throw new Exception("Can't flip around multiple '$flipAroundChar' characters in namestring.");
    }
    return true; // if there's 1 or 0 $flipAroundChar found
  }

  /**
   * Removes extra whitespace and punctuation from $this->str
   * Strips whitespace chars from ends, strips redundant whitespace, converts whitespace chars to " ".
   *
   * @return Bool True on success
   */
  private function norm()
  {
    $this->str = preg_replace( "#^\s*#u", "", $this->str );
    $this->str = preg_replace( "#\s*$#u", "", $this->str );
    $this->str = preg_replace( "#\s+#u", " ", $this->str );
    $this->str = preg_replace( "#,$#u", " ", $this->str );
    return true;
  }
}

/**
 * Works with a Name object to parse out the parts of a name.
 *
 * Example usage:
 *		$parser = new Parser("John Q. Smith");
 *		echo  $parser->getLast() . ", " . $parser->getFirst();
 *		//returns "Smith, John"
 *
 *
 */
class HumanNameParser_Parser {
  private $name;
  private $leadingInit;
  private $first;
  private $nicknames;
  private $middle;
  private $last;
  private $suffix;

  private $suffixes;
  private $prefixes;

  /*
   * Constructor
   *
   * @param	mixed $name	Either a name as a string or as a Name object.
   */
  public function __construct($name = NULL)
  {
    $this->setName($name);
  }

  /**
   * Sets name string and parses it.
   * Takes Name object or a simple string (converts the string into a Name obj),
   * parses and loads its constituant parts.
   *
   * @param	mixed $name	Either a name as a string or as a Name object.
   */
  public function setName($name = NULL){
    if ($name) {

      if (is_object($name) && get_class($name) == "HumanNameParser_Name") { // this is mostly for testing
        $this->name = $name;
      }
      else {
        $this->name = new HumanNameParser_Name($name);
      }

      $this->leadingInit = "";
      $this->first = "";
      $this->nicknames = "";
      $this->middle = "";
      $this->last = "";
      $this->suffix = "";

      $this->suffixes = array('esq','esquire','jr','sr','2','ii','iii','iv');
      $this->prefixes = array('bar','ben','bin','da','dal','de la', 'de', 'del','der','di',
        'ibn','la','le','san','st','ste','van', 'van der', 'van den', 'vel','von');

      $this->parse();
    }
  }

  public function getLeadingInit() {
    return $this->leadingInit;
  }
  public function getFirst() {
    return $this->first;
  }
  public function getNicknames() {
    return $this->nicknames;
  }

  public function getMiddle() {
    return $this->middle;
  }

  public function getLast() {
    return $this->last;
  }

  public function getSuffix() {
    return $this->suffix;
  }
  public function getName(){
    return $this->name;
  }

  /**
   * returns all the parts of the name as an array
   *
   * @param String $arrType pass 'int' to get an integer-indexed array (default is associative)
   * @throws Exception
   * @return array An array of the name-parts
   */
  public function getArray($arrType = 'assoc') {
    $arr = array();
    $arr['leadingInit'] = $this->leadingInit;
    $arr['first'] = $this->first;
    $arr['nicknames'] = $this->nicknames;
    $arr['middle'] = $this->middle;
    $arr['last'] = $this->last;
    $arr['suffix'] = $this->suffix;
    if ($arrType == 'assoc') {
      return $arr;
    }
    else if ($arrType == 'int'){
      return array_values($arr);
    }
    else {
      throw new Exception("Array must be associative ('assoc') or numeric ('num').");
    }
  }

  /*
   * Parse the name into its constituent parts.
   *
   * Sequentially captures each name-part, working in from the ends and
   * trimming the namestring as it goes.
   *
   * @return boolean	true on success
   */
  private function parse()
  {
    $suffixes = implode("\.*|", $this->suffixes) . "\.*"; // each suffix gets a "\.*" behind it.
    $prefixes = implode(" |", $this->prefixes) . " "; // each prefix gets a " " behind it.

    // The regex use is a bit tricky.  *Everything* matched by the regex will be replaced,
    //	but you can select a particular parenthesized submatch to be returned.
    //	Also, note that each regex requres that the preceding ones have been run, and matches chopped out.
    $nicknamesRegex =		"/ ('|\"|\(\"*'*)(.+?)('|\"|\"*'*\)) /"; // names that starts or end w/ an apostrophe break this
    $suffixRegex =			"/,* *($suffixes)$/";
    $lastRegex =				"/(?!^)\b([^ ]+ y |$prefixes)*[^ ]+$/";
    $leadingInitRegex =	"/^(.\.*)(?= \p{L}{2})/"; // note the lookahead, which isn't returned or replaced
    $firstRegex =			"/^[^ ]+/"; //

    // get nickname, if there is one
    $this->nicknames = $this->name->chopWithRegex($nicknamesRegex, 2);

    // get suffix, if there is one
    $this->suffix = $this->name->chopWithRegex($suffixRegex, 1);

    // flip the before-comma and after-comma parts of the name
    $this->name->flip(",");

    // get the last name
    $this->last = $this->name->chopWithRegex($lastRegex, 0);
    if (!$this->last){
      throw new Exception("Couldn't find a last name in '{$this->name->getStr()}'.");
    }

    // get the first initial, if there is one
    $this->leadingInit = $this->name->chopWithRegex($leadingInitRegex, 1);

    // get the first name
    $this->first = $this->name->chopWithRegex($firstRegex, 0);
    if (!$this->first){
      throw new Exception("Couldn't find a first name in '{$this->name->getStr()}'");
    }

    // if anything's left, that's the middle name
    $this->middle = $this->name->getStr();
    return true;
  }
}
