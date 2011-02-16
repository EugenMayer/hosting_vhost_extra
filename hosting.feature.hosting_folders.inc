<?php
// Copyright (c) 2011 KontextWork
// Author: Eugen Mayer

function hosting_folders_hosting_feature() {
  $features['hosting_folders'] = array(
    'title' => t('Extra site folders'),
    'description' => t('Lets you create extra folders in files/ writeable by the webserver on a site by site basis'),
    'status' => HOSTING_FEATURE_DISABLED,
    'module' => 'hosting_folders',
    'node' => 'site_node_form',
    'group' => 'experimental'
  );
  return $features;
}
