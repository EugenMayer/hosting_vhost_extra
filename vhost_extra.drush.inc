<?php

function vhost_extra_provision_apache_vhost_config($uri, $data){
  $extra = '';
  if($data['http_port'] == 443) {
    $extra = drush_get_option('vhost_extra_ssl', '');
  }
  else if($data['http_port'] == 80) {
    $extra = drush_get_option('vhost_extra_nossl', '');
  }
  // remove window CR
  $extra = str_replace("\r",'',$extra);
  return $extra;
}
