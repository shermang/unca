<?php
/**
 * @file
 * unca_performance_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function unca_performance_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'block_cache';
  $strongarm->value = 1;
  $export['block_cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache';
  $strongarm->value = 1;
  $export['cache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cache_lifetime';
  $strongarm->value = '300';
  $export['cache_lifetime'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_css_cache_files';
  $strongarm->value = array(
    '823ba1006db72809515d2221cd02ec1075d7b49b0c07f49307b3a7930bfdd9e4' => 'public://css/css_pbm0lsQQJ7A7WCCIMgxLho6mI_kBNgznNUWmTWcnfoE.css',
    '592db66916e1dd3416cbe95bcb34a5a68775eb0b7cf95e4c858671de35290cc9' => 'public://css/css_LS9OUalDR9-d_lCAvF3yUWjNU6yF8ZBm84jEPRvoyuQ.css',
    '20852ebded6d6168ee0fd6dfbe36160f1b6fa201d9d0a23d19753d9ceec214c9' => 'public://css/css_al0NSu868U23rRSR-_iAUAbDrfK1IGd6H3aFKf_yTIc.css',
    'f2874e958c91c2941d9c72e0d053e1f68279ab49938f3a2a6092e5d79ab9d3c1' => 'public://css/css_QkyBRCkDiSb2yYc3WUxtVclMZsjbf__RY5ssmNKLhTk.css',
    'ebb3f433ad4107b1ac31e9d7de0f9a5d399040e9f82b6364211dcfaadea158c0' => 'public://css/css_oqN5CdV437xfdYmgt8bEIViSuyXm8o4LLIbW5x0q7XY.css',
    '3664af71767b3c597e36aaf0671f52dcff2663af19708483c9079897028fffb6' => 'public://css/css_vFuyn5e2Co7a9AMEXbFdBNMdk0ltYtuiEtvIpdZm8xg.css',
    'dd5ca6be2a03c1fed8d154aba61290f24c561d1201f0848add347d304f629f75' => 'public://css/css_7LUIcqEVrm7z3Qr65ZcF2p5yXRZXeVxM8A-ygAcb1SU.css',
    '032d72e2b3124645b11e59c23005327dc2b450af6aaa6bf3cad34a6a65a9d774' => 'public://css/css_ZDWl28hdmeinIcKg-HMrN6uKD0nTMld5NlXLmm5MH2U.css',
  );
  $export['drupal_css_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_js_cache_files';
  $strongarm->value = array(
    'e7daacb7a54b0090decffe84d35bb719dd892219514c4d8c2d5f2e7640987ca9' => 'public://js/js_0gj6QcpfRH2jzTbCQqf7kEkm4MXY0UA_sRhwPc8jC1o.js',
    '111d860265abe08204bdf363fb75e432b0104dd26ec9ad3853b748098098279b' => 'public://js/js_KCd8rbJYUruV1tRJnh4um34UYvyhlrSVCPR1jNko2h8.js',
    'ba454f5c13c94c7cada4b5664ce7bffd0ff19e51a428b13f83570e54d6927d81' => 'public://js/js_vjjq-4_zRRXhmcReNRVPUpdt7OnkrLnYCe1A0HMixdg.js',
    '53b4b33de159d5f7c53a5324bdfc17546ae78fb3796a23eee327f8ce27841d8b' => 'public://js/js_3id2bckGHIUdX41Z8z_CdmG3uvSyNlfcmG737sBWNkY.js',
    '34609e0106862139be4805830f50a842a5038c44174b0cb53b57fabb41e0ffe4' => 'public://js/js_Scuf2bxn6BTVTKpQwCw42sePyPgsz6goonjRJ1f6Utk.js',
    '68b465f4f0c5427dc0dd05bf269045ba0961cfc295f5b656a5143849ba44e523' => 'public://js/js_OGWFp3GBlYzh9TDRLrHN5qSBGiGcty22dT56XMUshDs.js',
    '64b6f2a0c64b5b6dc33185b6011192373d75365867ea99e4b6153b2ec85d2565' => 'public://js/js_loJJMZ-yLpCFnc5Htc8xgIMfdfNbw5E30CdocHWSiaM.js',
    'c2ad5f2ddc8c68e87f7ead8761c51ac9eccd9d9c159f2229be42d7af78061acf' => 'public://js/js_p15o7Yp1DvOlao-isyk-Dt0pnSOw9Q_jGsuZU2I1FXA.js',
    'adb94164f121999ba5c649468c408f5f20b45b9716899d8bad634e4cd5224944' => 'public://js/js_gZIoCqkKthRq8B2hKq42_AECzSGwZxxiHPR0e1drjBg.js',
    '0045f54e880c669e5f14b878909f25f20ebda39a49fdbb69bdd4c1977266421e' => 'public://js/js_PKUKsComLkqL5Xk5apJ_WsWLyrlvV_RQWZ7W0KzdluE.js',
    '9daac01e83227cc722943c5ca6acf7943504bd934e6e32e20648299b5c349c7f' => 'public://js/js_hVDtyw4Ti-zuhkx_TtbMmIdZLid8dO8t4jpgAKKfYXU.js',
  );
  $export['drupal_js_cache_files'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_cache_maximum_age';
  $strongarm->value = '300';
  $export['page_cache_maximum_age'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'preprocess_css';
  $strongarm->value = 1;
  $export['preprocess_css'] = $strongarm;

  return $export;
}
