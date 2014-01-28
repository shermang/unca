<?php
/**
 * @file
 * unca_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function unca_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: backpage-spot-image.
  $styles['backpage-spot-image'] = array(
    'name' => 'backpage-spot-image',
    'label' => 'backpage-spot-image',
    'effects' => array(
      7 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 210,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: backpage_fullwidth_image.
  $styles['backpage_fullwidth_image'] = array(
    'name' => 'backpage_fullwidth_image',
    'label' => 'backpage-full-width-image',
    'effects' => array(
      6 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 690,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: campus-updates-banner-image.
  $styles['campus-updates-banner-image'] = array(
    'name' => 'campus-updates-banner-image',
    'label' => 'campus-updates-banner-image',
    'effects' => array(
      5 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 350,
          'height' => 100,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: events-feed-thumbnail-image.
  $styles['events-feed-thumbnail-image'] = array(
    'name' => 'events-feed-thumbnail-image',
    'label' => 'events-feed-thumbnail-image',
    'effects' => array(
      13 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 80,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: featured-media-image.
  $styles['featured-media-image'] = array(
    'name' => 'featured-media-image',
    'label' => 'featured-media-image',
    'effects' => array(
      8 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gateway-links-image.
  $styles['gateway-links-image'] = array(
    'name' => 'gateway-links-image',
    'label' => 'gateway-links-image',
    'effects' => array(
      9 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: news-update-featured-image.
  $styles['news-update-featured-image'] = array(
    'name' => 'news-update-featured-image',
    'label' => 'news-update-featured-image',
    'effects' => array(
      11 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 130,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile-headshot-image.
  $styles['profile-headshot-image'] = array(
    'name' => 'profile-headshot-image',
    'label' => 'profile-headshot-image',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 175,
          'height' => 175,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_image.
  $styles['profile_image'] = array(
    'name' => 'profile_image',
    'label' => 'Profile Image',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 150,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: promo-link-featured-image_.
  $styles['promo-link-featured-image_'] = array(
    'name' => 'promo-link-featured-image_',
    'label' => 'promo-link-featured-image ',
    'effects' => array(
      16 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 80,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: scale_215x215.
  $styles['scale_215x215'] = array(
    'name' => 'scale_215x215',
    'label' => 'scale_215x215',
    'effects' => array(
      1 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 215,
          'height' => 215,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: scale_crop_160x90.
  $styles['scale_crop_160x90'] = array(
    'name' => 'scale_crop_160x90',
    'label' => 'scale_crop_160x90',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 160,
          'height' => 90,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: scale_crop_50x50.
  $styles['scale_crop_50x50'] = array(
    'name' => 'scale_crop_50x50',
    'label' => 'scale_crop_50x50',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: scale_crop_680x382.
  $styles['scale_crop_680x382'] = array(
    'name' => 'scale_crop_680x382',
    'label' => 'scale_crop_680x382',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 680,
          'height' => 382,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: scale_crop_75x75.
  $styles['scale_crop_75x75'] = array(
    'name' => 'scale_crop_75x75',
    'label' => 'scale_crop_75x75',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 75,
          'height' => 75,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: subsite-hero-image.
  $styles['subsite-hero-image'] = array(
    'name' => 'subsite-hero-image',
    'label' => 'subsite-hero-image',
    'effects' => array(
      14 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 340,
          'height' => 226,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
