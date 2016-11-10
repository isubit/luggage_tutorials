<?php
/**
 * @file
 * luggage_tutorials.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function luggage_tutorials_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_video|node|tutorial|form';
  $field_group->group_name = 'group_video';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'tutorial';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Video',
    'weight' => '4',
    'children' => array(
      0 => 'field_video_video',
      1 => 'field_video_transcript',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Video',
      'instance_settings' => array(
        'required_fields' => 0,
        'id' => '',
        'classes' => 'group-video field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_video|node|tutorial|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Video');

  return $field_groups;
}
