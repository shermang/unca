<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
    "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" lang="<?php print $language->language; ?>">

<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<title><?php print $head_title; ?></title>
	<?php print $head; ?>
	<meta name="Copyright" content="Copyright 2010 The University of North Carolina at Asheville" />
	<meta name="Author" content="The University of North Carolina at Asheville" />  
	<!-- Dublin Core Metadata -->
	<link rel="schema.DC" href="http://purl.org/dc/elements/1.1/" />
	<link rel="schema.DCTERMS" href="http://purl.org/dc/terms/" />
	<meta name="DC.title" content="<?php print $head_title; ?>" />
	<meta name="DC.publisher" content="The University of North Carolina at Asheville" />
	<meta name="DC.type" scheme="DCTERMS.DCMIType" content="Text" />
	<meta name="DC.format" content="text/html; charset=UTF-8" />
	<!-- /Dublin Core Metadata -->
	<?php print $styles; ?>

	<!--[if IE 6]>
		<link rel="stylesheet" type="text/css" href="/themes/unca/css/ie6.css" />
		<script src="<?php print $base_path . $directory; ?>/js/DD_belatedPNG_0.0.8a-min.js" charset="utf-8"></script>
		<script type="text/javascript" charset="utf-8">
			/* <![CDATA[ */
				// make pngs transparent
				DD_belatedPNG.fix('.button-blue-rounded, .section-heading, #logo, .trigger, .trigger-closed, .captioned-image, .calendar-graphic, #question-form, #ask-a-student-submit, .spiff');
			/* ]]> */
		</script>
	<![endif]-->
	
	<!--[if IE 7]>
		<link rel="stylesheet" type="text/css" href="/themes/unca/css/ie7.css" />
	<![endif]-->
	
	<!--[if IE 8]>
		<link rel="stylesheet" type="text/css" href="/themes/unca/css/ie8.css" />   
	<![endif]-->
	
	<script src="<?php print $base_path . $directory; ?>/js/jquery-1.3.2.min.js" type="text/javascript" charset="utf-8"></script>
	<script src="<?php print $base_path . $directory; ?>/js/functions.js" type="text/javascript" charset="utf-8"></script>
	<script type="text/javascript" charset="utf-8">
		/* <![CDATA[ */
		$(document).ready(function(){
			initializeExpandLinks();
			initializeSearchAction();
			initializeSearchBox();
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
       			   <input class="cse" type="hidden" name="cx" value="000437231783059028413:fmzh8niwczw" />
       			   <input class="cse" type="hidden" name="cof" value="FORID:10" />
                 <input class="cse" type="hidden" name="ie" value="UTF-8" />
                 <input type="hidden" name="group" value="faculty/staff">
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
         <?php
         $menu = unca_menu();
         if(isset($menu) OR isset($right_column)) {
            $main_class = 'grid_4';
         }
         else {
            $main_class = 'grid_3';
         }
         ?>
         <div class="gateway-bottom-stripes">	
         	<div id="gateway-layout">	
                 <h1><?php print $title; ?></h1>
                 <br class="clear" />
<?php if ($gateway_flickr || $gateway_top_left || $gateway_top_interior || $gateway_top_right): ?>
                 <?php if ($gateway_flickr): ?>
                    <div id="this-week-image">
                     <?php print $gateway_flickr; ?>
					<div id="caption">Add your own images by joining the UNC Asheville <a href="http://www.flickr.com/groups/uncasheville/">Flickr group.</a></div>
					</div>
                 <?php endif; ?>
                 <div id="this-week-highlights">
                     <h2>This Week</h2>
                         <div class="divider"><span></span></div>
                         <div class="highlight-box">
                             <?php if ($gateway_top_left): ?>
                                <div id="headlines">
                                 <?php print $gateway_top_left; ?>
                             </div>
                             <?php endif; ?>
                             <?php if ($gateway_top_interior): ?>
                                <div id="events">
                                 <?php print $gateway_top_interior; ?>
                             </div>
                             <?php endif; ?>
                             <?php if ($gateway_top_right): ?>
                                <div id="perspectives">
                              <?php print $gateway_top_right; ?>
                             </div>
                             <?php endif; ?>
                             <br class="clear" />
                        </div><!-- /highlight-box -->
                     </div><!-- /this-week-highlights -->
                     <?php endif; ?>
                     <br class="clear" />
                     <?php if ($tabs): print '<ul class="tabs primary">'. $tabs .'</ul>'; endif; ?>
                     <?php if ($tabs2): print '<ul class="tabs secondary">'. $tabs2 .'</ul>'; endif; ?>
                     <?php if ($show_messages && $messages): print $messages; endif; ?>   
                     <?php print $help; ?><?php print $field_video_embed; ?>
                     <?php print $content; ?>
                     <div class="clear">&nbsp;</div>
                 </div><!-- /gateway-layout -->
         	</div><!-- /bottom-stripes -->
      <div class="clear">&nbsp;</div>
          <div id="footer">
              <?php if ($footer):
      			print $footer;
      			endif; ?>
              <p>&copy;<?php print(date(Y)); ?> The University of North Carolina at Asheville</p>
          </div><!-- /footer -->
      	<div class="clear">&nbsp;</div>
      </div><!-- /container -->
      <?php print $closure; ?>
      </body>
      </html>
