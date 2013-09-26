<?PHP
function last_edit_info($node) {
    $result = db_query("SELECT u.name, u.mail,
                        u.uid AS the_uid
                        FROM {node_revisions} nr, {users} u
                            WHERE    nr.uid = u.uid
                            AND    nr.nid = %d
                            ORDER BY timestamp DESC
                            LIMIT 1", $node->nid);
    $resultset = db_fetch_object($result);

    //if(user_access('access user profiles')) {
    if(1) {
		$author = "Last edited by ";
		$author .= l($resultset->mail, 'mailto:' . $resultset->mail,
			array('title' => t('Email author')));
    } else {
        $author = check_plain($resultset->name);
    }
      
    return $author ." on " .format_date($node->changed);
}

function unca_department_preprocess_page(&$vars, $hook) {
  $vars['head'] .= '<link '. drupal_attributes(array(
    'rel' => 'stylesheet',
    'type' => 'text/css',
    'href' => 'http://www2.unca.edu/css/admissions.css')
  ) ." />\n";
}

?>