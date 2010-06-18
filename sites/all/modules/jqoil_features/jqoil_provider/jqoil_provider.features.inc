<?php

/**
 * Implementation of hook_content_default_fields().
 */
function jqoil_provider_content_default_fields() {
  module_load_include('inc', 'jqoil_provider', 'jqoil_provider.defaults');
  $args = func_get_args();
  return call_user_func_array('_jqoil_provider_content_default_fields', $args);
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function jqoil_provider_imagecache_default_presets() {
  module_load_include('inc', 'jqoil_provider', 'jqoil_provider.defaults');
  $args = func_get_args();
  return call_user_func_array('_jqoil_provider_imagecache_default_presets', $args);
}

/**
 * Implementation of hook_node_info().
 */
function jqoil_provider_node_info() {
  module_load_include('inc', 'jqoil_provider', 'jqoil_provider.features.node');
  $args = func_get_args();
  return call_user_func_array('_jqoil_provider_node_info', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function jqoil_provider_views_default_views() {
  module_load_include('inc', 'jqoil_provider', 'jqoil_provider.features.views');
  $args = func_get_args();
  return call_user_func_array('_jqoil_provider_views_default_views', $args);
}
