<?php
/**
 * @file
 * paketti.backup_migrate_exportables.inc
 */

/**
 * Implements hook_exportables_backup_migrate_schedules().
 */
function paketti_exportables_backup_migrate_schedules() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'automaattinen_backup';
  $item->name = 'automaattinen backup';
  $item->source_id = 'archive';
  $item->destination_id = 'scheduled';
  $item->copy_destination_id = '';
  $item->profile_id = 'default';
  $item->keep = 0;
  $item->period = 172800;
  $item->enabled = TRUE;
  $item->cron = 'builtin';
  $item->cron_schedule = '0 4 * * *';
  $export['automaattinen_backup'] = $item;

  return $export;
}
