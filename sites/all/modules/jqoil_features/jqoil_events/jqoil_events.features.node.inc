<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _jqoil_events_node_info() {
  $items = array(
    'event' => array(
      'name' => t('אירוע'),
      'module' => 'features',
      'description' => t('אירוע מכל סוג שהוא'),
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
