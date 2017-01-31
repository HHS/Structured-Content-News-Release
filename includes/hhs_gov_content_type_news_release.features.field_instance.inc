<?php
/**
 * @file
 * hhs_gov_content_type_news_release.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function hhs_gov_content_type_news_release_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-news_release-body'.
  $field_instances['node-news_release-body'] = array(
    'bundle' => 'news_release',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the text of the news release. An optional "Tweet This" element can be added.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 1,
    'settings' => array(
      'display_summary' => 1,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_label_summary' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_summary' => '',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 12,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-news_release-field_alert_date_created'.
  $field_instances['node-news_release-field_alert_date_created'] = array(
    'bundle' => 'news_release',
    'deleted' => 0,
    'description' => 'Leave the default, which will be today\'s date.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_alert_date_created',
    'label' => 'Date Created',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 17,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-news_release-field_audience'.
  $field_instances['node-news_release-field_audience'] = array(
    'bundle' => 'news_release',
    'default_value' => array(
      0 => array(
        'tid' => 134,
      ),
    ),
    'deleted' => 0,
    'description' => 'Choose the main target audience from the list (more than one is allowed in case 1-2 are needed).',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_audience',
    'label' => 'Audience',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 16,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-news_release-field_categorized'.
  $field_instances['node-news_release-field_categorized'] = array(
    'bundle' => 'news_release',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '1-2 main topic(s) covered in this news release. Used to display related content.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_categorized',
    'label' => 'Topic Category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 14,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-news_release-field_contact_office_email'.
  $field_instances['node-news_release-field_contact_office_email'] = array(
    'bundle' => 'news_release',
    'default_value' => array(
      0 => array(
        'value' => 'media@hhs.gov',
      ),
    ),
    'deleted' => 0,
    'description' => 'Press office email. The default is "media@hhs.gov".',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_contact_office_email',
    'label' => 'Contact Office Email',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance:
  // 'node-news_release-field_contact_office_phone_numbe'.
  $field_instances['node-news_release-field_contact_office_phone_numbe'] = array(
    'bundle' => 'news_release',
    'default_value' => array(
      0 => array(
        'value' => '202-690-6343',
      ),
    ),
    'deleted' => 0,
    'description' => 'Press office phone number. The default is "202-690-6343."',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_contact_office_phone_numbe',
    'label' => 'Contact Office Phone Number',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-news_release-field_created_by'.
  $field_instances['node-news_release-field_created_by'] = array(
    'bundle' => 'news_release',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the office responsible for maintaining this content on HHS.gov.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_created_by',
    'label' => 'Created By',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 19,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-news_release-field_date_last_modfied'.
  $field_instances['node-news_release-field_date_last_modfied'] = array(
    'bundle' => 'news_release',
    'deleted' => 0,
    'description' => 'Enter the date this content was most recently revised. (In most cases, this will be the same as "Date Published.")',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_date_last_modfied',
    'label' => 'Last Revised',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 18,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-news_release-field_news_date_published'.
  $field_instances['node-news_release-field_news_date_published'] = array(
    'bundle' => 'news_release',
    'deleted' => 0,
    'description' => 'Official date of the news release displayed at the top of the page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_news_date_published',
    'label' => 'Date Published',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 7,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-news_release-field_news_description'.
  $field_instances['node-news_release-field_news_description'] = array(
    'bundle' => 'news_release',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Copy the first sentence of the news release into this field. Used for social media and search. Shown on the News homepage for the most recent releases.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_news_description',
    'label' => 'Description',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_label_summary' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_summary' => '',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 11,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-news_release-field_news_hhs_officials'.
  $field_instances['node-news_release-field_news_hhs_officials'] = array(
    'bundle' => 'news_release',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the official(s) mentioned in this news release to associate the release with their name.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_news_hhs_officials',
    'label' => 'HHS Official',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 15,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-news_release-field_news_ontact_office'.
  $field_instances['node-news_release-field_news_ontact_office'] = array(
    'bundle' => 'news_release',
    'default_value' => array(
      0 => array(
        'value' => 'HHS Press Office',
      ),
    ),
    'deleted' => 0,
    'description' => 'Press office releasing this news release. The default is "HHS Press Office."​',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_news_ontact_office',
    'label' => 'Contact Office',
    'required' => 1,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-news_release-field_news_subheadline'.
  $field_instances['node-news_release-field_news_subheadline'] = array(
    'bundle' => 'news_release',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Subheadline of the news release, expanding on the information in the headline.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => 'theme_field',
    'entity_type' => 'node',
    'field_name' => 'field_news_subheadline',
    'label' => 'Subheadline',
    'required' => 0,
    'settings' => array(
      'linkit' => array(
        'button_text' => 'Search',
        'enable' => 0,
        'profile' => '',
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
    'workbench_access_field' => 0,
  );

  // Exported field_instance: 'node-news_release-field_statement'.
  $field_instances['node-news_release-field_statement'] = array(
    'bundle' => 'news_release',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_statement',
    'label' => 'Statement',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
    'workbench_access_field' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('1-2 main topic(s) covered in this news release. Used to display related content.');
  t('Audience');
  t('Body');
  t('Choose the main target audience from the list (more than one is allowed in case 1-2 are needed).');
  t('Contact Office');
  t('Contact Office Email');
  t('Contact Office Phone Number');
  t('Copy the first sentence of the news release into this field. Used for social media and search. Shown on the News homepage for the most recent releases.');
  t('Created By');
  t('Date Created');
  t('Date Published');
  t('Description');
  t('Enter the date this content was most recently revised. (In most cases, this will be the same as "Date Published.")');
  t('Enter the text of the news release. An optional "Tweet This" element can be added.');
  t('HHS Official');
  t('Last Revised');
  t('Leave the default, which will be today\'s date.');
  t('Official date of the news release displayed at the top of the page.');
  t('Press office email. The default is "media@hhs.gov".');
  t('Press office phone number. The default is "202-690-6343."');
  t('Press office releasing this news release. The default is "HHS Press Office."​');
  t('Select the office responsible for maintaining this content on HHS.gov.');
  t('Select the official(s) mentioned in this news release to associate the release with their name.');
  t('Statement');
  t('Subheadline');
  t('Subheadline of the news release, expanding on the information in the headline.');
  t('Topic Category');

  return $field_instances;
}
