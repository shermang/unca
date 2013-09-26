/**
 * jQuery plugin: ARIALandmark
 * Description: Add ARIA landmarks to a page at runtime. Allows ARIA roles to be added while still
 *  Allowing the page pass W3C Validators
 * Usage: $('#pnav').ARIALandmark('navigation','primary');
 * @param ARIA Landmark
 * @param title (optional)
 */

jQuery.fn.ARIALandmark = function(landmark, title) {
	this.attr("role",landmark);
	var tmp = this.attr("title");

	if (tmp != undefined && title !="") {
		this.attr("title", title);
	}
};