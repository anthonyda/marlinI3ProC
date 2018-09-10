/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Bulgarian
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_BG_H
#define LANGUAGE_BG_H

#define MAPPER_D0D1                // For Cyrillic
#define DISPLAY_CHARSET_ISO10646_5
#define CHARSIZE 2

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" Ð“Ð¾Ñ‚Ð¾Ð².")
#define MSG_SD_INSERTED                     _UxGT("ÐšÐ°Ñ€Ñ‚Ð°Ñ‚Ð° Ðµ Ð¿Ð¾Ñ�Ñ‚Ð°Ð²ÐµÐ½Ð°")
#define MSG_SD_REMOVED                      _UxGT("ÐšÐ°Ñ€Ñ‚Ð°Ñ‚Ð° Ðµ Ð¸Ð·Ð²Ð°Ð´ÐµÐ½Ð°")
#define MSG_MAIN                            _UxGT("ÐœÐµÐ½ÑŽ")
#define MSG_AUTOSTART                       _UxGT("Ð�Ð²Ñ‚Ð¾Ñ�Ñ‚Ð°Ñ€Ñ‚")
#define MSG_DISABLE_STEPPERS                _UxGT("Ð˜Ð·ÐºÐ». Ð´Ð²Ð¸Ð³Ð°Ñ‚ÐµÐ»Ð¸")
#define MSG_AUTO_HOME                       _UxGT("ÐŸÐ°Ñ€ÐºÐ¸Ñ€Ð°Ð½Ðµ")
#define MSG_TMC_Z_CALIBRATION               _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° Z")
#define MSG_SET_HOME_OFFSETS                _UxGT("Ð—Ð°Ð´Ð°Ð¹ Ð�Ð°Ñ‡Ð°Ð»Ð¾")
#define MSG_SET_ORIGIN                      _UxGT("Ð˜Ð·Ñ…Ð¾Ð´Ð½Ð° Ñ‚Ð¾Ñ‡ÐºÐ°")
#define MSG_PREHEAT_1                       _UxGT("ÐŸÐ¾Ð´Ð³Ñ€Ñ�Ð²Ð°Ð½Ðµ PLA")
#define MSG_PREHEAT_1_N                     _UxGT("ÐŸÐ¾Ð´Ð³Ñ€Ñ�Ð²Ð°Ð½Ðµ PLA")
#define MSG_PREHEAT_1_ALL                   _UxGT("ÐŸÐ¾Ð´Ð³Ñ€. PLA Ð’Ñ�Ð¸Ñ‡ÐºÐ¸")
#define MSG_PREHEAT_1_BEDONLY               _UxGT("ÐŸÐ¾Ð´Ð³Ñ€. PLA Ð›ÐµÐ³Ð»Ð¾")
#define MSG_PREHEAT_1_SETTINGS              _UxGT("Ð�Ð°Ñ�Ñ‚Ñ€Ð¾Ð¹ÐºÐ¸ PLA")
#define MSG_PREHEAT_2                       _UxGT("ÐŸÐ¾Ð´Ð³Ñ€Ñ�Ð²Ð°Ð½Ðµ ABS")
#define MSG_PREHEAT_2_N                     _UxGT("ÐŸÐ¾Ð´Ð³Ñ€Ñ�Ð²Ð°Ð½Ðµ ABS")
#define MSG_PREHEAT_2_ALL                   _UxGT("ÐŸÐ¾Ð´Ð³Ñ€. ABS Ð’Ñ�Ð¸Ñ‡ÐºÐ¸")
#define MSG_PREHEAT_2_BEDONLY               _UxGT("ÐŸÐ¾Ð´Ð³Ñ€. ABS Ð›ÐµÐ³Ð»Ð¾")
#define MSG_PREHEAT_2_SETTINGS              _UxGT("Ð�Ð°Ñ�Ñ‚Ñ€Ð¾Ð¹ÐºÐ¸ ABS")
#define MSG_COOLDOWN                        _UxGT("ÐžÑ…Ð»Ð°Ð¶Ð´Ð°Ð½Ðµ")
#define MSG_SWITCH_PS_ON                    _UxGT("Ð’ÐºÐ». Ð·Ð°Ñ…Ñ€Ð°Ð½Ð²Ð°Ð½Ðµ")
#define MSG_SWITCH_PS_OFF                   _UxGT("Ð˜Ð·ÐºÐ». Ð·Ð°Ñ…Ñ€Ð°Ð½Ð²Ð°Ð½Ðµ")
#define MSG_EXTRUDE                         _UxGT("Ð•ÐºÑ�Ñ‚Ñ€ÑƒÐ·Ð¸Ñ�")
#define MSG_RETRACT                         _UxGT("ÐžÑ‚ÐºÐ°Ñ‚")
#define MSG_MOVE_AXIS                       _UxGT("Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ Ð¿Ð¾ Ð¾Ñ�")
#define MSG_BED_LEVELING                    _UxGT("Ð�Ð¸Ð²ÐµÐ»Ð¸Ñ€Ð°Ð½Ðµ")
#define MSG_LEVEL_BED                       _UxGT("Ð�Ð¸Ð²ÐµÐ»Ð¸Ñ€Ð°Ð½Ðµ")
#define MSG_MOVE_X                          _UxGT("Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ Ð¿Ð¾ X")
#define MSG_MOVE_Y                          _UxGT("Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ Ð¿Ð¾ Y")
#define MSG_MOVE_Z                          _UxGT("Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ Ð¿Ð¾ Z")
#define MSG_MOVE_E                          _UxGT("Ð•ÐºÑ�Ñ‚Ñ€ÑƒÐ´ÐµÑ€")
#define MSG_MOVE_01MM                       _UxGT("ÐŸÑ€ÐµÐ¼ÐµÑ�Ñ‚Ð¸ Ñ� 0.1mm")
#define MSG_MOVE_1MM                        _UxGT("ÐŸÑ€ÐµÐ¼ÐµÑ�Ñ‚Ð¸ Ñ� 1mm")
#define MSG_MOVE_10MM                       _UxGT("ÐŸÑ€ÐµÐ¼ÐµÑ�Ñ‚Ð¸ Ñ� 10mm")
#define MSG_SPEED                           _UxGT("Ð¡ÐºÐ¾Ñ€Ð¾Ñ�Ñ‚")
#define MSG_BED_Z                           _UxGT("Bed Z")
#define MSG_NOZZLE                          LCD_STR_THERMOMETER _UxGT(" Ð”ÑŽÐ·Ð°")
#define MSG_BED                             LCD_STR_THERMOMETER _UxGT(" Ð›ÐµÐ³Ð»Ð¾")
#define MSG_FAN_SPEED                       _UxGT("Ð’ÐµÐ½Ñ‚Ð¸Ð»Ð°Ñ‚Ð¾Ñ€")
#define MSG_FLOW                            _UxGT("ÐŸÐ¾Ñ‚Ð¾Ðº")
#define MSG_CONTROL                         _UxGT("Ð£Ð¿Ñ€Ð°Ð²Ð»ÐµÐ½Ð¸Ðµ")
#define MSG_MIN                             LCD_STR_THERMOMETER _UxGT(" ÐœÐ¸Ð½Ð¸Ð¼ÑƒÐ¼")
#define MSG_MAX                             LCD_STR_THERMOMETER _UxGT(" ÐœÐ°ÐºÑ�Ð¸Ð¼ÑƒÐ¼")
#define MSG_FACTOR                          LCD_STR_THERMOMETER _UxGT(" Ð¤Ð°ÐºÑ‚Ð¾Ñ€")
#define MSG_AUTOTEMP                        _UxGT("Ð�Ð²Ñ‚Ð¾-Ñ‚ÐµÐ¼Ð¿.")
#define MSG_ON                              _UxGT("Ð’ÐºÐ». ")
#define MSG_OFF                             _UxGT("Ð˜Ð·ÐºÐ». ")
#define MSG_A_RETRACT                       _UxGT("A-Ð¾Ñ‚ÐºÐ°Ñ‚")
#define MSG_A_TRAVEL                        _UxGT("A-travel")
#define MSG_STEPS_PER_MM                    _UxGT("Ð¡Ñ‚ÑŠÐ¿ÐºÐ¸/mm")
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("AÑ�Ñ‚ÑŠÐ¿ÐºÐ¸/mm")
  #define MSG_BSTEPS                        _UxGT("BÑ�Ñ‚ÑŠÐ¿ÐºÐ¸/mm")
  #define MSG_CSTEPS                        _UxGT("CÑ�Ñ‚ÑŠÐ¿ÐºÐ¸/mm")
#else
  #define MSG_ASTEPS                        _UxGT("XÑ�Ñ‚ÑŠÐ¿ÐºÐ¸/mm")
  #define MSG_BSTEPS                        _UxGT("YÑ�Ñ‚ÑŠÐ¿ÐºÐ¸/mm")
  #define MSG_CSTEPS                        _UxGT("ZÑ�Ñ‚ÑŠÐ¿ÐºÐ¸/mm")
#endif
#define MSG_ESTEPS                          _UxGT("E Ñ�Ñ‚ÑŠÐ¿ÐºÐ¸/mm")
#define MSG_E1STEPS                         _UxGT("E1 Ñ�Ñ‚ÑŠÐ¿ÐºÐ¸/mm")
#define MSG_E2STEPS                         _UxGT("E2 Ñ�Ñ‚ÑŠÐ¿ÐºÐ¸/mm")
#define MSG_E3STEPS                         _UxGT("E3 Ñ�Ñ‚ÑŠÐ¿ÐºÐ¸/mm")
#define MSG_E4STEPS                         _UxGT("E4 Ñ�Ñ‚ÑŠÐ¿ÐºÐ¸/mm")
#define MSG_E5STEPS                         _UxGT("E5 Ñ�Ñ‚ÑŠÐ¿ÐºÐ¸/mm")
#define MSG_TEMPERATURE                     _UxGT("Ð¢ÐµÐ¼Ð¿ÐµÑ€Ð°Ñ‚ÑƒÑ€Ð°")
#define MSG_MOTION                          _UxGT("Ð”Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ")
#define MSG_FILAMENT                        _UxGT("Ð�Ð¸ÑˆÐºÐ°")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("Ð”Ð¸Ð°Ð¼. Ð½Ð¸ÑˆÐºÐ°")
#define MSG_CONTRAST                        _UxGT("LCD ÐºÐ¾Ð½Ñ‚Ñ€Ð°Ñ�Ñ‚")
#define MSG_STORE_EEPROM                    _UxGT("Ð—Ð°Ð¿Ð°Ð·Ð¸ Ð² EPROM")
#define MSG_LOAD_EEPROM                     _UxGT("Ð—Ð°Ñ€ÐµÐ´Ð¸ Ð¾Ñ‚ EPROM")
#define MSG_RESTORE_FAILSAFE                _UxGT("Ð¤Ð°Ð±Ñ€Ð¸Ñ‡Ð½Ð¸ Ð½Ð°Ñ�Ñ‚Ñ€Ð¾Ð¹ÐºÐ¸")
#define MSG_REFRESH                         LCD_STR_REFRESH _UxGT("ÐžÐ±Ð½Ð¾Ð²Ð¸")
#define MSG_WATCH                           _UxGT("ÐŸÑ€ÐµÐ³Ð»ÐµÐ´")
#define MSG_PREPARE                         _UxGT("Ð”ÐµÐ¹Ñ�Ñ‚Ð²Ð¸Ñ�")
#define MSG_TUNE                            _UxGT("Ð�Ð°Ñ�Ñ‚Ñ€Ð¾Ð¹ÐºÐ°")
#define MSG_PAUSE_PRINT                     _UxGT("ÐŸÐ°ÑƒÐ·Ð°")
#define MSG_RESUME_PRINT                    _UxGT("Ð’ÑŠÐ·Ð¾Ð±Ð½Ð¾Ð²Ð¸ Ð¿ÐµÑ‡Ð°Ñ‚Ð°")
#define MSG_STOP_PRINT                      _UxGT("Ð¡Ð¿Ñ€Ð¸ Ð¿ÐµÑ‡Ð°Ñ‚Ð°")
#define MSG_CARD_MENU                       _UxGT("ÐœÐµÐ½ÑŽ ÐºÐ°Ñ€Ñ‚Ð°")
#define MSG_NO_CARD                         _UxGT("Ð�Ñ�Ð¼Ð° ÐºÐ°Ñ€Ñ‚Ð°")
#define MSG_DWELL                           _UxGT("ÐŸÐ¾Ñ‡Ð¸Ð²ÐºÐ°...")
#define MSG_USERWAIT                        _UxGT("Ð˜Ð·Ñ‡Ð°ÐºÐ²Ð°Ð½Ðµ")
#define MSG_PRINT_ABORTED                   _UxGT("ÐŸÐµÑ‡Ð°Ñ‚ÑŠÑ‚ Ðµ Ð¿Ñ€ÐµÐºÑŠÑ�Ð½Ð°Ñ‚")
#define MSG_NO_MOVE                         _UxGT("Ð�Ñ�Ð¼Ð° Ð´Ð²Ð¸Ð¶ÐµÐ½Ð¸Ðµ")
#define MSG_KILLED                          _UxGT("Ð£Ð‘Ð˜Ð¢Ðž.")
#define MSG_STOPPED                         _UxGT("Ð¡ÐŸÐ Ð¯Ð�Ðž.")
#define MSG_CONTROL_RETRACT                 _UxGT("ÐžÑ‚ÐºÐ°Ñ‚ mm")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Ð¡Ð¼Ñ�Ð½Ð° ÐžÑ‚ÐºÐ°Ñ‚ mm")
#define MSG_CONTROL_RETRACTF                _UxGT("ÐžÑ‚ÐºÐ°Ñ‚  V")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Ð¡ÐºÐ¾Ðº mm")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("Ð’ÑŠÐ·Ð²Ñ€Ð°Ñ‚ mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("Ð¡Ð¼Ñ�Ð½Ð° Ð’ÑŠÐ·Ð²Ñ€Ð°Ñ‚ mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("Ð’ÑŠÐ·Ð²Ñ€Ð°Ñ‚  V")
#define MSG_AUTORETRACT                     _UxGT("Ð�Ð²Ñ‚Ð¾oÑ‚ÐºÐ°Ñ‚")
#define MSG_FILAMENTCHANGE                  _UxGT("Ð¡Ð¼Ñ�Ð½Ð° Ð½Ð¸ÑˆÐºÐ°")
#define MSG_INIT_SDCARD                     _UxGT("Ð˜Ð½Ð¸Ñ†. SD-ÐšÐ°Ñ€Ñ‚Ð°")
#define MSG_CNG_SDCARD                      _UxGT("Ð¡Ð¼Ñ�Ð½Ð° SD-ÐšÐ°Ñ€Ñ‚Ð°")
#define MSG_ZPROBE_OUT                      _UxGT("Z-Ñ�Ð¾Ð½Ð´Ð°Ñ‚Ð° Ðµ Ð¸Ð·Ð²Ð°Ð´ÐµÐ½Ð°")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z ÐžÑ‚Ñ�Ñ‚Ð¾Ñ�Ð½Ð¸Ðµ")
#define MSG_BABYSTEP_X                      _UxGT("ÐœÐ¸Ð½Ð¸Ñ�Ñ‚ÑŠÐ¿ÐºÐ° X")
#define MSG_BABYSTEP_Y                      _UxGT("ÐœÐ¸Ð½Ð¸Ñ�Ñ‚ÑŠÐ¿ÐºÐ° Y")
#define MSG_BABYSTEP_Z                      _UxGT("ÐœÐ¸Ð½Ð¸Ñ�Ñ‚ÑŠÐ¿ÐºÐ° Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Ð¡Ñ‚Ð¾Ð¿ ÐšÑ€.Ð˜Ð·ÐºÐ»ÑŽÑ‡Ð²Ð°Ñ‚ÐµÐ»Ð¸")
#define MSG_DELTA_CALIBRATE                 _UxGT("Ð”ÐµÐ»Ñ‚Ð° ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ°")
#define MSG_DELTA_CALIBRATE_X               _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("ÐšÐ°Ð»Ð¸Ð±Ñ€Ð¾Ð²ÐºÐ° Ð¦ÐµÐ½Ñ‚ÑŠÑ€")

#endif // LANGUAGE_BG_H
