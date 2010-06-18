<?php

/**
 * Implementation of hook_node_info().
 */
function jqoil_forum_node_info() {
  module_load_include('inc', 'jqoil_forum', 'jqoil_forum.features.node');
  $args = func_get_args();
  return call_user_func_array('_jqoil_forum_node_info', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function jqoil_forum_views_default_views() {
  module_load_include('inc', 'jqoil_forum', 'jqoil_forum.features.views');
  $args = func_get_args();
  return call_user_func_array('_jqoil_forum_views_default_views', $args);
}
