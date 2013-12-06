/**
 * @file
 * Footer javascript, fires last (for the theme)
 *
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth

(function($) {

  // foundation trigger required in footer
  Drupal.behaviors.foundation = {
    attach: function(context){
      $(document).foundation();
    }
  };

})(jQuery);