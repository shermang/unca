<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
    "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" lang="<?php print $language->language; ?>">

<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<title><?php print $head_title; ?></title>
	<?php print $head; ?>
	<meta name="Copyright" content="Copyright 2011 The University of North Carolina at Asheville" />
	<meta name="Author" content="The University of North Carolina at Asheville" />  
	<!-- Dublin Core Metadata -->
	<link rel="schema.DC" href="http://purl.org/dc/elements/1.1/" />
	<link rel="schema.DCTERMS" href="http://purl.org/dc/terms/" />
	<meta name="DC.title" content="<?php print $head_title; ?>" />
	<meta name="DC.publisher" content="The University of North Carolina at Asheville" />
	<meta name="DC.type" scheme="DCTERMS.DCMIType" content="Text" />
	<meta name="DC.format" content="text/html; charset=UTF-8" />
	<link href="http://www2.unca.edu/css/admissions.css" media="all" rel="stylesheet" type="text/css">
	<!-- /Dublin Core Metadata -->
	<?php print $styles; ?>

	<!--[if IE 6]>
		<link rel="stylesheet" type="text/css" href="<?php print $base_path . $directory; ?>/css/ie6.css" />
		<script src="<?php print $base_path . $directory; ?>/js/DD_belatedPNG_0.0.8a-min.js" charset="utf-8"></script>
		<script type="text/javascript" charset="utf-8">
			/* <![CDATA[ */
				// make pngs transparent
				DD_belatedPNG.fix('.button-blue-rounded, .section-heading, #logo, .trigger, .trigger-closed, .captioned-image, .calendar-graphic, #question-form, #ask-a-student-submit, .top-stripes, .bottom-stripes, .footer-spiff-mailinglist, .footer-spiff-facebook, .footer-spiff-question, .footer-spiff-tour, .footer-spiff-apply');
			/* ]]> */
		</script>
	<![endif]-->
	
	<!--[if IE 7]>
		<link rel="stylesheet" type="text/css" href="<?php print $base_path . $directory; ?>/css/ie7.css" />
	<![endif]-->
	
	<!--[if IE 8]>
		<link rel="stylesheet" type="text/css" href="<?php print $base_path . $directory; ?>/css/ie8.css" />   
	<![endif]-->
	
	<script src="<?php print $base_path . $directory; ?>/js/jquery-1.3.2.min.js" type="text/javascript" charset="utf-8"></script>
	<script src="<?php print $base_path . $directory; ?>/js/functions.js" type="text/javascript" charset="utf-8"></script>
	<script type="text/javascript" charset="utf-8">
		/* <![CDATA[ */
		$(document).ready(function(){
			initializeSearchBox();
			initializeNavigationSecondary();
			initializeSearchAction();
		});
		/* ]]> */
	</script>
	<?php print $scripts; ?>
</head>

<body>

<div class="accessibility">
	<a href="#content" accesskey="s">Skip to content</a>
</div>

<div class="container">
	<div id="header"> 
		<a href="<?php print check_url($front_page); ?>" accesskey="1"><img src="<?php print $base_path . $directory; ?>/imgs/uncasheville-logo.png" alt="go to homepage" width="285" height="65" id="logo" /></a>
		<div id="navigation-utility-wrapper">
			<ul id="navigation-utility" class="list-horizontal">
			  <li><a href="http://maps.unca.edu">Maps</a></li>
			  <li><a href="http://bullpup.lib.unca.edu/library/">Library</a></li>
              <li><a href="http://learnonline.unca.edu">Moodle</a></li>
			  <li><a href="http://oneport.unca.edu/">OnePort</a></li>
			  <li class="last"><a href="http://webmail.unca.edu/">Email</a></li>
			</ul>
		</div>
		<div class="clear">&nbsp;</div>
	</div>
	<!-- /header -->
    <div class="clear">&nbsp;</div>
	<?php $this_page = request_uri(); ?>

	<div id="navigation-primary-wrapper">
		<ul id="navigation-primary" class="list-horizontal">
		  <li><a href="<?php print $base_path; ?>about" id="about" <?php print is_current($this_page, "about", $base_path);?>>About</a></li>
		  <li><a href="<?php print $base_path; ?>academics" id="academics" <?php print is_current($this_page, "academics", $base_path);?>>Academics</a></li>
		  <li><a href="<?php print $base_path; ?>admissions" id="admissions" <?php print is_current($this_page, "admissions", $base_path);?>>Admissions</a></li>
		  <li><a href="<?php print $base_path; ?>life-campus" id="life-on-campus" <?php print is_current($this_page, "life-campus", $base_path);?>>Life on Campus</a></li>
		  <li><a href="http://www.uncabulldogs.com/" id="athletics">Athletics</a></li>
		  <li><a href="<?php print $base_path; ?>news-events" id="news-and-events" <?php print is_current($this_page, "news-events", $base_path);?>>News &amp; Events</a></li>
		  <li><a href="<?php print $base_path; ?>centers" id="centers" <?php print is_current($this_page, "centers", $base_path);?>>Centers</a></li>
			  <li>
       			<div id="search">
       			  <form id="searchform" method="get" action="http://www.unca.edu/search-results">
     			   <!--<input class="cse" type="hidden" name="cx" value="000437231783059028413:fmzh8niwczw" />-->
     			   <input class="cse" type="hidden" name="cx" value="000437231783059028413:fmzh8niwczw" />
       			   <input class="cse" type="hidden" name="cof" value="FORID:10" />
                 <input class="cse" type="hidden" name="ie" value="UTF-8" />
                 <input type="hidden" name="group" value="faculty/staff" />
       				<ul class="list-horizontal">
       				  <li>
       					<label for="q" class="accessibility">Search</label>
       				  </li>
       				  <li>
       					<input type="text" id="q" value="" name="query" accesskey="4" />
       				  </li>
       				  <li>
       					<img id="search-button-people" src="<?php print $base_path . $directory; ?>/imgs/search-button-people.png" alt="search for people"/>
       				  </li>
       				  <li>
       					<input type="image" name="sa" id="search-button-web" src="<?php print $base_path . $directory; ?>/imgs/search-button-web.png" alt="search unca.edu" value="submit" />
       				  </li>
       				</ul>
       			  </form>
       			</div>
       			<!-- /search -->
		  </li>
		</ul>
	</div>
	<!-- /navigation-primary-wrapper -->
	
	<!-- optional messages -->
	<?php if ($emergency): ?>
	<div class="msg-general msg-emergency">
		<h4>Emergency</h4>
		<div class="message">
		<?php print $emergency; ?>
		</div>
	</div>
	<?php endif; ?>
	<?php if ($notice): ?>
	<div class="msg-general msg-notice">
		<h4>Notice</h4>
	    <div class="message">
			<?php print $notice; ?>
		</div>
	</div>
	<?php endif; ?>
	<!-- /optional messages -->

      <div id="content" class="top-stripes">
         <div id="content-inner" class="bottom-stripes">
         <?php
         if (arg(0) == "node" && is_numeric(arg(1))) {
              $node_type = $variables['node']->type;
              if ($node_type == "news_article") {
                 $display_title = "News &amp; Events";
                 $menu = news_menu();
              }
              elseif ($node_type == "profile") {
                 $display_title = "Faces of UNC Asheville";
                 $menu = profiles_menu();
              }
              else {
                 $display_title = $title;
                 $menu = unca_menu();
              }}
              else {
                   $display_title = $title;
                   $menu = unca_menu();
                }           
         if(isset($menu) OR isset($right_column)) {
            $main_class = 'grid_4';
         }
         else {
            $main_class = 'grid_3';
         }
         ?>
         <div class="<?php print $main_class; ?>" id="main">
            <a name="content" id="content"></a>
            <h1>
               <?php print $display_title; ?>
            </h1>
            <?php if ($tabs): print '<ul class="tabs primary">'. $tabs .'</ul>'; endif; ?>
            <?php if ($tabs2): print '<ul class="tabs secondary">'. $tabs2 .'</ul>'; endif; ?>
            <?php if ($show_messages && $messages): print $messages; endif; ?>   
            <?php print $help; ?><?php print $field_video_embed; ?>
					<div class="two-column">
		   <?php if ($content_top_left): ?>
		   <div class="first-column">
			  <?php print $content_top_left; ?>
		   </div><?php endif; ?><?php if ($content_top_right): ?>
		   <div class="last-column">
			  <?php print $content_top_right; ?>
		   </div>
		   <div class="clear">
			  &nbsp;
		   </div><?php endif; ?>
            </div><!-- /two-column -->
            <?php if ($content_top): ?>
            <div class="content-top">
               <?php print $content_top; ?>
            </div><?php endif; ?>

            <?php print $content; ?>
            <div class="two-column">
               <?php if ($content_bottom_left): ?>
               <div class="first-column">
                  <?php print $content_bottom_left; ?>
               </div><?php endif; ?><?php if ($content_bottom_right): ?>
               <div class="last-column">
                  <?php print $content_bottom_right; ?>
               </div>
               <div class="clear">
                  &nbsp;
               </div><?php endif; ?>
            </div><!-- /two-column -->
            <?php if ($content_bottom): ?>
            <div class="content-bottom">
               <?php print $content_bottom; ?>
            </div><?php endif; ?>
         </div><!-- /main -->
         <?php if(isset($menu) OR isset($right_column)):?>
            
         <div class="grid_1" id="rail">
            <?php if(isset($menu)): ?>
            <div class="navigation-secondary">
            <?php print $menu; ?>
            <div class="clear">&nbsp;</div>
            </div><!-- /navigation-secondary -->
            <span id="navigation-secondary-bottom"></span> 
            <?php endif;?>
            <?php if ($right_column): ?> <?php print $right_column; ?> <?php endif; ?>
         </div><!-- /rail -->
         <?php endif; ?>
         <div class="clear">
            &nbsp;
         </div>
         </div><!-- /content-inner -->
      </div><!-- /content -->
      <div id="bottom-spiffs">
      	<?php if ($footer_spiff_left): ?>
      	<div class="column first">
      		<?php print $footer_spiff_left; ?>
          </div>
      	<?php endif; ?>
          <?php if ($footer_spiff_interior): ?>
      	<div class="column interior">
      		<?php print $footer_spiff_interior; ?>
          </div>
      	<?php endif; ?>
          <?php if ($footer_spiff_right): ?>
      	<div class="column last">
      		<?php print $footer_spiff_right; ?>
          </div>
      	<?php endif; ?>
      </div>
      <div class="clear">&nbsp;</div>
          <div id="footer">
              <?php if ($footer):
      			print $footer;
      			endif; ?>
      			<div class="clear">&nbsp;</div>
              <p>&copy;<?php print(date(Y)); ?> The University of North Carolina at Asheville</p>
          </div><!-- /footer -->
      	<div class="clear">&nbsp;</div>
      </div><!-- /container -->
      <?php print $closure; ?>
      </body>
      </html>
