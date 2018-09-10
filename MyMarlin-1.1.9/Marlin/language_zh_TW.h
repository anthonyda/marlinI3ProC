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
 * Traditional Chinese
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_ZH_TW_H
#define LANGUAGE_ZH_TW_H

#define CHARSIZE 3

#define WELCOME_MSG                         MACHINE_NAME _UxGT("å·²å°±ç·’.")  //" ready."
#define MSG_BACK                            _UxGT("è¿”å›ž")         // â€�Backâ€œ
#define MSG_SD_INSERTED                     _UxGT("è¨˜æ†¶å�¡å·²æ�’å…¥")  //"Card inserted"
#define MSG_SD_REMOVED                      _UxGT("è¨˜æ†¶å�¡è¢«æ‹”å‡º")  //"Card removed"
#define MSG_LCD_ENDSTOPS                    _UxGT("æ“‹å¡Š")  //"Endstops" // Max length 8 characters
#define MSG_MAIN                            _UxGT("ä¸»é�¸å–®")  //"Main"
#define MSG_AUTOSTART                       _UxGT("è‡ªå‹•é–‹å§‹")  //"Autostart"
#define MSG_DISABLE_STEPPERS                _UxGT("é—œé–‰æ­¥é€²é¦¬é�”")  //"Disable steppers"
#define MSG_DEBUG_MENU                      _UxGT("é™¤éŒ¯é�¸å–®")    // "Debug Menu"
#define MSG_PROGRESS_BAR_TEST               _UxGT("é€²åº¦æ¢�æ¸¬è©¦")  // "Progress Bar Test"
#define MSG_AUTO_HOME                       _UxGT("è‡ªå‹•å›žåŽŸé»ž")  //"Auto home"
#define MSG_AUTO_HOME_X                     _UxGT("å›žXåŽŸé»ž")  //"Home X"
#define MSG_AUTO_HOME_Y                     _UxGT("å›žYåŽŸé»ž")  //"Home Y"
#define MSG_AUTO_HOME_Z                     _UxGT("å›žZåŽŸé»ž")  //"Home Z"
#define MSG_TMC_Z_CALIBRATION               _UxGT("âŠ¿æ ¡æº–Z")  //"Calibrate Z"
#define MSG_LEVEL_BED_HOMING                _UxGT("å¹³å�°èª¿å¹³XYZæ­¸åŽŸé»ž")  //"Homing XYZ"
#define MSG_LEVEL_BED_WAITING               _UxGT("å–®æ“Šé–‹å§‹ç†±åºŠèª¿å¹³")  //"Click to Begin"
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("ä¸‹å€‹ç†±åºŠèª¿å¹³é»ž")  //"Next Point"
#define MSG_LEVEL_BED_DONE                  _UxGT("å®Œæˆ�ç†±åºŠèª¿å¹³")  //"Leveling Done!"
#define MSG_Z_FADE_HEIGHT                   _UxGT("æ·¡å‡ºé«˜åº¦")     // "Fade Height"
#define MSG_SET_HOME_OFFSETS                _UxGT("è¨­ç½®åŽŸé»žå��ç§»")  //"Set home offsets"
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("å��ç§»å·²å•Ÿç”¨")  //"Offsets applied"
#define MSG_SET_ORIGIN                      _UxGT("è¨­ç½®åŽŸé»ž")  //"Set origin"
#define MSG_PREHEAT_1                       _UxGT("é �ç†±PLA")  //"Preheat PLA"
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")  //MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" å…¨éƒ¨")  //MSG_PREHEAT_1 " All"
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" ç†±åºŠ")  //MSG_PREHEAT_1 " Bed"
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" è¨­ç½®")  //MSG_PREHEAT_1 " conf"
#define MSG_PREHEAT_2                       _UxGT("é �ç†±ABS")  //"Preheat ABS"
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")  //MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" å…¨éƒ¨")  //MSG_PREHEAT_2 " All"
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" ç†±åºŠ")  //MSG_PREHEAT_2 " Bed"
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" è¨­ç½®")  //MSG_PREHEAT_2 " conf"
#define MSG_COOLDOWN                        _UxGT("é™�æº«")  //"Cooldown"
#define MSG_SWITCH_PS_ON                    _UxGT("é›»æº�æ‰“é–‹")  //"Switch power on"
#define MSG_SWITCH_PS_OFF                   _UxGT("é›»æº�é—œé–‰")  //"Switch power off"
#define MSG_EXTRUDE                         _UxGT("æ“ å‡º")  //"Extrude"
#define MSG_RETRACT                         _UxGT("å›žç¸®")  //"Retract"
#define MSG_MOVE_AXIS                       _UxGT("ç§»å‹•è»¸")  //"Move axis"
#define MSG_BED_LEVELING                    _UxGT("èª¿å¹³ç†±åºŠ")  //"Bed leveling"
#define MSG_LEVEL_BED                       _UxGT("èª¿å¹³ç†±åºŠ")  //"Level bed"
#define MSG_LEVEL_CORNERS                   _UxGT("èª¿å¹³é‚Šè§’") // "Level corners"

#define MSG_NEXT_CORNER                     _UxGT("ä¸‹ä¸ªé‚Šè§’") // "Next corner"
#define MSG_EDITING_STOPPED                 _UxGT("ç¶²æ ¼ç·¨è¼¯å·²å�œæ­¢") // "Mesh Editing Stopped"

#define MSG_USER_MENU                       _UxGT("å®¢åˆ¶å‘½ä»¤") // "Custom Commands"
#define MSG_UBL_DOING_G29                   _UxGT("æ‰§è¡ŒG29") // "Doing G29"
#define MSG_UBL_UNHOMED                     _UxGT("å…ˆå›žXYZåŽŸé»ž") // "Home XYZ first"
#define MSG_UBL_TOOLS                       _UxGT("UBLå·¥å…·") // "UBL Tools"
#define MSG_UBL_LEVEL_BED                   _UxGT("çµ±ä¸€ç†±åºŠèª¿å¹³(UBL)") // "Unified Bed Leveling"
#define MSG_UBL_MANUAL_MESH                 _UxGT("æ‰‹å·¥å»ºç½‘") // "Manually Build Mesh"

#define MSG_UBL_BC_INSERT                   _UxGT("æ”¾ç½®å¢Šç‰‡ä¸¦æ¸¬é‡�") // "Place shim & measure"
#define MSG_UBL_BC_INSERT2                  _UxGT("æ¸¬é‡�") // "Measure"
#define MSG_UBL_BC_REMOVE                   _UxGT("ç§»é™¤ä¸¦æ¸¬é‡�ç†±åºŠ") // "Remove & measure bed"
#define MSG_UBL_MOVING_TO_NEXT              _UxGT("ç§»å‹•åˆ°ä¸‹ä¸€å€‹") // "Moving to next"
#define MSG_UBL_ACTIVATE_MESH               _UxGT("æ¿€æ´»UBL") // "Activate UBL"
#define MSG_UBL_DEACTIVATE_MESH             _UxGT("é—œé–‰UBL") // "Deactivate UBL"
#define MSG_UBL_SET_BED_TEMP                _UxGT("è¨­ç½®ç†±åºŠæº«åº¦") // "Bed Temp"
#define MSG_UBL_SET_HOTEND_TEMP             _UxGT("ç†±ç«¯æº«åº¦") // "Hotend Temp"
#define MSG_UBL_MESH_EDIT                   _UxGT("ç¶²æ ¼ç·¨è¼¯") // "Mesh Edit"
#define MSG_UBL_EDIT_CUSTOM_MESH            _UxGT("ç·¨è¼¯å®¢æˆ¶ç¶²æ ¼") // "Edit Custom Mesh"
#define MSG_UBL_FINE_TUNE_MESH              _UxGT("ç´°èª¿ç¶²æ ¼") // "Fine Tuning Mesh"
#define MSG_UBL_DONE_EDITING_MESH           _UxGT("å®Œæˆ�ç·¨è¼¯ç¶²æ ¼") // "Done Editing Mesh"
#define MSG_UBL_BUILD_CUSTOM_MESH           _UxGT("å‰µè¨­å®¢æˆ¶ç¶²æ ¼") // "Build Custom Mesh"
#define MSG_UBL_BUILD_MESH_MENU             _UxGT("å‰µè¨­ç¶²æ ¼") // "Build Mesh"
#define MSG_UBL_BUILD_PLA_MESH              _UxGT("å‰µè¨­PLAç¶²æ ¼") // "Build PLA Mesh"
#define MSG_UBL_BUILD_ABS_MESH              _UxGT("å‰µè¨­ABSç¶²æ ¼") // "Build ABS Mesh"
#define MSG_UBL_BUILD_COLD_MESH             _UxGT("å‰µè¨­å†·ç¶²æ ¼") // "Build Cold Mesh"
#define MSG_UBL_MESH_HEIGHT_ADJUST          _UxGT("èª¿æ•´ç¶²æ ¼é«˜åº¦") // "Adjust Mesh Height"
#define MSG_UBL_MESH_HEIGHT_AMOUNT          _UxGT("é«˜åº¦å�ˆè¨ˆ") // "Height Amount"
#define MSG_UBL_VALIDATE_MESH_MENU          _UxGT("æ‰¹å‡†ç¶²æ ¼") // "Validate Mesh"
#define MSG_UBL_VALIDATE_PLA_MESH           _UxGT("æ‰¹å‡†PLAç¶²æ ¼") // "Validate PLA Mesh"
#define MSG_UBL_VALIDATE_ABS_MESH           _UxGT("æ‰¹å‡†ABSç¶²æ ¼") // "Validate ABS Mesh"
#define MSG_UBL_VALIDATE_CUSTOM_MESH        _UxGT("æ‰¹å‡†å®¢æˆ¶ç¶²æ ¼") // "Validate Custom Mesh"
#define MSG_UBL_CONTINUE_MESH               _UxGT("ç¹¼çºŒç†±åºŠç¶²æ ¼") // "Continue Bed Mesh"
#define MSG_UBL_MESH_LEVELING               _UxGT("ç¶²æ ¼èª¿å¹³") // "Mesh Leveling"
#define MSG_UBL_3POINT_MESH_LEVELING        _UxGT("ä¸‰é»žèª¿å¹³") // "3-Point Leveling"
#define MSG_UBL_GRID_MESH_LEVELING          _UxGT("æ ¼å­�ç¶²æ ¼èª¿å¹³") // "Grid Mesh Leveling"
#define MSG_UBL_MESH_LEVEL                  _UxGT("èª¿å¹³ç¶²æ ¼") // "Level Mesh"
#define MSG_UBL_SIDE_POINTS                 _UxGT("é‚Šé»ž") // "Side Points"
#define MSG_UBL_MAP_TYPE                    _UxGT("åœ–é¡žåž‹") // "Map Type"
#define MSG_UBL_OUTPUT_MAP                  _UxGT("è¼¸å‡ºç¶²æ ¼åœ–") // "Output Mesh Map"
#define MSG_UBL_OUTPUT_MAP_HOST             _UxGT("è¼¸å‡ºåˆ°ä¸»æ©Ÿ") // "Output for Host"
#define MSG_UBL_OUTPUT_MAP_CSV              _UxGT("è¼¸å‡ºåˆ°CSV") // "Output for CSV"
#define MSG_UBL_OUTPUT_MAP_BACKUP           _UxGT("è¼¸å‡ºåˆ°å‚™ä»½") // "Off Printer Backup"
#define MSG_UBL_INFO_UBL                    _UxGT("è¼¸å‡ºUBLä¿¡æ�¯") // "Output UBL Info"
#define MSG_UBL_EDIT_MESH_MENU              _UxGT("ç·¨è¼¯ç¶²æ ¼") // "Edit Mesh"
#define MSG_UBL_FILLIN_AMOUNT               _UxGT("å¡«å……å�ˆè¨ˆ") // "Fill-in Amount"
#define MSG_UBL_MANUAL_FILLIN               _UxGT("æ‰‹å·¥å¡«å……") // "Manual Fill-in"
#define MSG_UBL_SMART_FILLIN                _UxGT("è�°æ˜Žå¡«å……") // "Smart Fill-in"
#define MSG_UBL_FILLIN_MESH                 _UxGT("å¡«å……ç¶²æ ¼") // "Fill-in Mesh"
#define MSG_UBL_INVALIDATE_ALL              _UxGT("ä½œå»¢æ‰€æœ‰çš„") // "Invalidate All"
#define MSG_UBL_INVALIDATE_CLOSEST          _UxGT("ä½œå»¢æœ€è¿‘çš„") // "Invalidate Closest"
#define MSG_UBL_FINE_TUNE_ALL               _UxGT("ç´°èª¿æ‰€æœ‰çš„") // "Fine Tune All"
#define MSG_UBL_FINE_TUNE_CLOSEST           _UxGT("ç´°èª¿æœ€è¿‘çš„") // "Fine Tune Closest"
#define MSG_UBL_STORAGE_MESH_MENU           _UxGT("ç¶²æ ¼å­˜å„²") // "Mesh Storage"
#define MSG_UBL_STORAGE_SLOT                _UxGT("å­˜å„²æ§½") // "Memory Slot"
#define MSG_UBL_LOAD_MESH                   _UxGT("è£�è¼‰ç†±åºŠç¶²æ ¼") // "Load Bed Mesh"
#define MSG_UBL_SAVE_MESH                   _UxGT("ä¿�å­˜ç†±åºŠç¶²æ ¼") // "Save Bed Mesh"
#define MSG_MESH_LOADED                     _UxGT("ç¶²æ ¼ %i å·²è£�è¼‰") // "Mesh %i loaded"
#define MSG_MESH_SAVED                      _UxGT("ç¶²æ ¼ %i å·²ä¿�å­˜") // "Mesh %i saved"
#define MSG_NO_STORAGE                      _UxGT("æ²’æœ‰å­˜å„²") // "No storage"
#define MSG_UBL_SAVE_ERROR                  _UxGT("éŒ¯èª¤: UBLä¿�å­˜") // "Err: UBL Save"
#define MSG_UBL_RESTORE_ERROR               _UxGT("éŒ¯èª¤: UBLé‚„åŽŸ") // "Err: UBL Restore"
#define MSG_UBL_Z_OFFSET_STOPPED            _UxGT("Zå��ç§»å·²å�œæ­¢") // "Z-Offset Stopped"
#define MSG_UBL_STEP_BY_STEP_MENU           _UxGT("ä¸€æ­¥æ­¥UBL") // "Step-By-Step UBL"

#define MSG_LED_CONTROL                     _UxGT("ç�¯ç®¡æŽ§åˆ¶") // "LED Control")
#define MSG_LEDS                            _UxGT("ç�¯") // "Lights")
#define MSG_LED_PRESETS                     _UxGT("ç�¯é¢„ç½®") // "Light Presets")
#define MSG_SET_LEDS_RED                    _UxGT("çº¢") // "Red")
#define MSG_SET_LEDS_ORANGE                 _UxGT("æ©™") // "Orange")
#define MSG_SET_LEDS_YELLOW                 _UxGT("é»„") // "Yellow")
#define MSG_SET_LEDS_GREEN                  _UxGT("ç»¿") // "Green")
#define MSG_SET_LEDS_BLUE                   _UxGT("è“�") // "Blue")
#define MSG_SET_LEDS_INDIGO                 _UxGT("é�’") // "Indigo")
#define MSG_SET_LEDS_VIOLET                 _UxGT("ç´«") // "Violet")
#define MSG_SET_LEDS_WHITE                  _UxGT("ç™½") // "White")
#define MSG_SET_LEDS_DEFAULT                _UxGT("ç¼ºçœ�") // "Default")
#define MSG_CUSTOM_LEDS                     _UxGT("å®šåˆ¶ç�¯") // "Custom Lights")
#define MSG_INTENSITY_R                     _UxGT("çº¢é£½å’Œåº¦") // "Red Intensity")
#define MSG_INTENSITY_G                     _UxGT("ç»¿é£½å’Œåº¦") // "Green Intensity")
#define MSG_INTENSITY_B                     _UxGT("è“�é£½å’Œåº¦") // "Blue Intensity")
#define MSG_INTENSITY_W                     _UxGT("ç™½é£½å’Œåº¦") // "White Intensity")
#define MSG_LED_BRIGHTNESS                  _UxGT("äº®åº¦") // "Brightness")
#define MSG_MOVING                          _UxGT("ç§»åŠ¨ ...") // "Moving...")
#define MSG_FREE_XY                         _UxGT("é‡Šæ”¾ XY") // "Free XY")

#define MSG_MOVE_X                          _UxGT("ç§»å‹•X")  //"Move X"
#define MSG_MOVE_Y                          _UxGT("ç§»å‹•Y")  //"Move Y"
#define MSG_MOVE_Z                          _UxGT("ç§»å‹•Z")  //"Move Z"
#define MSG_MOVE_E                          _UxGT("æ“ å‡ºæ©Ÿ")  //"Extruder"
#define MSG_MOVE_01MM                       _UxGT("ç§»å‹• 0.1 mm")  //"Move 0.1mm"
#define MSG_MOVE_1MM                        _UxGT("ç§»å‹• 1 mm")  //"Move 1mm"
#define MSG_MOVE_10MM                       _UxGT("ç§»å‹• 10 mm")  //"Move 10mm"
#define MSG_SPEED                           _UxGT("é€ŸçŽ‡")  //"Speed"
#define MSG_BED_Z                           _UxGT("ç†±åºŠZ")  //"Bed Z"
#define MSG_NOZZLE                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" å™´å˜´")  //"Nozzle" å™´å˜´
#define MSG_BED                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" ç†±åºŠ")  //"Bed"
#define MSG_FAN_SPEED                       _UxGT("é¢¨æ‰‡é€ŸçŽ‡")  //"Fan speed"
#define MSG_EXTRA_FAN_SPEED                 _UxGT("é¡�å¤–é¢¨æ‰‡é€ŸçŽ‡") // "Extra fan speed"
#define MSG_FLOW                            _UxGT("æ“ å‡ºé€ŸçŽ‡")  //"Flow"
#define MSG_CONTROL                         _UxGT("æŽ§åˆ¶")  //"Control"
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" æœ€å°�") //" " LCD_STR_THERMOMETER " Min"
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" æœ€å¤§")  //" " LCD_STR_THERMOMETER " Max"
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" ç³»æ•¸")  //" " LCD_STR_THERMOMETER " Fact"
#define MSG_AUTOTEMP                        _UxGT("è‡ªå‹•æŽ§æº«")  //"Autotemp"
#define MSG_ON                              _UxGT("é–‹ ")  //"On "
#define MSG_OFF                             _UxGT("é—œ ")  //"Off"
#define MSG_PID_P                           _UxGT("PID-P")  //"PID-P"
#define MSG_PID_I                           _UxGT("PID-I")  //"PID-I"
#define MSG_PID_D                           _UxGT("PID-D")  //"PID-D"
#define MSG_PID_C                           _UxGT("PID-C")  //"PID-C"
#define MSG_SELECT                          _UxGT("é�¸æ“‡")  //"Select"
#define MSG_ACC                             _UxGT("åŠ é€Ÿåº¦")  //"Accel" acceleration
#define MSG_JERK                            _UxGT("æŠ–å‹•é€ŸçŽ‡")  //"Jerk"
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("Aè»¸æŠ–å‹•é€ŸçŽ‡")  //"Va-jerk"
  #define MSG_VB_JERK                       _UxGT("Bè»¸æŠ–å‹•é€ŸçŽ‡")  //"Vb-jerk"
  #define MSG_VC_JERK                       _UxGT("Cè»¸æŠ–å‹•é€ŸçŽ‡")  //"Vc-jerk"
#else
  #define MSG_VA_JERK                       _UxGT("Xè»¸æŠ–å‹•é€ŸçŽ‡")  //"Vx-jerk"
  #define MSG_VB_JERK                       _UxGT("Yè»¸æŠ–å‹•é€ŸçŽ‡")  //"Vy-jerk"
  #define MSG_VC_JERK                       _UxGT("Zè»¸æŠ–å‹•é€ŸçŽ‡")  //"Vz-jerk"
#endif
#define MSG_VE_JERK                         _UxGT("æ“ å‡ºæ©ŸæŠ–å‹•é€ŸçŽ‡")  //"Ve-jerk"
#define MSG_VELOCITY                        _UxGT("é€Ÿåº¦")          // "Velocity"
#define MSG_VMAX                            _UxGT("æœ€å¤§é€²æ–™é€ŸçŽ‡")  //"Vmax " max_feedrate_mm_s
#define MSG_VMIN                            _UxGT("æœ€å°�é€²æ–™é€ŸçŽ‡")  //"Vmin"  min_feedrate_mm_s
#define MSG_VTRAV_MIN                       _UxGT("æœ€å°�ç§»å‹•é€ŸçŽ‡")  //"VTrav min" min_travel_feedrate_mm_s, (target) speed of the move
#define MSG_ACCELERATION                    _UxGT("åŠ é€Ÿåº¦")       // "Acceleration"
#define MSG_AMAX                            _UxGT("æœ€å¤§åˆ—å�°åŠ é€Ÿåº¦")  //"Amax " max_acceleration_mm_per_s2, acceleration in units/s^2 for print moves
#define MSG_A_RETRACT                       _UxGT("å›žç¸®åŠ é€Ÿåº¦")  //"A-retract" retract_acceleration, E acceleration in mm/s^2 for retracts
#define MSG_A_TRAVEL                        _UxGT("é�žåˆ—å�°ç§»å‹•åŠ é€Ÿåº¦")  //"A-travel" travel_acceleration, X, Y, Z acceleration in mm/s^2 for travel (non printing) moves
#define MSG_STEPS_PER_MM                    _UxGT("è»¸æ­¥æ•¸/mm")  //"Steps/mm" axis_steps_per_mm, axis steps-per-unit G92
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("Aè»¸æ­¥æ•¸/mm")  //"Asteps/mm" axis_steps_per_mm, axis steps-per-unit G92
  #define MSG_BSTEPS                        _UxGT("Bè»¸æ­¥æ•¸/mm")  //"Bsteps/mm"
  #define MSG_CSTEPS                        _UxGT("Cè»¸æ­¥æ•¸/mm")  //"Csteps/mm"
#else
  #define MSG_ASTEPS                        _UxGT("Xè»¸æ­¥æ•¸/mm")  //"Xsteps/mm" axis_steps_per_mm, axis steps-per-unit G92
  #define MSG_BSTEPS                        _UxGT("Yè»¸æ­¥æ•¸/mm")  //"Ysteps/mm"
  #define MSG_CSTEPS                        _UxGT("Zè»¸æ­¥æ•¸/mm")  //"Zsteps/mm"
#endif
#define MSG_ESTEPS                          _UxGT("æ“ å‡ºæ©Ÿæ­¥æ•¸/mm")  //"Esteps/mm"
#define MSG_E1STEPS                         _UxGT("æ“ å‡ºæ©Ÿ1æ­¥æ•¸/mm") //"E1steps/mm"
#define MSG_E2STEPS                         _UxGT("æ“ å‡ºæ©Ÿ2æ­¥æ•¸/mm") //"E2steps/mm"
#define MSG_E3STEPS                         _UxGT("æ“ å‡ºæ©Ÿ3æ­¥æ•¸/mm") //"E3steps/mm"
#define MSG_E4STEPS                         _UxGT("æ“ å‡ºæ©Ÿ4æ­¥æ•¸/mm") //"E4steps/mm"
#define MSG_E5STEPS                         _UxGT("æ“ å‡ºæ©Ÿ5æ­¥æ•¸/mm") //"E5steps/mm"
#define MSG_TEMPERATURE                     _UxGT("æº«åº¦")  //"Temperature"
#define MSG_MOTION                          _UxGT("é�‹ä½œ")  //"Motion"
#define MSG_FILAMENT                        _UxGT("çµ²æ–™æ¸¬å®¹")  //"Filament" lcd_control_volumetric_menu
#define MSG_VOLUMETRIC_ENABLED              _UxGT("æ¸¬å®¹ç©�mmÂ³")  //"E in mm3" volumetric_enabled
#define MSG_FILAMENT_DIAM                   _UxGT("çµ²æ–™ç›´å¾‘")  //"Fil. Dia."
#define MSG_FILAMENT_UNLOAD                 _UxGT("å�¸è¼‰ mm") // "Unload mm"
#define MSG_FILAMENT_LOAD                   _UxGT("è£…è¼‰ mm")   // "Load mm"
#define MSG_ADVANCE_K                       _UxGT("Advance K") // "Advance K"
#define MSG_CONTRAST                        _UxGT("LCDå°�æ¯”åº¦")  //"LCD contrast"
#define MSG_STORE_EEPROM                    _UxGT("ä¿�å­˜è¨­ç½®")  //"Store memory"
#define MSG_LOAD_EEPROM                     _UxGT("è¼‰å…¥è¨­ç½®")  //"Load memory"
#define MSG_RESTORE_FAILSAFE                _UxGT("æ�¢å¾©å®‰å…¨å€¼")  //"Restore failsafe"
#define MSG_INIT_EEPROM                     _UxGT("åˆ�å§‹åŒ–è¨­ç½®") // "Initialize EEPROM"
#define MSG_REFRESH                         _UxGT("åˆ·æ–°")  //"Refresh"
#define MSG_WATCH                           _UxGT("è³‡è¨Šç•Œé�¢")  //"Info screen"
#define MSG_PREPARE                         _UxGT("æº–å‚™")  //"Prepare"
#define MSG_TUNE                            _UxGT("èª¿æ•´")  //"Tune"
#define MSG_PAUSE_PRINT                     _UxGT("æš«å�œåˆ—å�°")  //"Pause print"
#define MSG_RESUME_PRINT                    _UxGT("æ�¢å¾©åˆ—å�°")  //"Resume print"
#define MSG_STOP_PRINT                      _UxGT("å�œæ­¢åˆ—å�°")  //"Stop print"
#define MSG_CARD_MENU                       _UxGT("å¾žè¨˜æ†¶å�¡ä¸Šåˆ—å�°")  //"Print from SD"
#define MSG_NO_CARD                         _UxGT("ç„¡è¨˜æ†¶å�¡")  //"No SD card"
#define MSG_DWELL                           _UxGT("ä¼‘çœ  ...")  //"Sleep..."
#define MSG_USERWAIT                        _UxGT("é»žæ“Šç¹¼çºŒ ...")  //"Click to resume..."
#define MSG_PRINT_PAUSED                    _UxGT("åˆ—å�°å·²æš«å�œ") // "Print paused"
#define MSG_PRINT_ABORTED                   _UxGT("å·²å�–æ¶ˆåˆ—å�°")  //"Print aborted"
#define MSG_NO_MOVE                         _UxGT("ç„¡ç§»å‹•")  //"No move."
#define MSG_KILLED                          _UxGT("å·²ç �æŽ‰")  //"KILLED. "
#define MSG_STOPPED                         _UxGT("å·²å�œæ­¢")  //"STOPPED. "
#define MSG_CONTROL_RETRACT                 _UxGT("å›žç¸®é•·åº¦mm")  //"Retract mm" retract_length, retract length (positive mm)
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("æ�›æ‰‹å›žæŠ½é•·åº¦mm")  //"Swap Re.mm" swap_retract_length, swap retract length (positive mm), for extruder change
#define MSG_CONTROL_RETRACTF                _UxGT("å›žç¸®é€ŸçŽ‡mm/s")  //"Retract  V" retract_feedrate_mm_s, feedrate for retracting (mm/s)
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Hop mm")  //"Hop mm" retract_zlift, retract Z-lift
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("å›žç¸®æ�¢å¾©é•·åº¦mm")  //"UnRet +mm" retract_recover_length, additional recover length (mm, added to retract length when recovering)
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("æ�›æ‰‹å›žç¸®æ�¢å¾©é•·åº¦mm")  //"S UnRet+mm" swap_retract_recover_length, additional swap recover length (mm, added to retract length when recovering from extruder change)
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("å›žç¸®æ�¢å¾©å¾Œé€²æ–™é€ŸçŽ‡mm/s")  //"UnRet V" retract_recover_feedrate_mm_s, feedrate for recovering from retraction (mm/s)
#define MSG_CONTROL_RETRACT_RECOVER_SWAPF   _UxGT("S UnRet V") // "S UnRet V"
#define MSG_AUTORETRACT                     _UxGT("è‡ªå‹•å›žç¸®")  //"AutoRetr." autoretract_enabled,
#define MSG_FILAMENTCHANGE                  _UxGT("æ›´æ�›çµ²æ–™")  //"Change filament"
#define MSG_FILAMENTLOAD                    _UxGT("è£�è¼‰çµ²æ–™") // "Load filament"
#define MSG_FILAMENTUNLOAD                  _UxGT("å�¸è¼‰çµ²æ–™") // "Unload filament"
#define MSG_FILAMENTUNLOAD_ALL              _UxGT("å�¸è¼‰å…¨éƒ¨") // "Unload All"
#define MSG_INIT_SDCARD                     _UxGT("åˆ�å§‹åŒ–è¨˜æ†¶å�¡")  //"Init. SD card"
#define MSG_CNG_SDCARD                      _UxGT("æ›´æ�›è¨˜æ†¶å�¡")  //"Change SD card"
#define MSG_ZPROBE_OUT                      _UxGT("ZæŽ¢é‡�åœ¨ç†±åºŠä¹‹å¤–")  //"Z probe out. bed" Z probe is not within the physical limits
#define MSG_SKEW_FACTOR                     _UxGT("å��æ–œå› æ•¸") // "Skew Factor"
#define MSG_BLTOUCH                         _UxGT("BLTouch")     // "BLTouch"
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch è‡ªæª¢") // "BLTouch Self-Test"
#define MSG_BLTOUCH_RESET                   _UxGT("é‡�ç½®BLTouch")  // "Reset BLTouch"
#define MSG_BLTOUCH_DEPLOY                  _UxGT("éƒ¨ç½²BLTouch") // "Deploy BLTouch"
#define MSG_BLTOUCH_STOW                    _UxGT("è£�è¼‰BLTouch")   // "Stow BLTouch"
#define MSG_HOME                            _UxGT("æ­¸ä½�")  //"Home"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#define MSG_FIRST                           _UxGT("å…ˆ")  //"first"
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Zå��ç§»")  //"Z Offset"
#define MSG_BABYSTEP_X                      _UxGT("å¾®é‡�èª¿æ•´Xè»¸")  //"Babystep X" lcd_babystep_x, Babystepping enables the user to control the axis in tiny amounts
#define MSG_BABYSTEP_Y                      _UxGT("å¾®é‡�èª¿æ•´Yè»¸")  //"Babystep Y"
#define MSG_BABYSTEP_Z                      _UxGT("å¾®é‡�èª¿æ•´Zè»¸")  //"Babystep Z"
#define MSG_ENDSTOP_ABORT                   _UxGT("æ“‹å¡Šçµ‚æ­¢")  //"Endstop abort"
#define MSG_HEATING_FAILED_LCD              _UxGT("åŠ ç†±å¤±æ•—")  //"Heating failed"
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("éŒ¯èª¤ï¼šREDUNDANT TEMP")  //"Err: REDUNDANT TEMP"
#define MSG_THERMAL_RUNAWAY                 _UxGT("æº«æŽ§å¤±æŽ§")  //"THERMAL RUNAWAY"
#define MSG_ERR_MAXTEMP                     _UxGT("éŒ¯èª¤ï¼šæœ€é«˜æº«åº¦")  //"Err: MAXTEMP"
#define MSG_ERR_MINTEMP                     _UxGT("éŒ¯èª¤ï¼šæœ€ä½Žæº«åº¦")  //"Err: MINTEMP"
#define MSG_ERR_MAXTEMP_BED                 _UxGT("éŒ¯èª¤ï¼šæœ€é«˜ç†±åºŠæº«åº¦")  //"Err: MAXTEMP BED"
#define MSG_ERR_MINTEMP_BED                 _UxGT("éŒ¯èª¤ï¼šæœ€ä½Žç†±åºŠæº«åº¦")  //"Err: MINTEMP BED"
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#define MSG_HALTED                          _UxGT("å�°è¡¨æ©Ÿå�œæ©Ÿ")  //"PRINTER HALTED"
#define MSG_PLEASE_RESET                    _UxGT("è«‹é‡�ç½®")  //"Please reset"
#define MSG_SHORT_DAY                       _UxGT("å¤©")  //"d" // One character only
#define MSG_SHORT_HOUR                      _UxGT("æ™‚")  //"h" // One character only
#define MSG_SHORT_MINUTE                    _UxGT("åˆ†")  //"m" // One character only
#define MSG_HEATING                         _UxGT("åŠ ç†±ä¸­ ...")  //"Heating..."
#define MSG_BED_HEATING                     _UxGT("åŠ ç†±ç†±åºŠä¸­...")  //"Bed Heating..."
#define MSG_DELTA_CALIBRATE                 _UxGT("âŠ¿æ ¡æº–")  //"Delta Calibration"
#define MSG_DELTA_CALIBRATE_X               _UxGT("âŠ¿æ ¡æº–X")  //"Calibrate X"
#define MSG_DELTA_CALIBRATE_Y               _UxGT("âŠ¿æ ¡æº–Y")  //"Calibrate Y"
#define MSG_DELTA_CALIBRATE_Z               _UxGT("âŠ¿æ ¡æº–Z")  //"Calibrate Z"
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("âŠ¿æ ¡æº–ä¸­å¿ƒ")  //"Calibrate Center"
#define MSG_DELTA_SETTINGS                  _UxGT("âŠ¿è¨­ç½®") // "Delta Settings"
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("âŠ¿è‡ªå‹•æ ¡æº–") // "Auto Calibration"
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("è¨­ç½®âŠ¿é«˜åº¦") // "Set Delta Height"
#define MSG_DELTA_DIAG_ROD                  _UxGT("âŠ¿æ–œæŸ±") // "Diag Rod"
#define MSG_DELTA_HEIGHT                    _UxGT("âŠ¿é«˜åº¦") // "Height"
#define MSG_DELTA_RADIUS                    _UxGT("âŠ¿å�Šå¾‘") // "Radius"
#define MSG_INFO_MENU                       _UxGT("é—œæ–¼å�°è¡¨æ©Ÿ")  //"About Printer"
#define MSG_INFO_PRINTER_MENU               _UxGT("å�°è¡¨æ©Ÿè¨Šæ�¯")  //"Printer Info"
#define MSG_3POINT_LEVELING                 _UxGT("ä¸‰é»žèª¿å¹³") // "3-Point Leveling"
#define MSG_LINEAR_LEVELING                 _UxGT("ç·šæ€§èª¿å¹³") // "Linear Leveling"
#define MSG_BILINEAR_LEVELING               _UxGT("é›™ç·šæ€§èª¿å¹³") // "Bilinear Leveling"
#define MSG_UBL_LEVELING                    _UxGT("çµ±ä¸€ç†±åºŠèª¿å¹³(UBL)") // "Unified Bed Leveling"
#define MSG_MESH_LEVELING                   _UxGT("ç¶²æ ¼èª¿å¹³") // "Mesh Leveling"
#define MSG_INFO_STATS_MENU                 _UxGT("å�°è¡¨æ©Ÿçµ±è¨ˆ")  //"Printer Stats"
#define MSG_INFO_BOARD_MENU                 _UxGT("ä¸»æ�¿è¨Šæ�¯")  //"Board Info"
#define MSG_INFO_THERMISTOR_MENU            _UxGT("æº«åº¦è¨ˆ")  //"Thermistors"
#define MSG_INFO_EXTRUDERS                  _UxGT("æ“ å‡ºæ©Ÿ")  //"Extruders"
#define MSG_INFO_BAUDRATE                   _UxGT("å‚³è¼¸çŽ‡")  //"Baud"
#define MSG_INFO_PROTOCOL                   _UxGT("å�”è­°")  //"Protocol"
#define MSG_CASE_LIGHT                      _UxGT("å¤–æ®¼ç‡ˆ") // "Case light"
#define MSG_CASE_LIGHT_BRIGHTNESS           _UxGT("ç‡ˆäº®åº¦") // "Light BRIGHTNESS"

#if LCD_WIDTH > 19
#define MSG_INFO_PRINT_COUNT              _UxGT("åˆ—å�°è¨ˆæ•¸")  //"Print Count"
#define MSG_INFO_COMPLETED_PRINTS         _UxGT("å·²å®Œæˆ�")  //"Completed"
#define MSG_INFO_PRINT_TIME               _UxGT("ç¸½åˆ—å�°æ™‚é–“")  //"Total print time"
#define MSG_INFO_PRINT_LONGEST            _UxGT("æœ€é•·å·¥ä½œæ™‚é–“")  //"Longest job time"
#define MSG_INFO_PRINT_FILAMENT           _UxGT("ç¸½è¨ˆæ“ å‡º")  //"Extruded total"
#else
#define MSG_INFO_PRINT_COUNT              _UxGT("åˆ—å�°æ•¸")  //"Prints"
#define MSG_INFO_COMPLETED_PRINTS         _UxGT("å®Œæˆ�")  //"Completed"
#define MSG_INFO_PRINT_TIME               _UxGT("ç¸½å…±")  //"Total"
#define MSG_INFO_PRINT_LONGEST            _UxGT("æœ€é•·")  //"Longest"
#define MSG_INFO_PRINT_FILAMENT           _UxGT("å·²æ“ å‡º")  //"Extruded"
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("æœ€ä½Žæº«åº¦")  //"Min Temp"
#define MSG_INFO_MAX_TEMP                   _UxGT("æœ€é«˜æº«åº¦")  //"Max Temp"
#define MSG_INFO_PSU                        _UxGT("é›»æº�ä¾›æ‡‰")  //"Power Supply"
#define MSG_DRIVE_STRENGTH                  _UxGT("é©…å‹•åŠ›åº¦") // "Drive Strength"
#define MSG_DAC_PERCENT                     _UxGT("é©…å‹• %") // "Driver %"
#define MSG_DAC_EEPROM_WRITE                _UxGT("ä¿�å­˜é©…å‹•è¨­ç½®") // "DAC EEPROM Write"
#define MSG_FILAMENT_CHANGE_HEADER_PAUSE    _UxGT("åˆ—å�°å·²æš«å�œ") // "PRINT PAUSED"
#define MSG_FILAMENT_CHANGE_HEADER_LOAD     _UxGT("è£�è¼‰çµ²æ–™") // "LOAD FILAMENT"
#define MSG_FILAMENT_CHANGE_HEADER_UNLOAD   _UxGT("å�¸è¼‰çµ²æ–™") // "UNLOAD FILAMENT"
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("æ�¢è¤‡é�¸é …:") // "RESUME OPTIONS:"
#define MSG_FILAMENT_CHANGE_OPTION_PURGE    _UxGT("æ¸…é™¤æ›´å¤š") // "Purge more"
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("æ�¢å¾©åˆ—å�°")  //"Resume print"
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  å™´å˜´: ") // "  Nozzle: "
#define MSG_ERR_HOMING_FAILED               _UxGT("æ­¸åŽŸä½�å¤±æ•—") // "Homing failed"
#define MSG_ERR_PROBING_FAILED              _UxGT("æŽ¢é‡�æŽ¢æ¸¬å¤±æ•—") // "Probing failed"
#define MSG_M600_TOO_COLD                   _UxGT("M600: å¤ªæ¶¼") // "M600: Too cold"

#if LCD_HEIGHT >= 4
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("ç­‰å¾…é–‹å§‹")  //"Wait for start"
#define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("çµ²æ–™")  //"of the filament"
#define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("è®Šæ›´")  //"change"
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("ç­‰å¾…")  //"Wait for"
#define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("å�¸ä¸‹çµ²æ–™")  //"filament unload"
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("æ�’å…¥çµ²æ–™")  //"Insert filament"
#define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("ä¸¦æŒ‰é�µ")  //"and press button"
#define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("ç¹¼çºŒ ...")  //"to continue..."
#define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("æŒ‰ä¸‹æŒ‰éˆ•ä¾†") // "Press button to"
#define MSG_FILAMENT_CHANGE_HEAT_2          _UxGT("åŠ ç†±å™´å˜´.") // "heat nozzle."
#define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("åŠ ç†±å™´å˜´") // "Heating nozzle"
#define MSG_FILAMENT_CHANGE_HEATING_2       _UxGT("è«‹ç­‰å¾… ...") // "Please wait..."
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("ç­‰å¾…")  //"Wait for"
#define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("é€²æ–™")  //"filament load"
#define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("ç­‰å¾…") // "Wait for"
#define MSG_FILAMENT_CHANGE_PURGE_2         _UxGT("çµ²æ–™æ¸…é™¤") // "filament purge"
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("ç­‰å¾…åˆ—å�°")  //"Wait for print"
#define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("æ�¢å¾©")  //"to resume"

#else // LCD_HEIGHT < 4
#define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("è«‹ç­‰å¾… ...")  //"Please wait..."
#define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("é€€å‡ºä¸­ ...")  //"Ejecting..."
#define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("æ�’å…¥ä¸¦é»žæ“Š")  //"Insert and Click"
#define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("åŠ ç†±ä¸­ ...") // "Heating..."
#define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("è¼‰å…¥ä¸­ ...")  //"Loading..."
#define MSG_FILAMENT_CHANGE_PURGE_1         _UxGT("æ¸…é™¤ä¸­ ...") // "Purging..."
#define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("æ�¢å¾©ä¸­ ...")  //"Resuming..."
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_ZH_TW_H
