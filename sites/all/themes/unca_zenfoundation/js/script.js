/**
 * @file
 * A JavaScript file for the theme.
 *
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth

(function($) {

  // Adding the needed "dropdown" class to second-level and below
  // $("nav.top-bar ul.main-menu ul").addClass("dropdown");

  // // mobile nav bar behavior
  // Drupal.behaviors.topNav = {
  //   attach: function(context) {
  //     var icon = '';
  //     $('.trigger-link').toggle(function(){
  //       icon = $(this).text();
  //       $(this).text('-').siblings('.dropdown-nav').addClass('show').parent('.has-dropdown-trigger').addClass('click-expanded').prev().addClass('pre-click-expanded');
  //     }, function(){
  //       $(this).text(icon).siblings('.dropdown-nav').removeClass('show').parent('.has-dropdown-trigger').removeClass('click-expanded').prev().removeClass('pre-click-expanded');
  //     });
  //   }
  // };


  function initExpandingNav (selector) {

    // Get items with children
    var parents = $(selector + ' li').has('ul');

    // Add expand/collapse buttons
    parents.children('a').after('<span class="js-trigger"></span>');

    // Init all branches as collapsed
    parents.not('.active-trail').addClass('js-collapsed').children('.js-trigger').addClass('trigger-closed');
    
    // Add toggle event for expand/collapse buttons
    $(selector + ' .js-trigger').click(function() {

      // clicked menu item
      var item = $(this).parent();
      // Toggle state
      if(item.hasClass('js-collapsed')) {
        item.removeClass('js-collapsed').addClass('js-expanded');
        $(this).removeClass('trigger-closed');
      } else {
        item.removeClass('js-expanded').addClass('js-collapsed');
        $(this).addClass('trigger-closed');
      }
    //  return false;
    });

  }
  $(document).ready(function() {
    initExpandingNav('.sidebar .block-menu-menu-secondary-navigation---prot');
  });
  // initExpandingNav('.secondary-nav-mini');

})(jQuery);
