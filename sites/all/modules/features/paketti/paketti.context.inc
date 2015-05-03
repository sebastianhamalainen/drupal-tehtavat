<?php
/**
 * @file
 * paketti.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function paketti_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'otsikot';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        10 => 10,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
        'anonymous user' => 'anonymous user',
        'role1' => 'role1',
        'role2' => 'role2',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-otsikot-block' => array(
          'module' => 'views',
          'delta' => 'otsikot-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['otsikot'] = $context;

  return $export;
}
