<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _jqoil_forum_node_info() {
  $items = array(
    'discussion' => array(
      'name' => t('דיון'),
      'module' => 'features',
      'description' => t('דיון קהילתי בכל נושא. '),
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
