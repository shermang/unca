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