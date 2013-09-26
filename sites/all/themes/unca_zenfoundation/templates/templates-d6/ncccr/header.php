<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
    "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" lang="<?php print $language->language; ?>">

<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<title><?php print $head_title; ?></title>
	<?php print $head; ?>
	<meta name="Copyright" content="Copyright <?php print(date(Y)); ?> The University of North Carolina at Asheville" />
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
<link type="text/css" rel="stylesheet" media="all" href="/sites/all/themes/unca/unca_department/css/page.tpl.css?8" />
<link type="text/css" rel="stylesheet" media="all" href="/sites/all/themes/unca/ncccr/css/page.tpl.css" />


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
	<div id="header-ncccr"> 
		<a href="http://www.unca.edu" accesskey="1"><img src="http://www.unca.edu/sites/all/themes/unca/unca_department/imgs/uncasheville-logo.png" alt="go to homepage" width="285" height="65" id="logo" /></a>

			<div id="navigation-utility-wrapper">
			<div id="search">
       			  <form id="searchform" method="get" action="http://www.unca.edu/search-results">
       			   <input class="cse" type="hidden" name="cx" value="000437231783059028413:fmzh8niwczw" />
       			   <input class="cse" type="hidden" name="cof" value="FORID:10" />
                 <input class="cse" type="hidden" name="ie" value="UTF-8" />
                 <input type="hidden" name="group" value="faculty/staff" />
       				<ul class="list-horizontal">
       				  <li>
       					<label for="q" class="accessibility">s</label>
       				  </li>
       				  <li>
       					<input type="text" id="q" value="" name="query" accesskey="4" />
       				  </li>
       				  <li>
       					<img id="search-button-people" src="<?php print $base_path . $directory; ?>/../imgs/search-button-people.png" alt="search for people"/>
       				  </li>
       				  <li>
       					<input type="image" name="sa" id="search-button-web" src="<?php print $base_path . $directory; ?>/../imgs/search-button-web.png" alt="search unca.edu" value="submit" />
       				  </li>
       				</ul>
       			  </form>
       			</div>
       			<!-- /search -->
				<ul id="navigation-utility" class="list-horizontal">
				  <li><a href="http://maps.unca.edu">Maps</a></li>
				  <li class="last"><a href="http://bullpup.lib.unca.edu/library/">Library</a></li>
				  <!--<li><a href="http://learnonline.unca.edu">Moodle</a></li>
				  <li><a href="http://oneport.unca.edu/">OnePort</a></li>
				  <li class="last"><a href="http://webmail.unca.edu/">Email</a></li>--><!-- Removed on 2012-01-11 by Luke Withrow--><!-- /navigation-utility-wrapper -->
				</ul>
			</div>
			
		<div class="clear">&nbsp;</div>
	</div> <!-- /header -->
    <div class="clear">&nbsp;</div>
	<?php $this_page = request_uri(); ?>

	<!--<div id="navigation-primary-wrapper">
		<ul id="navigation-primary" class="list-horizontal">
		  <li><a href="http://www.unca.edu/about" id="about" >About</a></li>
		  <li><a href="http://www.unca.edu/academics" id="academics" >Academics</a></li>
		  <li><a href="http://www.unca.edu/admissions" id="admissions" >Admissions</a></li>
		  <li><a href="http://www.unca.edu/life-campus" id="life-on-campus" >Life on Campus</a></li>
		  <li><a href="http://www.uncabulldogs.com/" id="athletics">Athletics</a></li>
		  <li><a href="http://www.unca.edu/news-events" id="news-and-events" >News &amp; Events</a></li>
		  <li><a href="http://www.unca.edu/centers" id="centers" >Centers</a></li>
			  <li>
       			<div id="search">
       			  <form id="searchform" method="get" action="http://www.unca.edu/search-results">
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
       			<!-- /search ->
		  </li>
		</ul>
	</div> Removed on 2012-01-11 by Luke Withrow-->
	<div id="department-name-wrapper">
		<a href="<?php print check_url($front_page); ?>" accesskey="1"><?php print $site_name; ?>
			<span id="home-icon">&nbsp;</span>
		</a>
	</div>
	<!-- /navigation-primary-wrapper -->
<?PHP //include("http://www.unca.edu/notification");?>