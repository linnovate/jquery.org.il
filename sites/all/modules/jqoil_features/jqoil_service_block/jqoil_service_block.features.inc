<?php

/**
 * Implementation of hook_views_default_views().
 */
function jqoil_service_block_views_default_views() {
  module_load_include('inc', 'jqoil_service_block', 'jqoil_service_block.features.views');
  $args = func_get_args();
  return call_user_func_array('_jqoil_service_block_views_default_views', $args);
}
