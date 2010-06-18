<?php

/**
 * Helper to implementation of hook_node_info().
 */
function _jqoil_provider_node_info() {
  $items = array(
    'provider' => array(
      'name' => t('ספק שירות'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('שם'),
      'has_body' => '1',
      'body_label' => t('תיאור'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
