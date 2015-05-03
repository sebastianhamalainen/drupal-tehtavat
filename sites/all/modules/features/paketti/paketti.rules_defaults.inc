<?php
/**
 * @file
 * paketti.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function paketti_default_rules_configuration() {
  $items = array();
  $items['rules_s_nt_'] = entity_import('rules_config', '{ "rules_s_nt_" : {
      "LABEL" : "s\\u00e4\\u00e4nt\\u00f6",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_update" : [] },
      "DO" : [ { "drupal_message" : { "message" : "Node Tallennettu" } } ]
    }
  }');
  return $items;
}
