// initializeSearchBox
// Description: used to set an initial value for the search 
//  box, clear it when the user clicks into it and
//  reset the value if no text was entered
function initializeSearchBox() {
  console.log("initialize search");
	var inputPrompt = "";
	jQuery("#edit-search-block-form--2").val(inputPrompt);

	jQuery("#edit-search-block-form--2").focus(function(){
		if (jQuery(this).val() == inputPrompt) {
			jQuery(this).val("");
		}
	});
	jQuery("#edit-search-block-form--2").blur(function(){
		if (jQuery(this).val() == "") {
			jQuery(this).val(inputPrompt);
		}
	});
}

//searchAction
//Description: used to determine the form action, searching the web or directory
function searchPeople() {
	document.getElementById('edit-search-block-form--2').name = "query";
    var form = document.getElementById('search-block-form');
    form.action = 'http://www3.unca.edu/directory/';
    form.method = 'POST'
    jQuery('.cse').remove();
    form.submit();
}

// initializeNavigationSecondary
// Description: used to create expandable subnavigation menus
function initializeNavigationSecondary () {
	//close open menus and change the trigger image
	if($.browser.msie && $.browser.version == "6.0") {
	   return;
	}
	jQuery('.navigation-secondary ul.menu li ul').hide();
	jQuery('.navigation-secondary ul.menu li.active-trail ul').show();
	jQuery('.navigation-secondary ul.menu li.active-trail ul li ul').hide();
	jQuery('.navigation-secondary ul.menu li.active-trail ul li.active-trail ul').show();
	jQuery(".navigation-secondary ul.menu li.expanded ul").before("<span class='trigger trigger-closed'/>");
	jQuery('.navigation-secondary ul.menu li.active-trail span').toggleClass('trigger-closed');	
	jQuery('.navigation-secondary ul.menu li.active-trail ul li span').toggleClass('trigger-closed');
	jQuery('.navigation-secondary ul.menu li.active-trail ul li.active-trail span').toggleClass('trigger-closed');
	jQuery('.trigger').click(function() {
		jQuery(this).toggleClass('trigger-closed');
		jQuery(this).siblings('ul').toggle();
		return false;
	});
}

function initializeSlideshow(width) {
	var currentPosition = 0;
	var slideWidth = width;
	var slides = jQuery('.slide');
	var numberOfSlides = slides.length;
	
	// Remove scrollbar in JS
	jQuery('#slidesContainer').css('overflow', 'hidden');
	
	// Wrap all .slides with #slideInner div
	slides
		.wrapAll('<div id="slideInner"></div>')
		// Float left to display horizontally, readjust .slides width
		.css({
			'float' : 'left',
			'width' : slideWidth
		});
		
	// Set #slideInner width equal to total width of all slides
	jQuery('#slideInner').css('width', slideWidth * numberOfSlides);
		
	// Insert left and right arrow controls in the DOM
	jQuery('#slideshow')
		.append('<span class="control" id="leftControl">Move left</span>')
		.append('<span class="control" id="rightControl">Move right</span>');
		
	// Hide left arrow control on first load
	manageControls(currentPosition);
		
	// Create event listeners for .controls clicks
	jQuery('.control').bind('click', function(){
		// Determine new position
		currentPosition = (jQuery(this).attr('id')=='rightControl')
		? currentPosition+1 : currentPosition-1;
		
		// Hide / show controls
		manageControls(currentPosition);
		// Move slideInner using margin-left
		jQuery('#slideInner').animate({
			'marginLeft' : slideWidth*(-currentPosition)
		});
	});
		
	// manageControls: Hides and shows controls depending on currentPosition
	function manageControls(position){
		// Hide left arrow if position is first slide
		if(position==0){ jQuery('#leftControl').hide() }
		else{ jQuery('#leftControl').show() }
		// Hide right arrow if position is last slide
		if(position==numberOfSlides-1){ jQuery('#rightControl').hide() }
		else{ jQuery('#rightControl').show() }
		}
}
function initializeExpandLinks () {
	jQuery('.gateway-link-section li.hide').hide();
	jQuery('.list-toggle').click(function () {
	   jQuery(this).siblings('.hide').toggle();
	   if (jQuery(this).html()=='More') {
	      jQuery(this).html('Less');
	      }
	   else {
	      jQuery(this).html('More');
	      }
   });
}

