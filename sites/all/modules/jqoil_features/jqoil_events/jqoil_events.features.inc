<?php

/**
 * Implementation of hook_content_default_fields().
 */
function jqoil_events_content_default_fields() {
  module_load_include('inc', 'jqoil_events', 'jqoil_events.defaults');
  $args = func_get_args();
  return call_user_func_array('_jqoil_events_content_default_fields', $args);
}

/**
 * Implementation of hook_node_info().
 */
function jqoil_events_node_info() {
  module_load_include('inc', 'jqoil_events', 'jqoil_events.features.node');
  $args = func_get_args();
  return call_user_func_array('_jqoil_events_node_info', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function jqoil_events_views_default_views() {
  module_load_include('inc', 'jqoil_events', 'jqoil_events.features.views');
  $args = func_get_args();
  return call_user_func_array('_jqoil_events_views_default_views', $args);
}
