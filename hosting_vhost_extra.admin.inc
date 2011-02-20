<?php
// Copyright (c) 2011 KontextWork
// Author: Eugen Mayer

function hosting_vhost_extra_admin_settings() {
  $form['hosting_vhost_extra_default'] = array(
    '#type' => 'textarea',
    '#title' => t('Vhost settings'),
    '#description' => t('Anything entered here will be added to a site vhost by default. You can override this on a site by site base. If you have installed the token module, you can tokens here'),
    '#default_value' => variable_get('hosting_vhost_extra_default', ''),
  );
  $form['hosting_vhost_extra_ssl_default'] = array(
    '#type' => 'textarea',
    '#title' => t('Vhost SSL settings'),
'#description' => t('Anything entered here will be added to a site <b>SSL</b> vhost by default. You can override this on a site by site base. If you have installed the token module, you can tokens here'),
'#default_value' => variable_get('hosting_vhost_extra_ssl_default', ''),
  );

  if (module_exists('token')) {
    $form['token_help'] = array(
      '#title' => t('Replacement patterns'),
      '#type' => 'fieldset',
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );

    $form['token_help']['help'] = array(
      '#value' => theme('token_help', 'node'),
    );
  }

  return system_settings_form($form);
}
