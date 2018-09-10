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
 * Ukrainian
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_UK_H
#define LANGUAGE_UK_H

#define MAPPER_D0D1                // For Cyrillic
#define DISPLAY_CHARSET_ISO10646_5
#define CHARSIZE 2

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" Ð³Ð¾Ñ‚Ð¾Ð²Ð¸Ð¹.")
#define MSG_SD_INSERTED                     _UxGT("ÐšÐ°Ñ€Ñ‚ÐºÐ° Ð²Ñ�Ñ‚Ð°Ð²Ð»ÐµÐ½Ð°")
#define MSG_SD_REMOVED                      _UxGT("ÐšÐ°Ñ€Ñ‚ÐºÐ° Ð²Ð¸Ð´Ð°Ð»ÐµÐ½Ð°")
#define MSG_LCD_ENDSTOPS                    _UxGT("ÐšÑ–Ð½Ñ†ÐµÐ²Ð¸Ðº") // Max length 8 characters
#define MSG_MAIN                            _UxGT("ÐœÐµÐ½ÑŽ")
#define MSG_AUTOSTART                       _UxGT("Ð�Ð²Ñ‚Ð¾Ñ�Ñ‚Ð°Ñ€Ñ‚")
#define MSG_DISABLE_STEPPERS                _UxGT("Ð’Ð¸Ð¼Ðº. Ð´Ð²Ð¸Ð³ÑƒÐ½Ð¸")
#define MSG_AUTO_HOME                       _UxGT("Ð�Ð²Ñ‚Ð¾ Ð¿Ð°Ñ€ÐºÑƒÐ²Ð°Ð½Ð½Ñ�")
#define MSG_AUTO_HOME_X                     _UxGT("ÐŸÐ°Ñ€ÐºÑƒÐ²Ð°Ð½Ð½Ñ� X")
#define MSG_AUTO_HOME_Y                     _UxGT("ÐŸÐ°Ñ€ÐºÑƒÐ²Ð°Ð½Ð½Ñ� Y")
#define MSG_AUTO_HOME_Z                     _UxGT("ÐŸÐ°Ñ€ÐºÑƒÐ²Ð°Ð½Ð½Ñ� Z")
#define MSG_TMC_Z_CALIBRATION               _UxGT("ÐšÐ°Ð»Ñ–Ð±Ñ€ÑƒÐ²Ð°Ð½Ð½Ñ� Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("ÐŸÐ°Ñ€ÐºÑƒÐ²Ð°Ð½Ð½Ñ� XYZ")
#define MSG_LEVEL_BED_WAITING               _UxGT("ÐŸÐ¾Ñ‡Ð°Ñ‚Ð¸")
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Ð¡Ð»Ñ–Ð´ÑƒÑŽÑ‡Ð° Ð¢Ð¾Ñ‡ÐºÐ°")
#define MSG_LEVEL_BED_DONE                  _UxGT("Ð—Ð°Ð²ÐµÑ€ÑˆÐµÐ½Ð¾!")
#define MSG_SET_HOME_OFFSETS                _UxGT("Ð—Ð±ÐµÑ€ÐµÐ³Ñ‚Ð¸ Ð¿Ð°Ñ€ÐºÑƒÐ².")
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Ð—Ð¼Ñ–Ñ‰ÐµÐ½Ð½Ñ� Ð·Ð°Ñ�Ñ‚Ð¾Ñ�.")
#define MSG_SET_ORIGIN                      _UxGT("Ð’Ñ�Ñ‚Ð°Ð½Ð¾Ð². Ð¿Ð¾Ñ‡Ð°Ñ‚Ð¾Ðº")
#define MSG_PREHEAT_1                       _UxGT("Ð�Ð°Ð³Ñ€Ñ–Ð² PLA")
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" Ð’Ñ�Ðµ")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" Ð¡Ñ‚Ñ–Ð»")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" Ð½Ð°Ð».")
#define MSG_PREHEAT_2                       _UxGT("Ð�Ð°Ð³Ñ€Ñ–Ð² ABS")
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" Ð’Ñ�Ðµ")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" Ð¡Ñ‚Ñ–Ð»")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" Ð½Ð°Ð».")
#define MSG_COOLDOWN                        _UxGT("ÐžÑ…Ð¾Ð»Ð¾Ð´Ð¶ÐµÐ½Ð½Ñ�")
#define MSG_SWITCH_PS_ON                    _UxGT("Ð£Ð²Ñ–Ð¼ÐºÐ½ÑƒÑ‚Ð¸ Ð¶Ð¸Ð²Ð»ÐµÐ½Ð½Ñ�")
#define MSG_SWITCH_PS_OFF                   _UxGT("Ð’Ð¸Ð¼ÐºÐ½ÑƒÑ‚Ð¸ Ð¶Ð¸Ð²Ð»ÐµÐ½Ð½Ñ�")
#define MSG_EXTRUDE                         _UxGT("Ð•ÐºÑ�Ñ‚Ñ€ÑƒÐ·Ñ–Ñ�")
#define MSG_RETRACT                         _UxGT("Ð’Ñ‚Ñ�Ð³ÑƒÐ²Ð°Ð½Ð½Ñ�")
#define MSG_MOVE_AXIS                       _UxGT("Ð ÑƒÑ… Ð¿Ð¾ Ð¾Ñ�Ñ�Ð¼")
#define MSG_BED_LEVELING                    _UxGT("Ð�Ñ–Ð²ÐµÐ»ÑŽÐ²Ð°Ð½Ð½Ñ� Ñ�Ñ‚Ð¾Ð»Ñƒ")
#define MSG_LEVEL_BED                       _UxGT("Ð�Ñ–Ð²ÐµÐ»ÑŽÐ²Ð°Ð½Ð½Ñ� Ñ�Ñ‚Ð¾Ð»Ñƒ")
#define MSG_MOVE_X                          _UxGT("Ð ÑƒÑ… Ð¿Ð¾ X")
#define MSG_MOVE_Y                          _UxGT("Ð ÑƒÑ… Ð¿Ð¾ Y")
#define MSG_MOVE_Z                          _UxGT("Ð ÑƒÑ… Ð¿Ð¾ Z")
#define MSG_MOVE_E                          _UxGT("Ð•ÐºÑ�Ñ‚Ñ€ÑƒÐ´ÐµÑ€")
#define MSG_MOVE_01MM                       _UxGT("Ð ÑƒÑ… Ð¿Ð¾ 0.1mm")
#define MSG_MOVE_1MM                        _UxGT("Ð ÑƒÑ… Ð¿Ð¾ 1mm")
#define MSG_MOVE_10MM                       _UxGT("Ð ÑƒÑ… Ð¿Ð¾ 10mm")
#define MSG_SPEED                           _UxGT("Ð¨Ð²Ð¸Ð´ÐºÑ–Ñ�Ñ‚ÑŒ")
#define MSG_BED_Z                           _UxGT("Z Ð¡Ñ‚Ð¾Ð»Ñƒ")
#define MSG_NOZZLE                          _UxGT("Ð¡Ð¾Ð¿Ð»Ð¾")
#define MSG_BED                             _UxGT("Ð¡Ñ‚Ñ–Ð»")
#define MSG_FAN_SPEED                       _UxGT("ÐžÑ…Ð¾Ð»Ð¾Ð´Ð¶.")
#define MSG_FLOW                            _UxGT("ÐŸÐ¾Ñ‚Ñ–Ðº")
#define MSG_CONTROL                         _UxGT("Ð�Ð°Ð»Ð°ÑˆÑ‚ÑƒÐ²Ð°Ð½Ð½Ñ�")
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" ÐœÑ–Ð½")
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" ÐœÐ°ÐºÑ�")
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Ð¤Ð°ÐºÑ‚")
#define MSG_AUTOTEMP                        _UxGT("Ð�Ð²Ñ‚Ð¾Ñ‚ÐµÐ¼Ð¿ÐµÑ€.")
#define MSG_ON                              _UxGT("Ð£Ð²Ñ–Ð¼Ðº.")
#define MSG_OFF                             _UxGT("Ð’Ð¸Ð¼Ðº. ")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("Ð’Ð¸Ð±Ñ€Ð°Ñ‚Ð¸")
#define MSG_ACC                             _UxGT("ÐŸÑ€Ð¸Ñ�Ðº.")
#define MSG_JERK                            _UxGT("Ð Ð¸Ð²Ð¾Ðº")
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("Va-Ñ€Ð¸Ð²Ð¾Ðº")
  #define MSG_VB_JERK                       _UxGT("Vb-Ñ€Ð¸Ð²Ð¾Ðº")
  #define MSG_VC_JERK                       _UxGT("Vc-Ñ€Ð¸Ð²Ð¾Ðº")
#else
  #define MSG_VA_JERK                       _UxGT("Vx-Ñ€Ð¸Ð²Ð¾Ðº")
  #define MSG_VB_JERK                       _UxGT("Vy-Ñ€Ð¸Ð²Ð¾Ðº")
  #define MSG_VC_JERK                       _UxGT("Vz-Ñ€Ð¸Ð²Ð¾Ðº")
#endif
#define MSG_VE_JERK                         _UxGT("Ve-Ñ€Ð¸Ð²Ð¾Ðº")
#define MSG_VMAX                            _UxGT("VÐ¼Ð°ÐºÑ�")
#define MSG_VMIN                            _UxGT("VÐ¼Ñ–Ð½")
#define MSG_VTRAV_MIN                       _UxGT("VÑ€ÑƒÑ…Ñƒ Ð¼Ñ–Ð½")
#define MSG_AMAX                            _UxGT("AÐ¼Ð°ÐºÑ� ")
#define MSG_A_RETRACT                       _UxGT("A-Ð²Ñ‚Ñ�Ð³ÑƒÐ².")
#define MSG_A_TRAVEL                        _UxGT("A-Ñ€ÑƒÑ…Ñƒ")
#define MSG_STEPS_PER_MM                    _UxGT("ÐšÑ€Ð¾ÐºÑ–Ð²/Ð¼Ð¼")
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("AÐºÑ€Ð¾ÐºÑ–Ð²/Ð¼Ð¼")
  #define MSG_BSTEPS                        _UxGT("BÐºÑ€Ð¾ÐºÑ–Ð²/Ð¼Ð¼")
  #define MSG_CSTEPS                        _UxGT("CÐºÑ€Ð¾ÐºÑ–Ð²/Ð¼Ð¼")
#else
  #define MSG_ASTEPS                        _UxGT("XÐºÑ€Ð¾ÐºÑ–Ð²/Ð¼Ð¼")
  #define MSG_BSTEPS                        _UxGT("YÐºÑ€Ð¾ÐºÑ–Ð²/Ð¼Ð¼")
  #define MSG_CSTEPS                        _UxGT("ZÐºÑ€Ð¾ÐºÑ–Ð²/Ð¼Ð¼")
#endif
#define MSG_ESTEPS                          _UxGT("EÐºÑ€Ð¾ÐºÑ–Ð²/Ð¼Ð¼")
#define MSG_E1STEPS                         _UxGT("E1ÐºÑ€Ð¾ÐºÑ–Ð²/Ð¼Ð¼")
#define MSG_E2STEPS                         _UxGT("E2ÐºÑ€Ð¾ÐºÑ–Ð²/Ð¼Ð¼")
#define MSG_E3STEPS                         _UxGT("E3ÐºÑ€Ð¾ÐºÑ–Ð²/Ð¼Ð¼")
#define MSG_E4STEPS                         _UxGT("E4ÐºÑ€Ð¾ÐºÑ–Ð²/Ð¼Ð¼")
#define MSG_E5STEPS                         _UxGT("E5ÐºÑ€Ð¾ÐºÑ–Ð²/Ð¼Ð¼")
#define MSG_TEMPERATURE                     _UxGT("Ð¢ÐµÐ¼Ð¿ÐµÑ€Ð°Ñ‚ÑƒÑ€Ð°")
#define MSG_MOTION                          _UxGT("Ð ÑƒÑ…")
#define MSG_FILAMENT                        _UxGT("Ð’Ð¾Ð»Ð¾ÐºÐ½Ð¾")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E Ð² Ð¼Ð¼3")
#define MSG_FILAMENT_DIAM                   _UxGT("Ð”Ñ–Ð°Ð¼. Ð²Ð¾Ð»Ð¾Ðº.")
#define MSG_CONTRAST                        _UxGT("ÐºÐ¾Ð½Ñ‚Ñ€Ð°Ñ�Ñ‚ LCD")
#define MSG_STORE_EEPROM                    _UxGT("Ð—Ð±ÐµÑ€ÐµÐ³Ñ‚Ð¸ Ð² ÐŸÐ—ÐŸ")
#define MSG_LOAD_EEPROM                     _UxGT("Ð—Ñ‡Ð¸Ñ‚Ð°Ñ‚Ð¸ Ð· ÐŸÐ—ÐŸ")
#define MSG_RESTORE_FAILSAFE                _UxGT("Ð’Ñ–Ð´Ð½Ð¾Ð²Ð¸Ñ‚Ð¸ Ð±Ð°Ð·Ð¾Ð²Ñ–")
#define MSG_REFRESH                         _UxGT("ÐŸÐ¾Ð½Ð¾Ð²Ð¸Ñ‚Ð¸")
#define MSG_WATCH                           _UxGT("Ð†Ð½Ñ„Ð¾Ñ€Ð¼Ð°Ñ†Ñ–Ñ�")
#define MSG_PREPARE                         _UxGT("ÐŸÑ–Ð´Ð³Ð¾Ñ‚ÑƒÐ²Ð°Ñ‚Ð¸")
#define MSG_TUNE                            _UxGT("ÐŸÑ–Ð´Ð»Ð°ÑˆÑ‚ÑƒÐ²Ð°Ð½Ð½Ñ�")
#define MSG_PAUSE_PRINT                     _UxGT("ÐŸÑ€Ð¸Ð·ÑƒÐ¿Ð¸Ð½Ð¸Ñ‚Ð¸ Ð´Ñ€ÑƒÐº")
#define MSG_RESUME_PRINT                    _UxGT("Ð’Ñ–Ð´Ð½Ð¾Ð²Ð¸Ñ‚Ð¸ Ð´Ñ€ÑƒÐº")
#define MSG_STOP_PRINT                      _UxGT("Ð¡ÐºÐ°Ñ�ÑƒÐ²Ð°Ñ‚Ð¸ Ð´Ñ€ÑƒÐº")
#define MSG_CARD_MENU                       _UxGT("Ð”Ñ€ÑƒÐºÑƒÐ²Ð°Ñ‚Ð¸ Ð· SD")
#define MSG_NO_CARD                         _UxGT("Ð’Ñ–Ð´Ñ�ÑƒÑ‚Ð½Ñ� SD ÐºÐ°Ñ€Ñ‚.")
#define MSG_DWELL                           _UxGT("Ð¡Ð¿Ð»Ñ�Ñ‡ÐºÐ°...")
#define MSG_USERWAIT                        _UxGT("ÐžÑ‡Ñ–ÐºÑƒÐ²Ð°Ð½Ð½Ñ� Ð´Ñ–Ð¹...")
#define MSG_PRINT_ABORTED                   _UxGT("Ð”Ñ€ÑƒÐº Ñ�ÐºÐ°Ñ�Ð¾Ð²Ð°Ð½Ð¾")
#define MSG_NO_MOVE                         _UxGT("Ð�ÐµÐ¼Ð°Ñ” Ñ€ÑƒÑ…Ñƒ.")
#define MSG_KILLED                          _UxGT("ÐŸÐ•Ð Ð•Ð Ð’Ð�Ð�Ðž. ")
#define MSG_STOPPED                         _UxGT("Ð—Ð£ÐŸÐ˜Ð�Ð•Ð�Ðž. ")
#define MSG_FILAMENTCHANGE                  _UxGT("Ð—Ð¼Ñ–Ð½Ð° Ð²Ð¾Ð»Ð¾ÐºÐ½Ð°")
#define MSG_INIT_SDCARD                     _UxGT("Ð¡Ñ‚Ð°Ñ€Ñ‚ SD ÐºÐ°Ñ€Ñ‚ÐºÐ¸")
#define MSG_CNG_SDCARD                      _UxGT("Ð—Ð°Ð¼Ñ–Ð½Ð° SD ÐºÐ°Ñ€Ñ‚Ð¸")
#define MSG_ZPROBE_OUT                      _UxGT("Z Ð´ÐµÑ‚. Ð½Ðµ Ð² Ð¼ÐµÐ¶Ð°Ñ…")
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch Ð¡Ð°Ð¼Ð¾-Ð¢ÐµÑ�Ñ‚")
#define MSG_BLTOUCH_RESET                   _UxGT("Ð¡ÐºÐ¸Ð½ÑƒÑ‚Ð¸ BLTouch")
#define MSG_HOME                            _UxGT("Ð”Ñ–Ð¼")  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("Ð¿ÐµÑ€ÑˆÐ¸Ð¹")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Ð—Ð¼Ñ–Ñ‰ÐµÐ½Ð½Ñ� Z")
#define MSG_BABYSTEP_X                      _UxGT("ÐœÑ–ÐºÑ€Ð¾ÐºÑ€Ð¾Ðº X")
#define MSG_BABYSTEP_Y                      _UxGT("ÐœÑ–ÐºÑ€Ð¾ÐºÑ€Ð¾Ðº Y")
#define MSG_BABYSTEP_Z                      _UxGT("ÐœÑ–ÐºÑ€Ð¾ÐºÑ€Ð¾Ðº Z")
#define MSG_ENDSTOP_ABORT                   _UxGT("Ð½ÐµÐ²Ð´Ð°Ñ‡Ð° ÐºÑ–Ð½Ñ†ÐµÐ²Ð¸ÐºÐ°")
#define MSG_HEATING_FAILED_LCD              _UxGT("Ð�ÐµÐ²Ð´Ð°Ð»Ð¸Ð¹ Ð½Ð°Ð³Ñ€Ñ–Ð²")
#define MSG_THERMAL_RUNAWAY                 _UxGT("Ð—Ð‘Ð†Ð™ Ð¢Ð•ÐœÐŸÐ•Ð Ð�Ð¢Ð£Ð Ð˜")
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#define MSG_HALTED                          _UxGT("ÐŸÐ Ð˜Ð�Ð¢Ð•Ð  Ð—Ð£ÐŸÐ˜Ð�Ð•Ð�Ðž")
#define MSG_PLEASE_RESET                    _UxGT("ÐŸÐµÑ€ÐµÐ·Ð°Ð²Ð°Ð½Ñ‚Ð°Ð¶Ñ‚Ðµ")
#define MSG_SHORT_DAY                       _UxGT("Ð´") // One character only
#define MSG_SHORT_HOUR                      _UxGT("Ð³") // One character only
#define MSG_SHORT_MINUTE                    _UxGT("Ñ…") // One character only
#define MSG_HEATING                         _UxGT("Ð�Ð°Ð³Ñ€Ñ–Ð²Ð°Ð½Ð½Ñ�...")
#define MSG_BED_HEATING                     _UxGT("Ð�Ð°Ð³Ñ€Ñ–Ð²Ð°Ð½Ð½Ñ� Ñ�Ñ‚Ð¾Ð»Ñƒ...")
#define MSG_DELTA_CALIBRATE                 _UxGT("ÐšÐ°Ð»Ñ–Ð±Ñ€. Delta")
#define MSG_DELTA_CALIBRATE_X               _UxGT("ÐšÐ°Ð»Ñ–Ð±Ñ€ÑƒÐ²Ð°Ð½Ð½Ñ� X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("ÐšÐ°Ð»Ñ–Ð±Ñ€ÑƒÐ²Ð°Ð½Ð½Ñ� Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("ÐšÐ°Ð»Ñ–Ð±Ñ€ÑƒÐ²Ð°Ð½Ð½Ñ� Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("ÐšÐ°Ð»Ñ–Ð±Ñ€. Ð¦ÐµÐ½Ñ‚Ñ€Ñƒ")

#define MSG_INFO_MENU                       _UxGT("ÐŸÑ€Ð¾ Ð¿Ñ€Ð¸Ð½Ñ‚ÐµÑ€")
#define MSG_INFO_PRINTER_MENU               _UxGT("Ð†Ð½Ñ„Ð¾Ñ€Ð¼Ð°Ñ†Ñ–Ñ�")
#define MSG_INFO_STATS_MENU                 _UxGT("Ð¡Ñ‚Ð°Ñ‚Ð¸Ñ�Ñ‚Ð¸ÐºÐ°")
#define MSG_INFO_BOARD_MENU                 _UxGT("ÐŸÑ€Ð¾ Ð¿Ð»Ð°Ñ‚Ñƒ")
#define MSG_INFO_THERMISTOR_MENU            _UxGT("Ð¢ÐµÑ€Ð¼Ñ–Ñ�Ñ‚Ð¾Ñ€Ð¸")
#define MSG_INFO_EXTRUDERS                  _UxGT("Ð•ÐºÑ�Ñ‚Ñ€ÑƒÐ´ÐµÑ€Ð¸")
#define MSG_INFO_BAUDRATE                   _UxGT("Ð±Ñ–Ñ‚/Ñ�")
#define MSG_INFO_PROTOCOL                   _UxGT("ÐŸÑ€Ð¾Ñ‚Ð¾ÐºÐ¾Ð»")
#define MSG_CASE_LIGHT                      _UxGT("ÐŸÑ–Ð´Ñ�Ð²Ñ–Ñ‚ÐºÐ°")

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("Ðš-Ñ�Ñ‚ÑŒ Ð´Ñ€ÑƒÐºÑ–Ð²")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Ð—Ð°Ð²ÐµÑ€ÑˆÐµÐ½Ð¾")
  #define MSG_INFO_PRINT_TIME               _UxGT("Ð’ÐµÑ�ÑŒ Ñ‡Ð°Ñ� Ð´Ñ€ÑƒÐºÑƒ")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Ð�Ð°Ð¹Ð´Ð¾Ð²ÑˆÐ¸Ð¹ Ñ‡Ð°Ñ�")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Ð•ÐºÑ�Ñ‚Ñ€ÑƒÐ´Ð¾Ð²Ð°Ð½Ð¾")
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("Ð”Ñ€ÑƒÐºÑ–Ð²")
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Ð—Ð°Ð²ÐµÑ€ÑˆÐµÐ½Ð¾")
  #define MSG_INFO_PRINT_TIME               _UxGT("Ð—Ð°Ð³Ð°Ð»Ð¾Ð¼")
  #define MSG_INFO_PRINT_LONGEST            _UxGT("Ð�Ð°Ð¹Ð´Ð¾Ð²ÑˆÐ¸Ð¹")
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Ð•ÐºÑ�Ð´Ñ€ÑƒÐ´.")
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("ÐœÑ–Ð½ Ð¢ÐµÐ¼Ð¿.")
#define MSG_INFO_MAX_TEMP                   _UxGT("ÐœÐ°ÐºÑ� Ð¢ÐµÐ¼Ð¿.")
#define MSG_INFO_PSU                        _UxGT("Ð”Ð¶ÐµÑ€ÐµÐ»Ð¾ Ð¶Ð¸Ð².")

#define MSG_DRIVE_STRENGTH                  _UxGT("Ð¡Ð¸Ð»Ð° Ð¼Ð¾Ñ‚Ð¾Ñ€Ñƒ")
#define MSG_DAC_PERCENT                     _UxGT("% Ð¼Ð¾Ñ‚Ð¾Ñ€Ñƒ")
#define MSG_DAC_EEPROM_WRITE                _UxGT("Ð—Ð°Ð¿Ð¸Ñ� Ð¦Ð�ÐŸ Ð½Ð° ÐŸÐ—ÐŸ")

#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("Ð’Ñ–Ð´Ð½Ð¾Ð²Ð¸Ñ‚Ð¸ Ð´Ñ€ÑƒÐº")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Ð—Ð°Ñ‡ÐµÐºÐ°Ð¹Ñ‚Ðµ Ð½Ð°")
  #define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("Ð¿Ð¾Ñ‡Ð°Ñ‚Ð¾Ðº Ð·Ð°Ð¼Ñ–Ð½Ð¸")
  #define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("Ð²Ð¾Ð»Ð¾ÐºÐ½Ð°")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Ð—Ð°Ñ‡ÐµÐºÐ°Ð¹Ñ‚Ðµ Ð½Ð°")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("Ð²Ð¸Ð²Ñ–Ð´ Ð²Ð¾Ð»Ð¾ÐºÐ½Ð°")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Ð’Ñ�Ñ‚Ð°Ð²Ñ‚Ðµ Ð²Ð¾Ð»Ð¾ÐºÐ½Ð¾")
  #define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("Ñ‚Ð° Ð½Ð°Ñ‚Ð¸Ñ�Ð½Ñ–Ñ‚ÑŒ Ð´Ð»Ñ�")
  #define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("Ð¿Ñ€Ð¾Ð´Ð¾Ð²Ð¶ÐµÐ½Ð½Ñ�...")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Ð—Ð°Ñ‡ÐµÐºÐ°Ð¹Ñ‚Ðµ Ð½Ð°")
  #define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("Ð²Ð²Ñ–Ð´ Ð²Ð¾Ð»Ð¾ÐºÐ½Ð°")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Ð—Ð°Ñ‡ÐµÐºÐ°Ð¹Ñ‚Ðµ Ð½Ð°")
  #define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("Ð²Ñ–Ð´Ð½Ð¾Ð²Ð»ÐµÐ½Ð½Ñ�")
  #define MSG_FILAMENT_CHANGE_RESUME_3        _UxGT("Ð´Ñ€ÑƒÐºÑƒ")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("Ð—Ð°Ñ‡ÐµÐºÐ°Ð¹Ñ‚Ðµ...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Ð’Ð¸Ð²Ñ–Ð´...")
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("Ð’Ñ�Ñ‚Ð°Ð²Ñ‚Ðµ Ñ– Ð½Ð°Ñ‚.")
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Ð’Ð²Ñ–Ð´...")
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("Ð’Ñ–Ð´Ð½Ð¾Ð²Ð»ÐµÐ½Ð½Ñ�...")
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_UK_H
