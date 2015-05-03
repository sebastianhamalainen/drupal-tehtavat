<?php
/**
 * @file
 * paketti.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function paketti_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_type1:node/add/type1
  $menu_links['navigation_type1:node/add/type1'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/type1',
    'router_path' => 'node/add/type1',
    'link_title' => 'type1',
    'options' => array(
      'attributes' => array(
        'title' => 'description of type1',
      ),
      'identifier' => 'navigation_type1:node/add/type1',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('type1');


  return $menu_links;
}
