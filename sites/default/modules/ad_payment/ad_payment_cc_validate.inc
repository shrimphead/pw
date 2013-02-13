<?php
/**
* This script pre-parses the Credit Card Data and passes it along to the Netidea Server for processing.
*
* This page is called from ClassAlter Module # Submission Validation Function.
*
*/

// VALIDATION CODE IN PENNYWISE MODULE

/**
* custom function return variables for processing
*
* @return
*   array of cc data.
*   - $cc_data['number']
*   - $cc_data['type']
*   - $cc_data['expiry']
*   - $cc_data['name']
*/

function ad_payment_get_cc_data($form_state_values) {
  $cc_data = array();
  //
  // VARIABLES
  // CARD NUMBER - clear all spaces.
  $cc_data['number'] = $form_state_values['field_cc_number'];

  // CARD TYPE
  $credit_card_type = check_plain(str_replace(' ', '', $form_state_values['field_card_type']));
  $cc_data['type'] = ($credit_card_type == 0) ? 'Master Card' : 'Visa';

  // MONTH
  $cc_data['month'] = check_plain($form_state_values['field_exp_month']);

  // YEAR
  $cc_data['year'] = check_plain(substr($form_state_values['field_exp_year'], 2, 2));

  // EXPIRY
  $cc_data['expiry'] = $cc_data['month'] . '-' . $cc_data['year'];

  // NAME
  $cc_data['first_name'] = check_plain($form_state_values['field_first_name']);
  $cc_data['last_name'] = check_plain($form_state_values['field_last_name']);
  $cc_data['full_name'] = $cc_data['first_name'] . ' ' . $cc_data['last_name'];

  return $cc_data;
}

/**
* Process card data and throw up FORM ERRORS
*
*/
function ad_payment_validate_cc_data($form_state_values) {
  // test to see if basic form values are given.
  $form_validation = ad_payment_validate_cc_number($form_state_values);

  $cc_data = ad_payment_get_cc_data($form_state_values);

  if(!$cc_data['first_name']) {
    $form_validation['field_first_name'] = 'Please fill in your first name.';
  }
  if(!$cc_data['last_name']) {
    $form_validation['field_last_name'] = 'Please fill in your last name.';
  }

  array_merge( $form_validation, ad_payment_validate_cc_expiry($cc_data['expiry']) );

  // if ($expiry && $cc_num) { return TRUE; }
  // elseif (is_array($expiry) || !$expiry){
  //   $form_validation['field_last_name'] = 'Please fill in your last name.';
  //   return $expiry;
  // }
  // elseif(is_array($cc_num) || !$cc_num) {
  //   $form_validation['field_last_name'] = 'Please fill in your last name.';
  //   return $cc_num;
  // }

  return $form_validation;

//  dpm('Expiry test: ' . $expiry . '  ---  CC Num test: ' . $cc_num);
//
//  if (_ad_payment_validate_cc_expiry($cc_data['expiry']) &&
//      _ad_payment_validate_cc_number($cc_data['number'], $cc_data['type'], $form_state) ) {
//      dpm('Card Validate TRUE');
//    return(TRUE);
//  }
//
//  return(FALSE);

}

/**
* Implementation of Credit Card Number Validation.
*/

function ad_payment_validate_cc_number($form_state_values ) {
  $form_validation = array();

  if(!is_array($form_state_values)) {
    //dpm('Form state error!');
    //dpm($form_state_values);
    return $form_validation['field_cc_number'] = 'Please include a valid credit card number.';
  }
  // Determine Card Type.
 switch ($form_state_values['field_card_type']) {
   case 1:
     $credit_card_name = 'VISA';
     break;
   default:
     $credit_card_name = 'MASTER CARD';
 }
 $credit_card_number = $form_state_values['field_cc_number'];

  if (CC_VALIDATION_MODE == TRUE) {
    return TRUE;
 }
  if (!$credit_card_number) {
    $form_validation['field_cc_number'] = 'Credit card number is missing.';
    //return $form_validation;
  }

  //$credit_card_number = strrev (preg_replace ('[^([[:digit:]])]', '', $credit_card_number));  // OLD //  $credit_card_number = strrev (ereg_replace ('[^([:digit:])]', '', $credit_card_number));
  $credit_card_number_length = strlen( preg_replace( '/\s+/', '', $credit_card_number));

  //dpm('CC Number: ' . $credit_card_number . ' CC Length: ' . $credit_card_number_length);
  // Make card type upper case for comparisons.
  //$credit_card_name = strtoupper ($credit_card_name) +1;

  // Check for VISA DEBIT card number
  $visa_debit = strpos($credit_card_number, "4506");
  //if ($form_state_values['field_card_type'][0]['value'] == 'VISA' && $visa_debit === 0) {
  if ($credit_card_name == 'VISA' && $visa_debit === 0) {
     $error_msg = t('<strong>We cannot accept VISA DEBIT cards at this time.</strong><br>
        - Please use another card for this transaction.<br> - Or call toll free 1-800-663-4619');
    $form_validation['field_cc_number'] = $error_msg;
    //return $form_validation;
  }

  // Check for correct number of digits for each credit card type.
  // if($cc_data['type'] == "VISA" && ($credit_card_number_length != 13 && $credit_card_number_length != 15)) {
  //   $form_validation['field_cc_number'] = 'Credit card number has incorrect number of digits for VISA.';
  //   //return $form_validation;
  // }
  if ($credit_card_number_length != 16 ) {
    $form_validation['field_cc_number'] = 'Credit card number has incorrect number of digits. ' . 'Error #100-' . $credit_card_number_length;
    //return $form_validation;
  }

  // Step 2:LUHN check digit calculations
  //for ($digit_position = 1; $digit_position < $credit_card_number_length; $digit_position += 2) {
  //  $digit_times_two = ($credit_card_number[$digit_position] * 2);
  //
  //  if ($digit_times_two > 9) {
  //      $credit_card_number[$digit_position] = ($digit_times_two - 9);
  //  } else {
  //      $credit_card_number[$digit_position] = $digit_times_two;
  //  }
  //}
  //$validation_number = 0;
  //
  //// Step 3.
  //for ($digit_position = 0; $digit_position < $credit_card_number_length; $digit_position++) {
  //	$validation_number += $credit_card_number[$digit_position];
  //}
  //
  //// Step 4.
  //if (($validation_number % 10) == 0) {
	// return $form_validation;
  //}
  //else {
  //  $form_validation['field_cc_number'] = 'Invalid credit card score: ' . $validation_number;
  //  //return $form_validation;
  //}

  /* Luhn algorithm number checker - (c) 2005-2008 shaman - www.planzero.org *
 * This code has been released into the public domain, however please      *
 * give credit to the original author where possible.                      */

  // Strip any non-digits (useful for credit card numbers with spaces and hyphens)
  $number = preg_replace('/\D/', '', $credit_card_number);

  // Set the string length and parity
  $number_length=strlen($number);
  $parity=$number_length % 2;

  // Loop through each digit and do the maths
  $total=0;
  for ($i=0; $i<$number_length; $i++) {
    $digit=$number[$i];
    // Multiply alternate digits by two
    if ($i % 2 == $parity) {
      $digit*=2;
      // If the sum is two digits, add them together (in effect)
      if ($digit > 9) {
        $digit-=9;
      }
    }
    // Total up the digits
    $total+=$digit;
  }

  // If the total mod 10 equals 0, the number is valid
  if ($total % 10 != 0) { // ? TRUE : FALSE;
    $form_validation['field_cc_number'] = 'Please check your credit card number and try again. Error #' . ($total % 10) ;
  }


  //dpm('Form Validation script --- ' . $total % 10 == 0);
  //dpm($form_validation);

  return $form_validation;
} // END: function validate_cc_number



/**
* Check expiry date of card.
*
* @var $cc_expiry
* string of date and time. Format 11-22
* @return
* array or error message.
*/

function ad_payment_validate_cc_expiry ($cc_expiry) {
  if (preg_match('/(^[0-9]{1,2})[- \/]([0-9]{1,2})/', $cc_expiry, $expiry)) {  ////  if (ereg('([0-9]{1,2})[-\\/ ]?([0-9]{2})', $cc_expiry, $expiry)) {

  	// Use date windowing to determine current century.
  	if ($expiry[2] > 90) {
  	  $expiry[2] += 1900;
  	} else {
  	  $expiry[2] += 2000;
  	}
  	if (($expiry[1] < 0) || ($expiry[1] > 12)) {
      $form_validation['field_exp_month'] = 'Invalid expiry month.';
    	return $form_validation;
  	}
  	if ($expiry[2] < date ('Y') ) {
      $form_validation['field_exp_year'] = 'Your card has expired.';
    	return $form_validation;
  	}
  	if (($expiry[1] < date ('m') ) && ($expiry[2] == date ('Y') )) {
      $form_validation['field_exp_year'] = 'Your card has expired.';
    	return $form_validation;
  	}
  }
   else {
     //invalid date format
      $form_validation['field_exp_year'] = 'We\'re sorry but your credit card does not validate.';
//    	return (array('field' => 'field_exp_year', 'message' => 'Invalid expiry format should be in MM-YY format.'));
     // return FALSE;
   }
  return $form_validation;
} // END: function validate_cc_expiry

/**
* Implementation of CUSTOM Netidea code ---- not in use!
*/

