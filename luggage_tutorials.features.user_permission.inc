<?php
/**
 * @file
 * luggage_tutorials.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_tutorials_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create tutorial content'.
  $permissions['create tutorial content'] = array(
    'name' => 'create tutorial content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any tutorial content'.
  $permissions['delete any tutorial content'] = array(
    'name' => 'delete any tutorial content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own tutorial content'.
  $permissions['delete own tutorial content'] = array(
    'name' => 'delete own tutorial content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any tutorial content'.
  $permissions['edit any tutorial content'] = array(
    'name' => 'edit any tutorial content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own tutorial content'.
  $permissions['edit own tutorial content'] = array(
    'name' => 'edit own tutorial content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
