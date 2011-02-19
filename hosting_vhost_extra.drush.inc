<?php

function drush_hosting_vhost_extra_pre_hosting_task() {
  if(!module_exists('hosting_vhost_extra')) {
    return;
  }
  $task =& drush_get_context('HOSTING_TASK');
  
  if ($task->ref->type == 'site') {
    $namespace = _hosting_vhost_extra_webserver_name($task->ref->platform);
    $namespaces = array();
    switch($namespace) {
      case 'apache':
        $namespaces = array('nossl' => 'apache');
      break;
      case 'apache_ssl':
        $namespaces = array('ssl' => 'apache_ssl','nossl' => 'apache');
      break;
      case 'nginx':
        $namespaces = array( 'nossl' => 'nginx');
      break;
      case 'apache_ssl':
        $namespaces = array( 'ssl' => 'nginx_ssl', 'nossl' => 'nginx');
      break;
    }
    foreach($namespaces as $key => $namespace) {
      $task->options["vhost_extra_$key"] = _hosting_vhost_extra_vhost_settings($task->ref->title, $namespace, TRUE);
    }
  }

}
