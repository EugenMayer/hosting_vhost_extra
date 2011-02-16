<?php
// Copyright (c) 2011 KontextWork
// Author: Eugen Mayer

function hosting_vhost_extra_hosting_feature() {
  $features['hosting_vhost_extra'] = array(
    'title' => t('Site vhost settings'),
    'description' => t('Enables you to define extra vhosts settings for sites'),
    'status' => HOSTING_FEATURE_DISABLED,
    'module' => 'hosting_vhost_extra',
    'node' => 'site_node_form',
    'group' => 'experimental'
  );
  return $features;
}
