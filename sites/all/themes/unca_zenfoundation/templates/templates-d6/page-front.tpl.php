<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
    "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" lang="<?php print $language->language; ?>">

<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<title><?php print $head_title; ?></title>
	<?php print $head; ?>
	<meta name="Description" content="As a public liberal arts university, the University of North Carolina at Asheville offers undergraduate degree programs in the arts and humanities, the natural and social sciences, and selected pre-professional programs firmly grounded in the liberal arts." />
	<meta name="Keywords" content="university, North Carolina, college, liberal arts, Asheville, student, education, higher education, learning, campus, UNCA, University of North Carolina" />
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
	<link rel="stylesheet" type="text/css" href="<?php print $base_path . $directory; ?>/css/homepage.css" />

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
			initializeSlideshow(712);
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
      	<div id="homepage-main" class="bottom-stripes">
          	<a name="content"></a>
          	<?php if ($home_main): ?><?php print $home_main; ?><?php endif; ?>
            <div id="rail">
              	<ul class="list-unstyled" id="navigation-gateway">
                  		<li><a href="/for-students" id="gateway-students">Students</a></li>
                      	<li><a href="/for-faculty" id="gateway-faculty-staff">Faculty &amp; Staff</a></li>
                      	<li><a href="http://alumni.unca.edu" id="gateway-alumni">Alumni</a></li>
                      	<li><a href="/for-parents" id="gateway-parents-families">Parents &amp; Families</a></li>
                      	<li><a href="/for-the-community" id="gateway-community">The Community</a></li>
                      	<li><a href="/giving" id="gateway-gift">Make a Gift</a></li>
                      	<li class="last"><a href="/admissions/apply" id="gateway-apply">Apply</a></li>
                  	</ul>
      		<span id="navigation-secondary-bottom">&nbsp;</span>
              </div>
          	<div class="clear">&nbsp;</div>

<?php if ($home_left): ?>
   <div id="homepage-events">
   <?php print $home_left; ?>
</div><?php endif; ?>

<?php if ($home_interior): ?>
<div id="homepage-campus-updates">
   <?php print $home_interior; ?>
</div><!-- /campus-updates -->
<?php endif; ?>

<?php if ($home_right): ?>
<div id="homepage-news">
   <?php print $home_right; ?>
</div><!-- /homepage-news -->
<?php endif; ?>

              
              <div class="clear">&nbsp;</div>
          </div><!-- /homepage-main -->
          <div class="clear">&nbsp;</div>
      </div><!-- /content -->
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
