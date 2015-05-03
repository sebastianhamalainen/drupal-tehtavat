<?php
/**
 * @file
 * paketti.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function paketti_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "backup_migrate" && $api == "backup_migrate_exportables") {
    return array("version" => "1");
  }
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function paketti_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function paketti_image_default_styles() {
  $styles = array();

  // Exported image style: testi1.
  $styles['testi1'] = array(
    'label' => 'testi1',
    'effects' => array(
      1 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 160,
          'height' => 90,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function paketti_node_info() {
  $items = array(
    'type1' => array(
      'name' => t('type1'),
      'base' => 'node_content',
      'description' => t('description of type1'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
