<?php
/**
 * @file
 * Definition of views_bootstrap_plugin_style.
 */

/**
 * Class to define a style plugin handler.
 */
class ViewsBootstrapThumbnailPluginStyle extends views_plugin_style {
  /**
   * Definition.
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['column_type'] = array('default' => 3);
	$options['inner_wrapper'] = array('default' => '');
	$options['outer_ul'] = array('default' => '');
    return $options;
  }

  /**
   * Form.
   */
  function options_form(&$form, &$form_state) {
    //@TODO: Grouping doesn't work here.
    //parent::options_form($form, $form_state); 

    $form['column_type'] = array(
      '#type' => 'select',
      '#title' => t('Column type'),
      '#options' => drupal_map_assoc(range(1, 12)),
      '#default_value' => $this->options['column_type'],
      '#description' => t('The default Bootstrap grid system utilizes 12 columns'),
    );

	$form['inner_wrapper'] = array(
      '#type' => 'textfield',  
        '#title' => t('Add class to Wrapper'),  
        '#default_value' => $this->options['inner_wrapper'],  
        '#description' => t('Extra class to div'),  
    );

	$form['outer_ul'] = array(
      '#type' => 'textfield',  
        '#title' => t('Add class to Outer ul tag'),  
        '#default_value' => $this->options['outer_ul'],  
        '#description' => t('Extra class to ul'),  
    );
  }
}
