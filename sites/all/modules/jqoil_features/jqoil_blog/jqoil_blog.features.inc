<?php

/**
 * Implementation of hook_node_info().
 */
function jqoil_blog_node_info() {
  module_load_include('inc', 'jqoil_blog', 'jqoil_blog.features.node');
  $args = func_get_args();
  return call_user_func_array('_jqoil_blog_node_info', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function jqoil_blog_views_default_views() {
  module_load_include('inc', 'jqoil_blog', 'jqoil_blog.features.views');
  $args = func_get_args();
  return call_user_func_array('_jqoil_blog_views_default_views', $args);
}
