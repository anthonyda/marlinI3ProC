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
 * Japanese (Kana)
 * UTF-8 for Graphical Display
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */

#ifndef LANGUAGE_KANA_UTF_H
#define LANGUAGE_KANA_UTF_H

#define MAPPER_E382E383
#define DISPLAY_CHARSET_ISO10646_KANA
#define CHARSIZE 3

// This just to show the potential benefit of unicode.
// This translation can be improved by using the full charset of unicode codeblock U+30A0 to U+30FF.

// ç‰‡ä»®å��è¡¨ç¤ºå®šç¾©
#define WELCOME_MSG                         MACHINE_NAME _UxGT(" ready.")
#define MSG_SD_INSERTED                     _UxGT("ã‚«ãƒ¼ãƒ‰ã‚¬ã‚½ã‚¦ãƒ‹ãƒ¥ã‚¦ã‚µãƒ¬ãƒžã‚·ã‚¿")        // "Card inserted"
#define MSG_SD_REMOVED                      _UxGT("ã‚«ãƒ¼ãƒ‰ã‚¬ã‚¢ãƒªãƒžã‚»ãƒ³")               // "Card removed"
#define MSG_LCD_ENDSTOPS                    _UxGT("ã‚¨ãƒ³ãƒ‰ã‚¹ãƒˆãƒƒãƒ—")                  // "Endstops" // Max length 8 characters
#define MSG_MAIN                            _UxGT("ãƒ¡ã‚¤ãƒ³")                       // "Main"
#define MSG_AUTOSTART                       _UxGT("ã‚¸ãƒ‰ã‚¦ã‚«ã‚¤ã‚·")                   // "Autostart"
#define MSG_DISABLE_STEPPERS                _UxGT("ãƒ¢ãƒ¼ã‚¿ãƒ¼ãƒ‡ãƒ³ã‚²ãƒ³ ã‚ªãƒ•")            // "Disable steppers"
#define MSG_DEBUG_MENU                      _UxGT("ãƒ‡ãƒ�ãƒƒã‚°ãƒ¡ãƒ‹ãƒ¥ãƒ¼")                // "Debug Menu"
#define MSG_PROGRESS_BAR_TEST               _UxGT("ãƒ—ãƒ­ã‚°ãƒ¬ã‚¹ãƒ�ãƒ¼ ãƒ†ã‚¹ãƒˆ")            // "Progress Bar Test"
#define MSG_AUTO_HOME                       _UxGT("ã‚²ãƒ³ãƒ†ãƒ³ãƒ•ãƒƒã‚­")                  // "Auto home"
#define MSG_AUTO_HOME_X                     _UxGT("Xã‚¸ã‚¯ ã‚²ãƒ³ãƒ†ãƒ³ãƒ•ãƒƒã‚­")             // "Home X"
#define MSG_AUTO_HOME_Y                     _UxGT("Yã‚¸ã‚¯ ã‚²ãƒ³ãƒ†ãƒ³ãƒ•ãƒƒã‚­")             // "Home Y"
#define MSG_AUTO_HOME_Z                     _UxGT("Zã‚¸ã‚¯ ã‚²ãƒ³ãƒ†ãƒ³ãƒ•ãƒƒã‚­")             // "Home Z"
#define MSG_TMC_Z_CALIBRATION               _UxGT("Zã‚¸ã‚¯ ã‚³ã‚¦ã‚»ã‚¤")                 // "Calibrate Z"
#define MSG_LEVEL_BED_HOMING                _UxGT("ã‚²ãƒ³ãƒ†ãƒ³ãƒ•ãƒƒã‚­ãƒ�ãƒ¥ã‚¦")              // "Homing XYZ"
#define MSG_LEVEL_BED_WAITING               _UxGT("ãƒ¬ãƒ™ãƒªãƒ³ã‚°ã‚«ã‚¤ã‚·")                // "Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("ãƒ„ã‚®ãƒŽã‚½ã‚¯ãƒ†ã‚¤ãƒ†ãƒ³ãƒ˜")             // "Next Point"
#define MSG_LEVEL_BED_DONE                  _UxGT("ãƒ¬ãƒ™ãƒªãƒ³ã‚°ã‚«ãƒ³ãƒªãƒ§ã‚¦")              // "Leveling Done!"
#define MSG_SET_HOME_OFFSETS                _UxGT("ã‚­ã‚¸ãƒ¥ãƒ³ã‚ªãƒ•ã‚»ãƒƒãƒˆã‚»ãƒƒãƒ†ã‚¤")         // "Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("ã‚ªãƒ•ã‚»ãƒƒãƒˆã‚¬ãƒ†ã‚­ãƒ¨ã‚¦ã‚µãƒ¬ãƒžã‚·ã‚¿")       // "Offsets applied"
#define MSG_SET_ORIGIN                      _UxGT("ã‚­ã‚¸ãƒ¥ãƒ³ã‚»ãƒƒãƒˆ")                 // "Set origin"
#define MSG_PREHEAT_1                       _UxGT("PLA ãƒ¨ãƒ�ãƒ„")                   // "Preheat PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   _UxGT("PLA ã‚¹ãƒ™ãƒ†ãƒ¨ãƒ�ãƒ„")              // " All"
#define MSG_PREHEAT_1_BEDONLY               _UxGT("PLA ãƒ™ãƒƒãƒ‰ãƒ¨ãƒ�ãƒ„")              // " Bed"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT("ã‚»ãƒƒãƒ†ã‚¤")       // " conf"
#define MSG_PREHEAT_2                       _UxGT("ABS ãƒ¨ãƒ�ãƒ„")                  // "Preheat ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   _UxGT("ABS ã‚¹ãƒ™ãƒ†ãƒ¨ãƒ�ãƒ„")              // " All"
#define MSG_PREHEAT_2_BEDONLY               _UxGT("ABS ãƒ™ãƒƒãƒ‰ãƒ¨ãƒ�ãƒ„")              // " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT("ã‚»ãƒƒãƒ†ã‚¤")       // " conf"
#define MSG_COOLDOWN                        _UxGT("ã‚«ãƒ�ãƒ„ãƒ†ã‚¤ã‚·")                  // "Cooldown"
#define MSG_SWITCH_PS_ON                    _UxGT("ãƒ‡ãƒ³ã‚²ãƒ³ ã‚ªãƒ³")                 // "Switch power on"
#define MSG_SWITCH_PS_OFF                   _UxGT("ãƒ‡ãƒ³ã‚²ãƒ³ ã‚ªãƒ•")                 // "Switch power off"
#define MSG_EXTRUDE                         _UxGT("ã‚ªã‚·ãƒ€ã‚·")                     // "Extrude"
#define MSG_RETRACT                         _UxGT("ãƒ’ã‚­ã‚³ãƒŸã‚»ãƒƒãƒ†ã‚¤")                // "Retract"
#define MSG_MOVE_AXIS                       _UxGT("ã‚¸ã‚¯ã‚¤ãƒ‰ã‚¦")                    // "Move axis"
#define MSG_BED_LEVELING                    _UxGT("ãƒ™ãƒƒãƒ‰ãƒ¬ãƒ™ãƒªãƒ³ã‚°")                // "Bed leveling"
#define MSG_LEVEL_BED                       _UxGT("ãƒ™ãƒƒãƒ‰ãƒ¬ãƒ™ãƒªãƒ³ã‚°")                // "Level bed"
#define MSG_MOVING                          _UxGT("ã‚¤ãƒ‰ã‚¦ãƒ�ãƒ¥ã‚¦...")                // "Moving..."
#define MSG_FREE_XY                         _UxGT("XYã‚¸ã‚¯ ã‚«ã‚¤ãƒ›ã‚¦")                // "Free XY"
#define MSG_MOVE_X                          _UxGT("Xã‚¸ã‚¯ ã‚¤ãƒ‰ã‚¦")                  // "Move X"
#define MSG_MOVE_Y                          _UxGT("Yã‚¸ã‚¯ ã‚¤ãƒ‰ã‚¦")                  // "Move Y"
#define MSG_MOVE_Z                          _UxGT("Zã‚¸ã‚¯ ã‚¤ãƒ‰ã‚¦")                  // "Move Z"
#define MSG_MOVE_E                          _UxGT("ã‚¨ã‚¯ã‚¹ãƒˆãƒ«ãƒ¼ãƒ€ãƒ¼")                // "Extruder"
#define MSG_MOVE_01MM                       _UxGT("0.1mm ã‚¤ãƒ‰ã‚¦")                 // "Move 0.1mm"
#define MSG_MOVE_1MM                        _UxGT("  1mm ã‚¤ãƒ‰ã‚¦")                 // "Move 1mm"
#define MSG_MOVE_10MM                       _UxGT(" 10mm ã‚¤ãƒ‰ã‚¦")                 // "Move 10mm"
#define MSG_SPEED                           _UxGT("ã‚½ã‚¯ãƒ‰")                       // "Speed"
#define MSG_BED_Z                           _UxGT("Zã‚ªãƒ•ã‚»ãƒƒãƒˆ")                   // "Bed Z"
#define MSG_NOZZLE                          _UxGT("ãƒŽã‚ºãƒ«")                       // "Nozzle"
#define MSG_BED                             _UxGT("ãƒ™ãƒƒãƒ‰")                       // "Bed"
#define MSG_FAN_SPEED                       _UxGT("ãƒ•ã‚¡ãƒ³ã‚½ã‚¯ãƒ‰")                    // "Fan speed"
#define MSG_FLOW                            _UxGT("ãƒˆã‚·ãƒ¥ãƒ„ãƒªãƒ§ã‚¦")                   // "Flow"
#define MSG_CONTROL                         _UxGT("ã‚»ã‚¤ã‚®ãƒ§")                      // "Control"
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" ã‚µã‚¤ãƒ†ã‚¤") // " Min"
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" ã‚µã‚¤ã‚³ã‚¦") // " Max"
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" ãƒ•ã‚¡ã‚¯ã‚¿ãƒ¼") // " Fact"
#define MSG_AUTOTEMP                        _UxGT("ã‚¸ãƒ‰ã‚¦ã‚ªãƒ³ãƒ‰ã‚»ã‚¤ã‚®ãƒ§")               // "Autotemp"
#define MSG_ON                              _UxGT("ã‚ªãƒ³ ")                         // "On "
#define MSG_OFF                             _UxGT("ã‚ªãƒ• ")                         // "Off"
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_SELECT                          _UxGT("ã‚»ãƒ³ã‚¿ã‚¯")                     // "Select"
#define MSG_ACC                             _UxGT("ã‚«ã‚½ã‚¯ãƒ‰ mm/s2")               // "Accel"
#define MSG_JERK                            _UxGT("ãƒ¤ã‚¯ãƒ‰ mm/s")                  // "Jerk"
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("Aã‚¸ã‚¯ ãƒ¤ã‚¯ãƒ‰ mm/s")             // "Va-jerk"
  #define MSG_VB_JERK                       _UxGT("Bã‚¸ã‚¯ ãƒ¤ã‚¯ãƒ‰ mm/s")             // "Vb-jerk"
  #define MSG_VC_JERK                       _UxGT("Cã‚¸ã‚¯ ãƒ¤ã‚¯ãƒ‰ mm/s")             // "Vc-jerk"
#else
  #define MSG_VA_JERK                       _UxGT("Xã‚¸ã‚¯ ãƒ¤ã‚¯ãƒ‰ mm/s")             // "Vx-jerk"
  #define MSG_VB_JERK                       _UxGT("Yã‚¸ã‚¯ ãƒ¤ã‚¯ãƒ‰ mm/s")             // "Vy-jerk"
  #define MSG_VC_JERK                       _UxGT("Zã‚¸ã‚¯ ãƒ¤ã‚¯ãƒ‰ mm/s")             // "Vz-jerk"
#endif
#define MSG_VE_JERK                         _UxGT("ã‚¨ã‚¯ã‚¹ãƒˆãƒ«ãƒ¼ãƒ€ãƒ¼ ãƒ¤ã‚¯ãƒ‰")          // "Ve-jerk"
#define MSG_VMAX                            _UxGT("ã‚µã‚¤ãƒ€ã‚¤ã‚ªã‚¯ãƒªã‚½ã‚¯ãƒ‰ ")            // "Vmax "
#define MSG_VMIN                            _UxGT("ã‚µã‚¤ã‚·ãƒ§ã‚¦ã‚ªã‚¯ãƒªã‚½ã‚¯ãƒ‰")           // "Vmin"
#define MSG_VTRAV_MIN                       _UxGT("ã‚µã‚¤ã‚·ãƒ§ã‚¦ã‚¤ãƒ‰ã‚¦ã‚½ã‚¯ãƒ‰")           // "VTrav min"
#define MSG_ACCELERATION                    MSG_ACC
#define MSG_AMAX                            _UxGT("ã‚µã‚¤ãƒ€ã‚¤ã‚«ã‚½ã‚¯ãƒ‰ ")              // "Amax "
#define MSG_A_RETRACT                       _UxGT("ãƒ’ã‚­ã‚³ãƒŸã‚«ã‚½ã‚¯ãƒ‰")               // "A-retract"
#define MSG_A_TRAVEL                        _UxGT("ã‚¤ãƒ‰ã‚¦ã‚«ã‚½ã‚¯ãƒ‰")                // "A-travel"
#define MSG_TEMPERATURE                     _UxGT("ã‚ªãƒ³ãƒ‰")                      // "Temperature"
#define MSG_MOTION                          _UxGT("ã‚¦ã‚´ã‚­ã‚»ãƒƒãƒ†ã‚¤")                // "Motion"
#define MSG_FILAMENT                        _UxGT("ãƒ•ã‚£ãƒ©ãƒ¡ãƒ³ãƒˆ")                   // "Filament"
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm3")
#define MSG_FILAMENT_DIAM                   _UxGT("ãƒ•ã‚£ãƒ©ãƒ¡ãƒ³ãƒˆãƒ�ãƒ§ãƒƒã‚±ã‚¤")            // "Fil. Dia."
#define MSG_CONTRAST                        _UxGT("LCDã‚³ãƒ³ãƒˆãƒ©ã‚¹ãƒˆ")               // "LCD contrast"
#define MSG_STORE_EEPROM                    _UxGT("ãƒ¡ãƒ¢ãƒªãƒ˜ã‚«ã‚¯ãƒŽã‚¦")               // "Store memory"
#define MSG_LOAD_EEPROM                     _UxGT("ãƒ¡ãƒ¢ãƒªã‚«ãƒ©ãƒ¨ãƒŸã‚³ãƒŸ")               // "Load memory"
#define MSG_RESTORE_FAILSAFE                _UxGT("ã‚»ãƒƒãƒ†ã‚¤ãƒªã‚»ãƒƒãƒˆ")               // "Restore failsafe"
#define MSG_REFRESH                         _UxGT("ãƒªãƒ•ãƒ¬ãƒƒã‚·ãƒ¥")                  // "Refresh"
#define MSG_WATCH                           _UxGT("ã‚¸ãƒ§ã‚¦ãƒ›ã‚¦ã‚¬ãƒ¡ãƒ³")               // "Info screen"
#define MSG_PREPARE                         _UxGT("ã‚¸ãƒ¥ãƒ³ãƒ“ã‚»ãƒƒãƒ†ã‚¤")               // "Prepare"
#define MSG_TUNE                            _UxGT("ãƒ�ãƒ§ã‚¦ã‚»ã‚¤")                    // "Tune"
#define MSG_PAUSE_PRINT                     _UxGT("ã‚¤ãƒ�ã‚¸ãƒ†ã‚¤ã‚·")                  // "Pause print"
#define MSG_RESUME_PRINT                    _UxGT("ãƒ—ãƒªãƒ³ãƒˆã‚µã‚¤ã‚«ã‚¤")                // "Resume print"
#define MSG_STOP_PRINT                      _UxGT("ãƒ—ãƒªãƒ³ãƒˆãƒ†ã‚¤ã‚·")                 // "Stop print"
#define MSG_CARD_MENU                       _UxGT("SDã‚«ãƒ¼ãƒ‰ã‚«ãƒ©ãƒ—ãƒªãƒ³ãƒˆ")            // "Print from SD"
#define MSG_NO_CARD                         _UxGT("SDã‚«ãƒ¼ãƒ‰ã‚¬ã‚¢ãƒªãƒžã‚»ãƒ³")            // "No SD card"
#define MSG_DWELL                           _UxGT("ã‚­ãƒ¥ã‚¦ã‚·...")                  // "Sleep..."
#define MSG_USERWAIT                        _UxGT("ã‚·ãƒ�ãƒ©ã‚¯ã‚ªãƒžãƒ�ã‚¯ãƒ€ã‚µã‚¤...")        // "Wait for user..."
#define MSG_PRINT_ABORTED                   _UxGT("ãƒ—ãƒªãƒ³ãƒˆã‚¬ãƒ�ãƒ¥ã‚¦ã‚·ã‚µãƒ¬ãƒžã‚·ã‚¿")       // "Print aborted"
#define MSG_NO_MOVE                         _UxGT("ã‚¦ã‚´ã‚­ãƒžã‚»ãƒ³")                  // "No move."
#define MSG_KILLED                          _UxGT("ãƒ’ã‚¸ãƒ§ã‚¦ãƒ†ã‚¤ã‚·")                  // "KILLED. "
#define MSG_STOPPED                         _UxGT("ãƒ†ã‚¤ã‚·ã‚·ãƒžã‚·ã‚¿")                  // "STOPPED. "
#define MSG_CONTROL_RETRACT                 _UxGT("ãƒ’ã‚­ã‚³ãƒŸãƒªãƒ§ã‚¦ mm")                // "Retract mm"
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("ãƒ’ã‚­ã‚³ãƒŸãƒªãƒ§ã‚¦S mm")               // "Swap Re.mm"
#define MSG_CONTROL_RETRACTF                _UxGT("ãƒ’ã‚­ã‚³ãƒŸã‚½ã‚¯ãƒ‰ mm/s")             // "Retract  V"
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("ãƒŽã‚ºãƒ«ã‚¿ã‚¤ãƒ’ mm")                // "Hop mm"
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("ãƒ›ã‚·ãƒ§ã‚¦ãƒªãƒ§ã‚¦ mm")               // "UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("ãƒ›ã‚·ãƒ§ã‚¦ãƒªãƒ§ã‚¦S mm")              // "S UnRet mm"
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("ãƒ›ã‚·ãƒ§ã‚¦ã‚½ã‚¯ãƒ‰ mm/s")            // "UnRet  V"
#define MSG_AUTORETRACT                     _UxGT("ã‚¸ãƒ‰ã‚¦ãƒ’ã‚­ã‚³ãƒŸ")                 // "AutoRetr."
#define MSG_FILAMENTCHANGE                  _UxGT("ãƒ•ã‚£ãƒ©ãƒ¡ãƒ³ãƒˆã‚³ã‚¦ã‚«ãƒ³")              // "Change filament"
#define MSG_INIT_SDCARD                     _UxGT("SDã‚«ãƒ¼ãƒ‰ã‚µã‚¤ãƒ¨ãƒŸã‚³ãƒŸ")             // "Init. SD card"
#define MSG_CNG_SDCARD                      _UxGT("SDã‚«ãƒ¼ãƒ‰ã‚³ã‚¦ã‚«ãƒ³")               // "Change SD card"
#define MSG_ZPROBE_OUT                      _UxGT("Zãƒ—ãƒ­ãƒ¼ãƒ– ãƒ™ãƒƒãƒ‰ã‚¬ã‚¤")            // "Z probe out. bed"
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch ã‚¸ã‚³ã‚·ãƒ³ãƒ€ãƒ³")          // "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   _UxGT("BLTouch ãƒªã‚»ãƒƒãƒˆ")             // "Reset BLTouch"
#define MSG_HOME                            _UxGT("ã‚µã‚­ãƒ‹")                      // "Home" // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("ãƒ²ãƒ•ãƒƒã‚­ã‚µã‚»ãƒ†ã‚¯ãƒ€ã‚µã‚¤")           // "first"
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Zã‚ªãƒ•ã‚»ãƒƒãƒˆ")                   // "Z Offset"
#define MSG_BABYSTEP_X                      _UxGT("Xã‚¸ã‚¯ ãƒ“ãƒ‰ã‚¦")                  // "Babystep X"
#define MSG_BABYSTEP_Y                      _UxGT("Yã‚¸ã‚¯ ãƒ“ãƒ‰ã‚¦")                  // "Babystep Y"
#define MSG_BABYSTEP_Z                      _UxGT("Zã‚¸ã‚¯ ãƒ“ãƒ‰ã‚¦")                  // "Babystep Z"
#define MSG_ENDSTOP_ABORT                   _UxGT("ã‚¤ãƒ‰ã‚¦ã‚²ãƒ³ã‚«ã‚¤ã‚±ãƒ³ãƒ�ã‚­ãƒŽã‚¦")         // "Endstop abort"
#define MSG_HEATING_FAILED_LCD              _UxGT("ã‚«ãƒ�ãƒ„ã‚·ãƒƒãƒ‘ã‚¤")                 // "Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("ã‚¨ãƒ©ãƒ¼:ã‚¸ãƒ§ã‚¦ãƒ�ãƒ§ã‚¦ã‚µãƒ¼ãƒŸã‚¹ã‚¿ãƒ¼ã‚­ãƒŽã‚¦")  // "Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 _UxGT("ãƒ�ãƒ„ãƒœã‚¦ã‚½ã‚¦")                   // "THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     _UxGT("ã‚¨ãƒ©ãƒ¼:ã‚µã‚¤ã‚³ã‚¦ã‚ªãƒ³ãƒ�ãƒ§ã‚¦ã‚«")         // "Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     _UxGT("ã‚¨ãƒ©ãƒ¼:ã‚µã‚¤ãƒ†ã‚¤ã‚ªãƒ³ãƒŸãƒžãƒ³")          // "Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 _UxGT("ã‚¨ãƒ©ãƒ¼:ãƒ™ãƒƒãƒ‰ ã‚µã‚¤ã‚³ã‚¦ã‚ªãƒ³ãƒ�ãƒ§ã‚¦ã‚«")    // "Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 _UxGT("ã‚¨ãƒ©ãƒ¼:ãƒ™ãƒƒãƒ‰ ã‚µã‚¤ãƒ†ã‚¤ã‚ªãƒ³ãƒŸãƒžãƒ³")     // "Err: MINTEMP BED"
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST // "G28 Z Forbidden"
#define MSG_HALTED                          _UxGT("ãƒ—ãƒªãƒ³ã‚¿ãƒ¼ãƒ�ãƒ†ã‚¤ã‚·ã‚·ãƒžã‚·ã‚¿")         // "PRINTER HALTED"
#define MSG_PLEASE_RESET                    _UxGT("ãƒªã‚»ãƒƒãƒˆã‚·ãƒ†ã‚¯ãƒ€ã‚µã‚¤")              // "Please reset"
#define MSG_SHORT_DAY                       _UxGT("d")                          // One character only
#define MSG_SHORT_HOUR                      _UxGT("h")                          // One character only
#define MSG_SHORT_MINUTE                    _UxGT("m")                          // One character only
#define MSG_HEATING                         _UxGT("ã‚«ãƒ�ãƒ„ãƒ�ãƒ¥ã‚¦...")                // "Heating..."
#define MSG_BED_HEATING                     _UxGT("ãƒ™ãƒƒãƒ‰ ã‚«ãƒ�ãƒ„ãƒ�ãƒ¥ã‚¦...")           // "Bed Heating..."
#define MSG_DELTA_CALIBRATE                 _UxGT("ãƒ‡ãƒ«ã‚¿ ã‚³ã‚¦ã‚»ã‚¤")                // "Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               _UxGT("Xã‚¸ã‚¯ ã‚³ã‚¦ã‚»ã‚¤")                 // "Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Yã‚¸ã‚¯ ã‚³ã‚¦ã‚»ã‚¤")                 // "Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Zã‚¸ã‚¯ ã‚³ã‚¦ã‚»ã‚¤")                 // "Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("ãƒ�ãƒ¥ã‚¦ã‚·ãƒ³ ã‚³ã‚¦ã‚»ã‚¤")              // "Calibrate Center"
#define MSG_INFO_MENU                       _UxGT("ã‚³ãƒŽãƒ—ãƒªãƒ³ã‚¿ãƒ¼ãƒ‹ãƒ„ã‚¤ãƒ†")             // "About Printer"
#define MSG_INFO_PRINTER_MENU               _UxGT("ãƒ—ãƒªãƒ³ã‚¿ãƒ¼ã‚¸ãƒ§ã‚¦ãƒ›ã‚¦")              // "Printer Info"
#define MSG_INFO_STATS_MENU                 _UxGT("ãƒ—ãƒªãƒ³ãƒˆã‚¸ãƒ§ã‚¦ã‚­ãƒ§ã‚¦")              // "Printer Stats"
#define MSG_INFO_BOARD_MENU                 _UxGT("ã‚»ã‚¤ã‚®ãƒ§ã‚±ã‚¤ã‚¸ãƒ§ã‚¦ãƒ›ã‚¦")            // "Board Info"
#define MSG_INFO_THERMISTOR_MENU            _UxGT("ã‚µãƒ¼ãƒŸã‚¹ã‚¿ãƒ¼")                   // "Thermistors"
#define MSG_INFO_EXTRUDERS                  _UxGT("ã‚¨ã‚¯ã‚¹ãƒˆãƒ«ãƒ¼ãƒ€ãƒ¼ã‚¹ã‚¦")             // "Extruders"
#define MSG_INFO_BAUDRATE                   _UxGT("ãƒœãƒ¼ãƒ¬ãƒ¼ãƒˆ")                    // "Baud"
#define MSG_INFO_PROTOCOL                   _UxGT("ãƒ—ãƒ­ãƒˆã‚³ãƒ«")                    // "Protocol"
#define MSG_CASE_LIGHT                      _UxGT("ã‚­ãƒ§ã‚¦ã‚¿ã‚¤ãƒŠã‚¤ã‚·ãƒ§ã‚¦ãƒ¡ã‚¤")       // "Case light"
#define MSG_INFO_PRINT_COUNT                _UxGT("ãƒ—ãƒªãƒ³ãƒˆã‚¹ã‚¦ ")                  // "Print Count"
#define MSG_INFO_COMPLETED_PRINTS           _UxGT("ã‚«ãƒ³ãƒªãƒ§ã‚¦ã‚¹ã‚¦")                  // "Completed"
#define MSG_INFO_PRINT_TIME                 _UxGT("ãƒ—ãƒªãƒ³ãƒˆã‚¸ã‚«ãƒ³ãƒ«ã‚¤ã‚±ã‚¤")            // "Total print time"
#define MSG_INFO_PRINT_LONGEST              _UxGT("ã‚µã‚¤ãƒ�ãƒ§ã‚¦ãƒ—ãƒªãƒ³ãƒˆã‚¸ã‚«ãƒ³")           // "Longest job time"
#define MSG_INFO_PRINT_FILAMENT             _UxGT("ãƒ•ã‚£ãƒ©ãƒ¡ãƒ³ãƒˆã‚·ãƒ¨ã‚¦ãƒªãƒ§ã‚¦ãƒ«ã‚¤ã‚±ã‚¤")       // "Extruded total"
#define MSG_INFO_MIN_TEMP                   _UxGT("ã‚»ãƒƒãƒ†ã‚¤ã‚µã‚¤ãƒ†ã‚¤ã‚ªãƒ³")              // "Min Temp"
#define MSG_INFO_MAX_TEMP                   _UxGT("ã‚»ãƒƒãƒ†ã‚¤ã‚µã‚¤ã‚³ã‚¦ã‚ªãƒ³")              // "Max Temp"
#define MSG_INFO_PSU                        _UxGT("ãƒ‡ãƒ³ã‚²ãƒ³ã‚·ãƒ¥ãƒ™ãƒ„")                // "Power Supply"
#define MSG_DRIVE_STRENGTH                  _UxGT("ãƒ¢ãƒ¼ã‚¿ãƒ¼ã‚¯ãƒ‰ã‚¦ãƒªãƒ§ã‚¯")              // "Drive Strength"
#define MSG_DAC_PERCENT                     _UxGT("DACã‚·ãƒ¥ãƒ„ãƒªãƒ§ã‚¯ %")               // "Driver %"
#define MSG_DAC_EEPROM_WRITE                MSG_STORE_EEPROM                    // "DAC EEPROM Write"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("ãƒ—ãƒªãƒ³ãƒˆã‚µã‚¤ã‚«ã‚¤")                // "Resume print"
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("ã‚³ã‚¦ã‚«ãƒ³ãƒ²ã‚«ã‚¤ã‚·ã‚·ãƒžã‚¹")            // "Wait for start"
#define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("ã‚·ãƒ�ãƒ©ã‚¯ã‚ªãƒžãƒ�ã‚¯ãƒ€ã‚µã‚¤")            // "of the filament"
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("ãƒ•ã‚£ãƒ©ãƒ¡ãƒ³ãƒˆãƒŒã‚­ãƒ€ã‚·ãƒ�ãƒ¥ã‚¦")          // "Wait for"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("ã‚·ãƒ�ãƒ©ã‚¯ã‚ªãƒžãƒ�ã‚¯ãƒ€ã‚µã‚¤")            // "filament unload"
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("ãƒ•ã‚£ãƒ©ãƒ¡ãƒ³ãƒˆãƒ²ã‚½ã‚¦ãƒ‹ãƒ¥ã‚¦ã‚·,")         // "Insert filament"
#define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("ã‚¯ãƒªãƒƒã‚¯ã‚¹ãƒ«ãƒˆã‚¾ãƒƒã‚³ã‚¦ã‚·ãƒžã‚¹")         // "and press button"
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("ãƒ•ã‚£ãƒ©ãƒ¡ãƒ³ãƒˆã‚½ã‚¦ãƒ†ãƒ³ãƒ�ãƒ¥ã‚¦")          // "Wait for"
#define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("ã‚·ãƒ�ãƒ©ã‚¯ã‚ªãƒžãƒ�ã‚¯ãƒ€ã‚µã‚¤")            // "filament load"
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("ãƒ—ãƒªãƒ³ãƒˆãƒ²ã‚µã‚¤ã‚«ã‚¤ã‚·ãƒžã‚¹")           // "Wait for print"
#define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("ã‚·ãƒ�ãƒ©ã‚¯ã‚ªãƒžãƒ�ã‚¯ãƒ€ã‚µã‚¤")            // "to resume"

#endif // LANGUAGE_KANA_UTF_H
