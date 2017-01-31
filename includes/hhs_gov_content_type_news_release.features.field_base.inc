<?php
/**
 * @file
 * hhs_gov_content_type_news_release.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function hhs_gov_content_type_news_release_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_alert_date_created'.
  $field_bases['field_alert_date_created'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_alert_date_created',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'granularity' => array(
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => 'UTC',
      'todate' => '',
      'tz_handling' => 'site',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_contact_office_phone_numbe'.
  $field_bases['field_contact_office_phone_numbe'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact_office_phone_numbe',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_news_description'.
  $field_bases['field_news_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_news_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_news_hhs_officials'.
  $field_bases['field_news_hhs_officials'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_news_hhs_officials',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        '_getcovered_story' => 0,
        'alert' => 0,
        'article' => 0,
        'basic_snippet' => 0,
        'consolidation_billboard' => 0,
        'external_blog_post' => 0,
        'faq' => 0,
        'homepage_billboard' => 0,
        'internal_blog_post' => 0,
        'leadership_bio' => 'leadership_bio',
        'news_release' => 0,
        'node_block' => 0,
        'opdiv' => 0,
        'panel' => 0,
        'region' => 0,
        'speech' => 0,
        'staffdiv' => 0,
        'subsite_billboard' => 0,
        'tile' => 0,
        'topic_site' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_statement'.
  $field_bases['field_statement'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_statement',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => 'Check the box if this news release is a statement by the Secretary or another HHS Official',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
