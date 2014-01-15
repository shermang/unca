function initializeExpandLinks () {
	$('.gateway-link-section li.hide').hide();
	$('.list-toggle').click(function () {
	   $(this).siblings('.hide').toggle();
	   if ($(this).html()=='More') {
	      $(this).html('Less');
	      }
	   else {
	      $(this).html('More');
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