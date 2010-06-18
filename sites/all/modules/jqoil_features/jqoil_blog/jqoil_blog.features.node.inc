<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _jqoil_blog_node_info() {
  $items = array(
    'post' => array(
      'name' => t('פוסט'),
      'module' => 'features',
      'description' => t('פרסום או מאמר קצר או ארוך.'),
      'has_title' => '1',
      'title_label' => t('כותרת'),
      'has_body' => '1',
      'body_label' => t('תוכן'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
