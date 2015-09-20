/*
 * Description:
 * This file contains the global public variables that determine 
 */

/* BOOL: false to add long range radios to all group leaders,
 * true to do nothing
 */
tf_no_auto_long_range_radio = true;

/* BOOL: true to enforce the side-specific shortwave frequencies below */
tf_same_sw_frequencies_for_side = true;
tf_freq_west = [0,7,["110","120","130","140","150","160","170","180"],0,nil,-1,0];
tf_freq_east = [0,7,["110","120","130","140","150","160","170","180"],0,nil,-1,0];
tf_freq_guer = [0,7,["110","120","130","140","150","160","170","180"],0,nil,-1,0];

/* BOOL: true to enforce the side-specific long range frequencies below */
tf_same_lr_frequencies_for_side = true;
tf_freq_west_lr = [3,7,["31","32","33","34","35","36","37","38","39"],0,nil,-1,0];
tf_freq_east_lr = [3,7,["31","32","33","34","35","36","37","38","39"],0,nil,-1,0];
tf_freq_guer_lr = [3,7,["31","32","33","34","35","36","37","38","39"],0,nil,-1,0];

/* The values in the above arrays are: [
  0: NUMBER - Active channel,
  1: NUMBER - Volume,
  2: ARRAY - Frequencies for channels,
  3: NUMBER - Stereo setting,
  4: STRING - Encryption code,
  5: NUMBER - Additional active channel,
  6: NUMBER - Additional active channel stereo mode,
  7: NUMBER - Speaker mode
]
*/
