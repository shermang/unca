<?php function ncccr_preprocess_views_exposed_form(&$vars, $hook)
		//This function modifies the "apply" button on the catalog page to instead say "search"
	{
         // only alter the required form based on id
            if ($vars['form']['#id'] == (('views-exposed-form-Courses-page-1') OR ('views-exposed-form-Courses-page-2'))) {
              // Change the text on the submit button
              $vars['form']['submit']['#value'] = t('Search');
              // Rebuild the rendered version (submit button, rest remains unchanged)
              unset($vars['form']['submit']['#printed']);
              $vars['button'] = drupal_render($vars['form']['submit']);
         }
      }
?>