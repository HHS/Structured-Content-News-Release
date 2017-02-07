<?php
/**
 * @file
 * hhs_gov_content_type_news_release.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hhs_gov_content_type_news_release_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function hhs_gov_content_type_news_release_node_info() {
  $items = array(
    'news_release' => array(
      'name' => t('News Release'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
