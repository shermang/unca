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
  console.log("script.js is working");

})(jQuery);