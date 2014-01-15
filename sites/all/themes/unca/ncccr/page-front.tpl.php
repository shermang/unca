<?php include ("sites/all/themes/unca/ncccr/header.php"); ?>

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
         <div id="content-inner" class="bottom-stripes">
         <?php
         if (arg(0) == "node" && is_numeric(arg(1))) {
              $node_type = $variables['node']->type;
              if ($node_type == "news_article") {
                 $display_title = "News &amp; Events";
                 $menu = news_menu();
              }
              elseif ($node_type == "profile") {
                 $display_title = "Faces of UNC Asheville";
                 $menu = profiles_menu();
              }
              else {
                 $display_title = $title;
                 $menu = unca_menu();
              }}
              else {
                   $display_title = $title;
                   $menu = unca_menu();
                }           
         if(isset($menu) OR isset($right_column)) {
            $main_class = 'grid_4';
         }
         else {
            $main_class = 'grid_3';
         }
         ?>
		 
         <div class="<?php print $main_class; ?>" id="main">
            <a name="content" id="content"></a>
            <h1>
               <?php print $display_title; ?>
            </h1>
            <?php if ($tabs): print '<ul class="tabs primary">'. $tabs .'</ul>'; endif; ?>
            <?php if ($tabs2): print '<ul class="tabs secondary">'. $tabs2 .'</ul>'; endif; ?>
            <?php if ($show_messages && $messages): print $messages; endif; ?>   
            <?php print $help; ?><?php print $field_video_embed; ?>
			            <div class="two-column">
               <?php if ($content_top_left): ?>
               <div class="first-column">
                  <?php print $content_top_left; ?>
               </div><?php endif; ?><?php if ($content_top_right): ?>
               <div class="last-column">
                  <?php print $content_top_right; ?>
               </div>
               <div class="clear">
                  &nbsp;
               </div><?php endif; ?>
            </div><!-- /two-column -->
            <?php if ($content_top): ?>
            <div class="content-top">
               <?php print $content_top; ?>
            </div><?php endif; ?>

            <?php print $content; ?>
            <div class="two-column">
               <?php if ($content_bottom_left): ?>
               <div class="first-column">
                  <?php print $content_bottom_left; ?>
               </div><?php endif; ?><?php if ($content_bottom_right): ?>
               <div class="last-column">
                  <?php print $content_bottom_right; ?>
               </div>
               <div class="clear">
                  &nbsp;
               </div><?php endif; ?>
            </div><!-- /two-column -->
            <?php if ($content_bottom): ?>
            <div class="content-bottom">
               <?php print $content_bottom; ?>
            </div><?php endif; ?>
         </div><!-- /main -->
         <?php if(isset($menu) OR isset($right_column)):?>
            
         <div class="grid_1" id="rail">
            <?php if(isset($menu)): ?>
            <div class="navigation-secondary">
            <?php print $menu; ?>
            <div class="clear">&nbsp;</div>
            </div><!-- /navigation-secondary -->
            <span id="navigation-secondary-bottom"></span> 
            <?php endif;?>
            <?php if ($right_column): ?> <?php print $right_column; ?> <?php endif; ?>
         </div><!-- /rail -->
         <?php endif; ?>
         <div class="clear">
            &nbsp;
         </div>
         </div><!-- /content-inner -->
      </div><!-- /content -->
      <div id="bottom-spiffs">
      	<?php if ($footer_spiff_left): ?>
      	<div class="column first">
      		<?php print $footer_spiff_left; ?>
          </div>
      	<?php endif; ?>
          <?php if ($footer_spiff_interior): ?>
      	<div class="column interior">
      		<?php print $footer_spiff_interior; ?>
          </div>
      	<?php endif; ?>
          <?php if ($footer_spiff_right): ?>
      	<div class="column first">
      		<?php print $footer_spiff_right; ?>
          </div>
      	<?php endif; ?>
      </div>
      <div class="clear">&nbsp;</div>
              <?php include ("sites/all/themes/unca/footer.php"); ?>
      	<div class="clear">&nbsp;</div>
      </div><!-- /container -->
      <?php print $closure; ?>
      </body>
      </html>
