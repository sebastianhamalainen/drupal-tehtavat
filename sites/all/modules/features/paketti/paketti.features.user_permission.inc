<?php
/**
 * @file
 * paketti.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function paketti_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create type1 content'.
  $permissions['create type1 content'] = array(
    'name' => 'create type1 content',
    'roles' => array(
      'role1' => 'role1',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any type1 content'.
  $permissions['delete any type1 content'] = array(
    'name' => 'delete any type1 content',
    'roles' => array(
      'role1' => 'role1',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own type1 content'.
  $permissions['delete own type1 content'] = array(
    'name' => 'delete own type1 content',
    'roles' => array(
      'role1' => 'role1',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any type1 content'.
  $permissions['edit any type1 content'] = array(
    'name' => 'edit any type1 content',
    'roles' => array(
      'role1' => 'role1',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own type1 content'.
  $permissions['edit own type1 content'] = array(
    'name' => 'edit own type1 content',
    'roles' => array(
      'role1' => 'role1',
    ),
    'module' => 'node',
  );

  return $permissions;
}
