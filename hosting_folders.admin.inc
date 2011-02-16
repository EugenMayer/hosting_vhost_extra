<?php
// Copyright (c) 2011 KontextWork
// Author: Eugen Mayer

function hosting_folders_admin_settings() {
  $form['hosting_folders_default'] = array(
    '#type' => 'textarea',
    '#title' => t('Folders'),
    '#description' => t('Default extra folders which should be created in ever sites files/ folder. You can override this for every site later. Each folder on one line, relative to files/. So for a folder files/imagecache enter just "imagecache"'),
    '#default_value' => variable_get('hosting_folders_default', ''),
    '#element_validate' => array('_hosting_folders_validate'),
  );
  return system_settings_form($form);
}
