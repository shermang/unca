<?php
//function to check if the page is current and return class="current"
function is_current($this_page, $check_path, $base_path){
	$tmp = str_replace($base_path,"",$this_page);
	if (strpos($tmp, $check_path) === 0) {return 'class="current"';}
	else {return;}	
}

//custom menu function
function unca_menu(){
   $tree = menu_tree_page_data('primary-links');
   
   foreach($tree as $key => $mi) {
      if ($mi['link']['in_active_trail'] && $tree[$key]['below']) {
         $menu = menu_tree_output($tree[$key]['below']);                  
      }
   }
   if (isset($menu)){
      return $menu;
   }
   else {
      return NULL;
   }
}

//custom function to add menu on news pages
function news_menu(){
   $tree = menu_tree_page_data('primary-links');
   
   foreach($tree as $key => $mi) {
      if ($mi['link']['p1'] == 3364) {
         $menu = menu_tree_output($tree[$key]['below']);                  
      }
   }
   if (isset($menu)){
      return $menu;
   }
   else {
      return NULL;
   }
}

//custom function to add menu on profile pages
function profiles_menu(){
   $tree = menu_tree_page_data('primary-links');
   
   foreach($tree as $key => $mi) {
      if ($mi['link']['p1'] == 3899) {
         $menu = menu_tree_output($tree[$key]['below']);                  
      }
   }
   if (isset($menu)){
      return $menu;
   }
   else {
      return NULL;
   }
}
//function to accept custom page templates based upon path and node type: http://www.informit.com/articles/article.aspx?p=1336146&seqNum=7
function unca_preprocess_page(&$variables) {
$variables['head'] .= '<link '. drupal_attributes(array(
	'rel' => 'stylesheet',
	'type' => 'text/css',
	'href' => 'http://www2.unca.edu/css/admissions.css')
) ." />\n";
$is_front == drupal_is_front_page(); 
if ($is_front = FALSE){
if (module_exists('path')) {
$path_alias = drupal_get_path_alias($_GET['q']);
$alias_parts = explode('/', $path_alias);
$last = array_reverse($alias_parts);
$last_part = $last[0];
if ($last_part != "edit") {
  $templates = array();
  $template_name = "page";
  foreach ($alias_parts as $part) {
    $template_name = $template_name . '-' . $part;
    $templates[] = $template_name;
  }
  $variables['template_files'] = $templates;
  if (arg(0) == "node" && is_numeric(arg(1))) {
     $node_type = $variables['node']->type;
     array_push($variables['template_files'], "$template_name-node-$node_type.tpl.php");
  }
} // End of the edit check
} // End of the check for the path module
} // End of the preprocess_page function
} // End of the not home check

function phptemplate_preprocess_page(&$vars)
{
$css = $vars['css'];
unset($css['all']['module']['modules/system/system-menus.css']);
$vars['styles'] = drupal_get_css($css);
} ?>