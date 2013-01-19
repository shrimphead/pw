<?php
/**
 * @file
 * pw_vars.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_vars_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access backup and migrate.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access backup files.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'classified editor',
      4 => 'digital edition editor',
      5 => 'display ad client',
      6 => 'display ad editor',
      7 => 'editorial editor',
      8 => 'page editor',
      9 => 'sales',
      10 => 'submit ad',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'classified editor',
      4 => 'digital edition editor',
      5 => 'display ad client',
      6 => 'display ad editor',
      7 => 'editorial editor',
      8 => 'page editor',
      9 => 'sales',
      10 => 'submit ad',
      11 => 'user editor',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'sales',
      7 => 'user editor',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'sales',
      7 => 'user editor',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access dashboard.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'sales',
      7 => 'user editor',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: access environment indicator.
  $permissions['access environment indicator'] = array(
    'name' => 'access environment indicator',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'environment_indicator',
  );

  // Exported permission: access private fields.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'user editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site-wide contact form.
  $permissions['access site-wide contact form'] = array(
    'name' => 'access site-wide contact form',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'classified editor',
      4 => 'digital edition editor',
      5 => 'display ad client',
      6 => 'display ad editor',
      7 => 'editorial editor',
      8 => 'page editor',
      9 => 'sales',
      10 => 'submit ad',
    ),
    'module' => 'contact',
  );

  // Exported permission: access user contact forms.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'classified editor',
      4 => 'digital edition editor',
      5 => 'display ad client',
      6 => 'display ad editor',
      7 => 'editorial editor',
      8 => 'page editor',
      9 => 'sales',
      10 => 'submit ad',
    ),
    'module' => 'contact',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'classified editor',
      4 => 'digital edition editor',
      5 => 'display ad client',
      6 => 'display ad editor',
      7 => 'editorial editor',
      8 => 'page editor',
      9 => 'sales',
      10 => 'submit ad',
      11 => 'user editor',
    ),
    'module' => 'user',
  );

  // Exported permission: admin_classes.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: admin_display_suite.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: admin_fields.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: admin_view_modes.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

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

  // Exported permission: administer aes.
  $permissions['administer aes'] = array(
    'name' => 'administer aes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'aes',
  );

  // Exported permission: administer backup and migrate.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer comments.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer contact forms.
  $permissions['administer contact forms'] = array(
    'name' => 'administer contact forms',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'contact',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer contexts.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(),
    'module' => 'context_ui',
  );

  // Exported permission: administer delta.
  $permissions['administer delta'] = array(
    'name' => 'administer delta',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'delta_ui',
  );

  // Exported permission: administer delta blocks.
  $permissions['administer delta blocks'] = array(
    'name' => 'administer delta blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'delta_blocks',
  );

  // Exported permission: administer dependencies.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: administer exclude node title.
  $permissions['administer exclude node title'] = array(
    'name' => 'administer exclude node title',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'exclude_node_title',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer field permissions.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: administer fieldgroups.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: administer file types.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: administer files.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer lightbox2.
  $permissions['administer lightbox2'] = array(
    'name' => 'administer lightbox2',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: administer masquerade.
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: administer media.
  $permissions['administer media'] = array(
    'name' => 'administer media',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'media',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer module filter.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer page manager.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: administer page titles.
  $permissions['administer page titles'] = array(
    'name' => 'administer page titles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'page_title',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer realname.
  $permissions['administer realname'] = array(
    'name' => 'administer realname',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'realname',
  );

  // Exported permission: administer redirects.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: administer rules.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: administer scheduler.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: administer schema.
  $permissions['administer schema'] = array(
    'name' => 'administer schema',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'schema',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer string overrides.
  $permissions['administer string overrides'] = array(
    'name' => 'administer string overrides',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'stringoverrides',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer user field roles.
  $permissions['administer user field roles'] = array(
    'name' => 'administer user field roles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user_role_field',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass file access.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass rules access.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'classified editor',
      3 => 'digital edition editor',
      4 => 'display ad client',
      5 => 'display ad editor',
      6 => 'editorial editor',
      7 => 'page editor',
      8 => 'sales',
    ),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: clone node.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
    ),
    'module' => 'clone',
  );

  // Exported permission: clone own nodes.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
    ),
    'module' => 'clone',
  );

  // Exported permission: create ad_s content.
  $permissions['create ad_s content'] = array(
    'name' => 'create ad_s content',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'classified editor',
      3 => 'digital edition editor',
      4 => 'display ad client',
      5 => 'display ad editor',
      6 => 'editorial editor',
      7 => 'page editor',
      8 => 'sales',
      9 => 'submit ad',
      10 => 'user editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create adworks_file content.
  $permissions['create adworks_file content'] = array(
    'name' => 'create adworks_file content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create article content.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editorial editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create attachment content.
  $permissions['create attachment content'] = array(
    'name' => 'create attachment content',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
      2 => 'editorial editor',
      3 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create classified content.
  $permissions['create classified content'] = array(
    'name' => 'create classified content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'sales',
    ),
    'module' => 'node',
  );

  // Exported permission: create display_ads content.
  $permissions['create display_ads content'] = array(
    'name' => 'create display_ads content',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create files.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create pw_digital content.
  $permissions['create pw_digital content'] = array(
    'name' => 'create pw_digital content',
    'roles' => array(
      0 => 'administrator',
      1 => 'digital edition editor',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: create webform content.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ad_s content.
  $permissions['delete any ad_s content'] = array(
    'name' => 'delete any ad_s content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any adworks_file content.
  $permissions['delete any adworks_file content'] = array(
    'name' => 'delete any adworks_file content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any article content.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editorial editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any attachment content.
  $permissions['delete any attachment content'] = array(
    'name' => 'delete any attachment content',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
      2 => 'editorial editor',
      3 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any classified content.
  $permissions['delete any classified content'] = array(
    'name' => 'delete any classified content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any display_ads content.
  $permissions['delete any display_ads content'] = array(
    'name' => 'delete any display_ads content',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any files.
  $permissions['delete any files'] = array(
    'name' => 'delete any files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: delete any page content.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any pw_digital content.
  $permissions['delete any pw_digital content'] = array(
    'name' => 'delete any pw_digital content',
    'roles' => array(
      0 => 'administrator',
      1 => 'digital edition editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any webform content.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete backup files.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: delete own ad_s content.
  $permissions['delete own ad_s content'] = array(
    'name' => 'delete own ad_s content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own adworks_file content.
  $permissions['delete own adworks_file content'] = array(
    'name' => 'delete own adworks_file content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own article content.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editorial editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own attachment content.
  $permissions['delete own attachment content'] = array(
    'name' => 'delete own attachment content',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
      2 => 'editorial editor',
      3 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own classified content.
  $permissions['delete own classified content'] = array(
    'name' => 'delete own classified content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'sales',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own display_ads content.
  $permissions['delete own display_ads content'] = array(
    'name' => 'delete own display_ads content',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own files.
  $permissions['delete own files'] = array(
    'name' => 'delete own files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: delete own page content.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own pw_digital content.
  $permissions['delete own pw_digital content'] = array(
    'name' => 'delete own pw_digital content',
    'roles' => array(
      0 => 'administrator',
      1 => 'digital edition editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own webform content.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'editorial editor',
      2 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
      2 => 'editorial editor',
      3 => 'page editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 4.
  $permissions['delete terms in 4'] = array(
    'name' => 'delete terms in 4',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
      2 => 'editorial editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 5.
  $permissions['delete terms in 5'] = array(
    'name' => 'delete terms in 5',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: download original image.
  $permissions['download original image'] = array(
    'name' => 'download original image',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'classified editor',
      3 => 'digital edition editor',
      4 => 'display ad client',
      5 => 'display ad editor',
      6 => 'editorial editor',
      7 => 'page editor',
      8 => 'sales',
    ),
    'module' => 'lightbox2',
  );

  // Exported permission: edit any ad_s content.
  $permissions['edit any ad_s content'] = array(
    'name' => 'edit any ad_s content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any adworks_file content.
  $permissions['edit any adworks_file content'] = array(
    'name' => 'edit any adworks_file content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any article content.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editorial editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any attachment content.
  $permissions['edit any attachment content'] = array(
    'name' => 'edit any attachment content',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
      2 => 'editorial editor',
      3 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any classified content.
  $permissions['edit any classified content'] = array(
    'name' => 'edit any classified content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any display_ads content.
  $permissions['edit any display_ads content'] = array(
    'name' => 'edit any display_ads content',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any files.
  $permissions['edit any files'] = array(
    'name' => 'edit any files',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit any page content.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any pw_digital content.
  $permissions['edit any pw_digital content'] = array(
    'name' => 'edit any pw_digital content',
    'roles' => array(
      0 => 'administrator',
      1 => 'digital edition editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any webform content.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit media.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'media',
  );

  // Exported permission: edit own ad_s content.
  $permissions['edit own ad_s content'] = array(
    'name' => 'edit own ad_s content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own adworks_file content.
  $permissions['edit own adworks_file content'] = array(
    'name' => 'edit own adworks_file content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own article content.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editorial editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own attachment content.
  $permissions['edit own attachment content'] = array(
    'name' => 'edit own attachment content',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
      2 => 'editorial editor',
      3 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own classified content.
  $permissions['edit own classified content'] = array(
    'name' => 'edit own classified content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'sales',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad client',
      4 => 'display ad editor',
      5 => 'editorial editor',
      6 => 'page editor',
      7 => 'sales',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own display_ads content.
  $permissions['edit own display_ads content'] = array(
    'name' => 'edit own display_ads content',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own files.
  $permissions['edit own files'] = array(
    'name' => 'edit own files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: edit own page content.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own pw_digital content.
  $permissions['edit own pw_digital content'] = array(
    'name' => 'edit own pw_digital content',
    'roles' => array(
      0 => 'administrator',
      1 => 'digital edition editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own webform content.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit pennywise settings.
  $permissions['edit pennywise settings'] = array(
    'name' => 'edit pennywise settings',
    'roles' => array(),
    'module' => 'pennywise',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
      2 => 'editorial editor',
      3 => 'page editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 4.
  $permissions['edit terms in 4'] = array(
    'name' => 'edit terms in 4',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
      2 => 'editorial editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 5.
  $permissions['edit terms in 5'] = array(
    'name' => 'edit terms in 5',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: enter ad_s revision log entry.
  $permissions['enter ad_s revision log entry'] = array(
    'name' => 'enter ad_s revision log entry',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: enter adworks_file revision log entry.
  $permissions['enter adworks_file revision log entry'] = array(
    'name' => 'enter adworks_file revision log entry',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: enter article revision log entry.
  $permissions['enter article revision log entry'] = array(
    'name' => 'enter article revision log entry',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: enter attachment revision log entry.
  $permissions['enter attachment revision log entry'] = array(
    'name' => 'enter attachment revision log entry',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: enter classified revision log entry.
  $permissions['enter classified revision log entry'] = array(
    'name' => 'enter classified revision log entry',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: enter display_ads revision log entry.
  $permissions['enter display_ads revision log entry'] = array(
    'name' => 'enter display_ads revision log entry',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: enter page revision log entry.
  $permissions['enter page revision log entry'] = array(
    'name' => 'enter page revision log entry',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: enter pw_digital revision log entry.
  $permissions['enter pw_digital revision log entry'] = array(
    'name' => 'enter pw_digital revision log entry',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: enter webform revision log entry.
  $permissions['enter webform revision log entry'] = array(
    'name' => 'enter webform revision log entry',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: exclude any node title.
  $permissions['exclude any node title'] = array(
    'name' => 'exclude any node title',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'exclude_node_title',
  );

  // Exported permission: exclude own node title.
  $permissions['exclude own node title'] = array(
    'name' => 'exclude own node title',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'exclude_node_title',
  );

  // Exported permission: execute comment_publish_action.
  $permissions['execute comment_publish_action'] = array(
    'name' => 'execute comment_publish_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'sales',
      7 => 'user editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute comment_save_action.
  $permissions['execute comment_save_action'] = array(
    'name' => 'execute comment_save_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'user editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute comment_unpublish_action.
  $permissions['execute comment_unpublish_action'] = array(
    'name' => 'execute comment_unpublish_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'sales',
      7 => 'user editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute comment_unpublish_by_keyword_action.
  $permissions['execute comment_unpublish_by_keyword_action'] = array(
    'name' => 'execute comment_unpublish_by_keyword_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'sales',
      7 => 'user editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_assign_owner_action.
  $permissions['execute node_assign_owner_action'] = array(
    'name' => 'execute node_assign_owner_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
      2 => 'user editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_make_sticky_action.
  $permissions['execute node_make_sticky_action'] = array(
    'name' => 'execute node_make_sticky_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'sales',
      7 => 'user editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_make_unsticky_action.
  $permissions['execute node_make_unsticky_action'] = array(
    'name' => 'execute node_make_unsticky_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'sales',
      7 => 'user editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_promote_action.
  $permissions['execute node_promote_action'] = array(
    'name' => 'execute node_promote_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'sales',
      7 => 'user editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_publish_action.
  $permissions['execute node_publish_action'] = array(
    'name' => 'execute node_publish_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'sales',
      7 => 'user editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_save_action.
  $permissions['execute node_save_action'] = array(
    'name' => 'execute node_save_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'user editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_unpromote_action.
  $permissions['execute node_unpromote_action'] = array(
    'name' => 'execute node_unpromote_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_unpublish_action.
  $permissions['execute node_unpublish_action'] = array(
    'name' => 'execute node_unpublish_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'sales',
      7 => 'user editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute node_unpublish_by_keyword_action.
  $permissions['execute node_unpublish_by_keyword_action'] = array(
    'name' => 'execute node_unpublish_by_keyword_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'user editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute pathauto_node_update_action.
  $permissions['execute pathauto_node_update_action'] = array(
    'name' => 'execute pathauto_node_update_action',
    'roles' => array(
      0 => 'administrator',
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
      1 => 'user editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute system_block_ip_action.
  $permissions['execute system_block_ip_action'] = array(
    'name' => 'execute system_block_ip_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'user editor',
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
      1 => 'user editor',
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
      5 => 'user editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute user_block_user_action.
  $permissions['execute user_block_user_action'] = array(
    'name' => 'execute user_block_user_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'user editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute views_bulk_operations_argument_selector_action.
  $permissions['execute views_bulk_operations_argument_selector_action'] = array(
    'name' => 'execute views_bulk_operations_argument_selector_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'user editor',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute views_bulk_operations_delete_item.
  $permissions['execute views_bulk_operations_delete_item'] = array(
    'name' => 'execute views_bulk_operations_delete_item',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'sales',
    ),
    'module' => 'actions_permissions',
  );

  // Exported permission: execute views_bulk_operations_modify_action.
  $permissions['execute views_bulk_operations_modify_action'] = array(
    'name' => 'execute views_bulk_operations_modify_action',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
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

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: grant content access.
  $permissions['grant content access'] = array(
    'name' => 'grant content access',
    'roles' => array(
      0 => 'administrator',
      1 => 'digital edition editor',
    ),
    'module' => 'content_access',
  );

  // Exported permission: grant own content access.
  $permissions['grant own content access'] = array(
    'name' => 'grant own content access',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'classified editor',
      3 => 'digital edition editor',
      4 => 'display ad client',
      5 => 'display ad editor',
      6 => 'editorial editor',
      7 => 'page editor',
      8 => 'sales',
      9 => 'user editor',
    ),
    'module' => 'content_access',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'media',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: masquerade as admin.
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: masquerade as user.
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: override ad_s authored by option.
  $permissions['override ad_s authored by option'] = array(
    'name' => 'override ad_s authored by option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override ad_s authored on option.
  $permissions['override ad_s authored on option'] = array(
    'name' => 'override ad_s authored on option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override ad_s promote to front page option.
  $permissions['override ad_s promote to front page option'] = array(
    'name' => 'override ad_s promote to front page option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override ad_s revision option.
  $permissions['override ad_s revision option'] = array(
    'name' => 'override ad_s revision option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override ad_s sticky option.
  $permissions['override ad_s sticky option'] = array(
    'name' => 'override ad_s sticky option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override adworks_file authored by option.
  $permissions['override adworks_file authored by option'] = array(
    'name' => 'override adworks_file authored by option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override adworks_file authored on option.
  $permissions['override adworks_file authored on option'] = array(
    'name' => 'override adworks_file authored on option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override adworks_file promote to front page option.
  $permissions['override adworks_file promote to front page option'] = array(
    'name' => 'override adworks_file promote to front page option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override adworks_file published option.
  $permissions['override adworks_file published option'] = array(
    'name' => 'override adworks_file published option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override adworks_file revision option.
  $permissions['override adworks_file revision option'] = array(
    'name' => 'override adworks_file revision option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override adworks_file sticky option.
  $permissions['override adworks_file sticky option'] = array(
    'name' => 'override adworks_file sticky option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override article authored by option.
  $permissions['override article authored by option'] = array(
    'name' => 'override article authored by option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override article authored on option.
  $permissions['override article authored on option'] = array(
    'name' => 'override article authored on option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override article promote to front page option.
  $permissions['override article promote to front page option'] = array(
    'name' => 'override article promote to front page option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override article published option.
  $permissions['override article published option'] = array(
    'name' => 'override article published option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override article revision option.
  $permissions['override article revision option'] = array(
    'name' => 'override article revision option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override article sticky option.
  $permissions['override article sticky option'] = array(
    'name' => 'override article sticky option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override attachment authored by option.
  $permissions['override attachment authored by option'] = array(
    'name' => 'override attachment authored by option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override attachment authored on option.
  $permissions['override attachment authored on option'] = array(
    'name' => 'override attachment authored on option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override attachment promote to front page option.
  $permissions['override attachment promote to front page option'] = array(
    'name' => 'override attachment promote to front page option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override attachment published option.
  $permissions['override attachment published option'] = array(
    'name' => 'override attachment published option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override attachment revision option.
  $permissions['override attachment revision option'] = array(
    'name' => 'override attachment revision option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override attachment sticky option.
  $permissions['override attachment sticky option'] = array(
    'name' => 'override attachment sticky option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override classified authored by option.
  $permissions['override classified authored by option'] = array(
    'name' => 'override classified authored by option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override classified authored on option.
  $permissions['override classified authored on option'] = array(
    'name' => 'override classified authored on option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override classified promote to front page option.
  $permissions['override classified promote to front page option'] = array(
    'name' => 'override classified promote to front page option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override classified published option.
  $permissions['override classified published option'] = array(
    'name' => 'override classified published option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override classified revision option.
  $permissions['override classified revision option'] = array(
    'name' => 'override classified revision option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override classified sticky option.
  $permissions['override classified sticky option'] = array(
    'name' => 'override classified sticky option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override display_ads authored by option.
  $permissions['override display_ads authored by option'] = array(
    'name' => 'override display_ads authored by option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override display_ads authored on option.
  $permissions['override display_ads authored on option'] = array(
    'name' => 'override display_ads authored on option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override display_ads promote to front page option.
  $permissions['override display_ads promote to front page option'] = array(
    'name' => 'override display_ads promote to front page option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override display_ads published option.
  $permissions['override display_ads published option'] = array(
    'name' => 'override display_ads published option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override display_ads revision option.
  $permissions['override display_ads revision option'] = array(
    'name' => 'override display_ads revision option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override display_ads sticky option.
  $permissions['override display_ads sticky option'] = array(
    'name' => 'override display_ads sticky option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override page authored by option.
  $permissions['override page authored by option'] = array(
    'name' => 'override page authored by option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override page authored on option.
  $permissions['override page authored on option'] = array(
    'name' => 'override page authored on option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override page promote to front page option.
  $permissions['override page promote to front page option'] = array(
    'name' => 'override page promote to front page option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override page published option.
  $permissions['override page published option'] = array(
    'name' => 'override page published option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override page revision option.
  $permissions['override page revision option'] = array(
    'name' => 'override page revision option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override page sticky option.
  $permissions['override page sticky option'] = array(
    'name' => 'override page sticky option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override pw_digital authored by option.
  $permissions['override pw_digital authored by option'] = array(
    'name' => 'override pw_digital authored by option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override pw_digital authored on option.
  $permissions['override pw_digital authored on option'] = array(
    'name' => 'override pw_digital authored on option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override pw_digital promote to front page option.
  $permissions['override pw_digital promote to front page option'] = array(
    'name' => 'override pw_digital promote to front page option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override pw_digital published option.
  $permissions['override pw_digital published option'] = array(
    'name' => 'override pw_digital published option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override pw_digital revision option.
  $permissions['override pw_digital revision option'] = array(
    'name' => 'override pw_digital revision option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override pw_digital sticky option.
  $permissions['override pw_digital sticky option'] = array(
    'name' => 'override pw_digital sticky option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override webform authored on option.
  $permissions['override webform authored on option'] = array(
    'name' => 'override webform authored on option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override webform promote to front page option.
  $permissions['override webform promote to front page option'] = array(
    'name' => 'override webform promote to front page option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override webform published option.
  $permissions['override webform published option'] = array(
    'name' => 'override webform published option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override webform revision option.
  $permissions['override webform revision option'] = array(
    'name' => 'override webform revision option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override webform sticky option.
  $permissions['override webform sticky option'] = array(
    'name' => 'override webform sticky option',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: perform backup.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'classified editor',
      3 => 'digital edition editor',
      4 => 'display ad client',
      5 => 'display ad editor',
      6 => 'editorial editor',
      7 => 'page editor',
      8 => 'sales',
      9 => 'submit ad',
    ),
    'module' => 'comment',
  );

  // Exported permission: publish any adworks_file content.
  $permissions['publish any adworks_file content'] = array(
    'name' => 'publish any adworks_file content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any article content.
  $permissions['publish any article content'] = array(
    'name' => 'publish any article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editorial editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any attachment content.
  $permissions['publish any attachment content'] = array(
    'name' => 'publish any attachment content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any classified content.
  $permissions['publish any classified content'] = array(
    'name' => 'publish any classified content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any content.
  $permissions['publish any content'] = array(
    'name' => 'publish any content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any display_ads content.
  $permissions['publish any display_ads content'] = array(
    'name' => 'publish any display_ads content',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any page content.
  $permissions['publish any page content'] = array(
    'name' => 'publish any page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any pw_digital content.
  $permissions['publish any pw_digital content'] = array(
    'name' => 'publish any pw_digital content',
    'roles' => array(
      0 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish any webform content.
  $permissions['publish any webform content'] = array(
    'name' => 'publish any webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable adworks_file content.
  $permissions['publish editable adworks_file content'] = array(
    'name' => 'publish editable adworks_file content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable article content.
  $permissions['publish editable article content'] = array(
    'name' => 'publish editable article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editorial editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable attachment content.
  $permissions['publish editable attachment content'] = array(
    'name' => 'publish editable attachment content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable classified content.
  $permissions['publish editable classified content'] = array(
    'name' => 'publish editable classified content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable display_ads content.
  $permissions['publish editable display_ads content'] = array(
    'name' => 'publish editable display_ads content',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable page content.
  $permissions['publish editable page content'] = array(
    'name' => 'publish editable page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable pw_digital content.
  $permissions['publish editable pw_digital content'] = array(
    'name' => 'publish editable pw_digital content',
    'roles' => array(
      0 => 'digital edition editor',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish editable webform content.
  $permissions['publish editable webform content'] = array(
    'name' => 'publish editable webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own adworks_file content.
  $permissions['publish own adworks_file content'] = array(
    'name' => 'publish own adworks_file content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own article content.
  $permissions['publish own article content'] = array(
    'name' => 'publish own article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editorial editor',
      2 => 'sales',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own attachment content.
  $permissions['publish own attachment content'] = array(
    'name' => 'publish own attachment content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own classified content.
  $permissions['publish own classified content'] = array(
    'name' => 'publish own classified content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'sales',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own display_ads content.
  $permissions['publish own display_ads content'] = array(
    'name' => 'publish own display_ads content',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
      2 => 'sales',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own page content.
  $permissions['publish own page content'] = array(
    'name' => 'publish own page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own pw_digital content.
  $permissions['publish own pw_digital content'] = array(
    'name' => 'publish own pw_digital content',
    'roles' => array(
      0 => 'digital edition editor',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: publish own webform content.
  $permissions['publish own webform content'] = array(
    'name' => 'publish own webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: restore from backup.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'editorial editor',
      2 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: schedule (un)publishing of nodes.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'classified editor',
      4 => 'display ad editor',
      5 => 'editorial editor',
      6 => 'page editor',
      7 => 'submit ad',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: set page title.
  $permissions['set page title'] = array(
    'name' => 'set page title',
    'roles' => array(
      0 => 'administrator',
      1 => 'digital edition editor',
      2 => 'display ad editor',
      3 => 'page editor',
    ),
    'module' => 'page_title',
  );

  // Exported permission: skip comment approval.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'sales',
    ),
    'module' => 'comment',
  );

  // Exported permission: unpublish any adworks_file content.
  $permissions['unpublish any adworks_file content'] = array(
    'name' => 'unpublish any adworks_file content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any article content.
  $permissions['unpublish any article content'] = array(
    'name' => 'unpublish any article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editorial editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any attachment content.
  $permissions['unpublish any attachment content'] = array(
    'name' => 'unpublish any attachment content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any classified content.
  $permissions['unpublish any classified content'] = array(
    'name' => 'unpublish any classified content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any content.
  $permissions['unpublish any content'] = array(
    'name' => 'unpublish any content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any display_ads content.
  $permissions['unpublish any display_ads content'] = array(
    'name' => 'unpublish any display_ads content',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any page content.
  $permissions['unpublish any page content'] = array(
    'name' => 'unpublish any page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any pw_digital content.
  $permissions['unpublish any pw_digital content'] = array(
    'name' => 'unpublish any pw_digital content',
    'roles' => array(
      0 => 'digital edition editor',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish any webform content.
  $permissions['unpublish any webform content'] = array(
    'name' => 'unpublish any webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable adworks_file content.
  $permissions['unpublish editable adworks_file content'] = array(
    'name' => 'unpublish editable adworks_file content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable article content.
  $permissions['unpublish editable article content'] = array(
    'name' => 'unpublish editable article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editorial editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable attachment content.
  $permissions['unpublish editable attachment content'] = array(
    'name' => 'unpublish editable attachment content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable classified content.
  $permissions['unpublish editable classified content'] = array(
    'name' => 'unpublish editable classified content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable display_ads content.
  $permissions['unpublish editable display_ads content'] = array(
    'name' => 'unpublish editable display_ads content',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable page content.
  $permissions['unpublish editable page content'] = array(
    'name' => 'unpublish editable page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable pw_digital content.
  $permissions['unpublish editable pw_digital content'] = array(
    'name' => 'unpublish editable pw_digital content',
    'roles' => array(
      0 => 'digital edition editor',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish editable webform content.
  $permissions['unpublish editable webform content'] = array(
    'name' => 'unpublish editable webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own adworks_file content.
  $permissions['unpublish own adworks_file content'] = array(
    'name' => 'unpublish own adworks_file content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own article content.
  $permissions['unpublish own article content'] = array(
    'name' => 'unpublish own article content',
    'roles' => array(
      0 => 'administrator',
      1 => 'editorial editor',
      2 => 'sales',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own attachment content.
  $permissions['unpublish own attachment content'] = array(
    'name' => 'unpublish own attachment content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own classified content.
  $permissions['unpublish own classified content'] = array(
    'name' => 'unpublish own classified content',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'sales',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own display_ads content.
  $permissions['unpublish own display_ads content'] = array(
    'name' => 'unpublish own display_ads content',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
      2 => 'sales',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own page content.
  $permissions['unpublish own page content'] = array(
    'name' => 'unpublish own page content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own pw_digital content.
  $permissions['unpublish own pw_digital content'] = array(
    'name' => 'unpublish own pw_digital content',
    'roles' => array(
      0 => 'digital edition editor',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: unpublish own webform content.
  $permissions['unpublish own webform content'] = array(
    'name' => 'unpublish own webform content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: use PHP for title patterns.
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'auto_nodetitle',
  );

  // Exported permission: use add another.
  $permissions['use add another'] = array(
    'name' => 'use add another',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
      6 => 'sales',
    ),
    'module' => 'addanother',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
    ),
    'module' => 'search',
  );

  // Exported permission: use ccl.
  $permissions['use ccl'] = array(
    'name' => 'use ccl',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ccl',
  );

  // Exported permission: use exclude node title.
  $permissions['use exclude node title'] = array(
    'name' => 'use exclude node title',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
      2 => 'classified editor',
      3 => 'display ad client',
      4 => 'display ad editor',
      5 => 'editorial editor',
      6 => 'page editor',
      7 => 'sales',
    ),
    'module' => 'exclude_node_title',
  );

  // Exported permission: use text format edition_editor.
  $permissions['use text format edition_editor'] = array(
    'name' => 'use text format edition_editor',
    'roles' => array(
      0 => 'digital edition editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'display ad editor',
      3 => 'editorial editor',
      4 => 'page editor',
      5 => 'sales',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'display ad editor',
      2 => 'editorial editor',
      3 => 'page editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format markdown_filtering.
  $permissions['use text format markdown_filtering'] = array(
    'name' => 'use text format markdown_filtering',
    'roles' => array(
      0 => 'administrator',
      1 => 'editorial editor',
      2 => 'page editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: view advanced help index.
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      0 => 'administrator',
      1 => 'digital edition editor',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help popup.
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      0 => 'administrator',
      1 => 'digital edition editor',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help topic.
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      0 => 'administrator',
      1 => 'digital edition editor',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view files.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
      3 => 'classified editor',
      4 => 'digital edition editor',
      5 => 'display ad client',
      6 => 'display ad editor',
      7 => 'editorial editor',
      8 => 'page editor',
      9 => 'submit ad',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view media.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'media',
  );

  // Exported permission: view own files.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: view own private files.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(),
    'module' => 'file_entity',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
      1 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view passwords.
  $permissions['view passwords'] = array(
    'name' => 'view passwords',
    'roles' => array(
      0 => 'administrator',
      1 => 'user editor',
    ),
    'module' => 'aes',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
      1 => 'editorial editor',
      2 => 'page editor',
    ),
    'module' => 'node',
  );

  // Exported permission: view style guides.
  $permissions['view style guides'] = array(
    'name' => 'view style guides',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'styleguide',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'administrator',
      1 => 'classified editor',
      2 => 'digital edition editor',
      3 => 'display ad editor',
      4 => 'editorial editor',
      5 => 'page editor',
    ),
    'module' => 'system',
  );

  return $permissions;
}
