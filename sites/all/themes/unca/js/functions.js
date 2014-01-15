// initializeSearchBox
// Description: used to set an initial value for the search 
//  box, clear it when the user clicks into it and
//  reset the value if no text was entered
function initializeSearchBox() {
	var inputPrompt = "Search people and the Web";
	$("#q").val(inputPrompt); 

	$("#q").focus(function(){		
		if ($(this).val() == inputPrompt) {
			$(this).val(""); 
		}
	});
	$("#q").blur(function(){		
		if ($(this).val() == "") {
			$(this).val(inputPrompt); 
		}
	});
}

//searchAction
//Description: used to determine the form action, searching the web or directory
function initializeSearchAction() {
document.getElementById('search-button-people').onclick = function() {

    var form = document.getElementById('searchform');

    form.action = 'http://www3.unca.edu/directory/';
    form.method = 'POST'
    $('.cse').remove();

    form.submit();
}
}

// initializeNavigationSecondary
// Description: used to create expandable subnavigation menus
function initializeNavigationSecondary () {
	//close open menus and change the trigger image
	if($.browser.msie && $.browser.version == "6.0") {
	   return;
	}
	$('.navigation-secondary ul.menu li ul').hide();
	$('.navigation-secondary ul.menu li.active-trail ul').show();
	$('.navigation-secondary ul.menu li.active-trail ul li ul').hide();
	$('.navigation-secondary ul.menu li.active-trail ul li.active-trail ul').show();
	$(".navigation-secondary ul.menu li.expanded ul").before("<span class='trigger trigger-closed'/>");
	$('.navigation-secondary ul.menu li.active-trail span').toggleClass('trigger-closed');	
	$('.navigation-secondary ul.menu li.active-trail ul li span').toggleClass('trigger-closed');
	$('.navigation-secondary ul.menu li.active-trail ul li.active-trail span').toggleClass('trigger-closed');
	$('.trigger').click(function() {
		$(this).toggleClass('trigger-closed');
		$(this).siblings('ul').toggle();
		return false;
	});
}

function initializeSlideshow(width) {
	var currentPosition = 0;
	var slideWidth = width;
	var slides = $('.slide');
	var numberOfSlides = slides.length;
	
	// Remove scrollbar in JS
	$('#slidesContainer').css('overflow', 'hidden');
	
	// Wrap all .slides with #slideInner div
	slides
		.wrapAll('<div id="slideInner"></div>')
		// Float left to display horizontally, readjust .slides width
		.css({
			'float' : 'left',
			'width' : slideWidth
		});
		
	// Set #slideInner width equal to total width of all slides
	$('#slideInner').css('width', slideWidth * numberOfSlides);
		
	// Insert left and right arrow controls in the DOM
	$('#slideshow')
		.append('<span class="control" id="leftControl">Move left</span>')
		.append('<span class="control" id="rightControl">Move right</span>');
		
	// Hide left arrow control on first load
	manageControls(currentPosition);
		
	// Create event listeners for .controls clicks
	$('.control').bind('click', function(){
		// Determine new position
		currentPosition = ($(this).attr('id')=='rightControl')
		? currentPosition+1 : currentPosition-1;
		
		// Hide / show controls
		manageControls(currentPosition);
		// Move slideInner using margin-left
		$('#slideInner').animate({
			'marginLeft' : slideWidth*(-currentPosition)
		});
	});
		
	// manageControls: Hides and shows controls depending on currentPosition
	function manageControls(position){
		// Hide left arrow if position is first slide
		if(position==0){ $('#leftControl').hide() }
		else{ $('#leftControl').show() }
		// Hide right arrow if position is last slide
		if(position==numberOfSlides-1){ $('#rightControl').hide() }
		else{ $('#rightControl').show() }
		}
}
