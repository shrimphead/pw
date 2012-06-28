<?php
/**
 * @file
 * pw_admin.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_admin_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer add another.
  $permissions['administer add another'] = array(
    'name' => 'administer add another',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'addanother',
  );

  // Exported permission: execute comment_publish_action.
  $permissions['execute comment_publish_action'] = array(
    'name' => 'execute comment_publish_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute comment_save_action.
  $permissions['execute comment_save_action'] = array(
    'name' => 'execute comment_save_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute comment_unpublish_action.
  $permissions['execute comment_unpublish_action'] = array(
    'name' => 'execute comment_unpublish_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute comment_unpublish_by_keyword_action.
  $permissions['execute comment_unpublish_by_keyword_action'] = array(
    'name' => 'execute comment_unpublish_by_keyword_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_assign_owner_action.
  $permissions['execute node_assign_owner_action'] = array(
    'name' => 'execute node_assign_owner_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_make_sticky_action.
  $permissions['execute node_make_sticky_action'] = array(
    'name' => 'execute node_make_sticky_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_make_unsticky_action.
  $permissions['execute node_make_unsticky_action'] = array(
    'name' => 'execute node_make_unsticky_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_promote_action.
  $permissions['execute node_promote_action'] = array(
    'name' => 'execute node_promote_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_publish_action.
  $permissions['execute node_publish_action'] = array(
    'name' => 'execute node_publish_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_save_action.
  $permissions['execute node_save_action'] = array(
    'name' => 'execute node_save_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_unpromote_action.
  $permissions['execute node_unpromote_action'] = array(
    'name' => 'execute node_unpromote_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_unpublish_action.
  $permissions['execute node_unpublish_action'] = array(
    'name' => 'execute node_unpublish_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_unpublish_by_keyword_action.
  $permissions['execute node_unpublish_by_keyword_action'] = array(
    'name' => 'execute node_unpublish_by_keyword_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute pathauto_node_update_action.
  $permissions['execute pathauto_node_update_action'] = array(
    'name' => 'execute pathauto_node_update_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
      2 => 'editorial editor',
      3 => 'page editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute pathauto_taxonomy_term_update_action.
  $permissions['execute pathauto_taxonomy_term_update_action'] = array(
    'name' => 'execute pathauto_taxonomy_term_update_action',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute pathauto_user_update_action.
  $permissions['execute pathauto_user_update_action'] = array(
    'name' => 'execute pathauto_user_update_action',
    'roles' => array(),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute realname_action_realname_update.
  $permissions['execute realname_action_realname_update'] = array(
    'name' => 'execute realname_action_realname_update',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute system_block_ip_action.
  $permissions['execute system_block_ip_action'] = array(
    'name' => 'execute system_block_ip_action',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute system_goto_action.
  $permissions['execute system_goto_action'] = array(
    'name' => 'execute system_goto_action',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute system_message_action.
  $permissions['execute system_message_action'] = array(
    'name' => 'execute system_message_action',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute system_send_email_action.
  $permissions['execute system_send_email_action'] = array(
    'name' => 'execute system_send_email_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute user_block_user_action.
  $permissions['execute user_block_user_action'] = array(
    'name' => 'execute user_block_user_action',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute views_bulk_operations_argument_selector_action.
  $permissions['execute views_bulk_operations_argument_selector_action'] = array(
    'name' => 'execute views_bulk_operations_argument_selector_action',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute views_bulk_operations_delete_item.
  $permissions['execute views_bulk_operations_delete_item'] = array(
    'name' => 'execute views_bulk_operations_delete_item',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute views_bulk_operations_modify_action.
  $permissions['execute views_bulk_operations_modify_action'] = array(
    'name' => 'execute views_bulk_operations_modify_action',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute views_bulk_operations_script_action.
  $permissions['execute views_bulk_operations_script_action'] = array(
    'name' => 'execute views_bulk_operations_script_action',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute views_bulk_operations_user_roles_action.
  $permissions['execute views_bulk_operations_user_roles_action'] = array(
    'name' => 'execute views_bulk_operations_user_roles_action',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: use add another.
  $permissions['use add another'] = array(
    'name' => 'use add another',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'addanother',
  );

  return $permissions;
}