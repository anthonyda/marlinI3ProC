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
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */

#ifndef LANGUAGE_KANA_H
#define LANGUAGE_KANA_H

// Define SIMULATE_ROMFONT to see what is seen on the character based display defined in Configuration.h
#define SIMULATE_ROMFONT
#define DISPLAY_CHARSET_ISO10646_KANA
#define CHARSIZE 2

// ç‰‡ä»®å��è¡¨ç¤ºå®šç¾©
#define WELCOME_MSG                         MACHINE_NAME " ready."
#define MSG_SD_INSERTED                     "\xb6\xb0\xc4\xde\xb6\xde\xbf\xb3\xc6\xad\xb3\xbb\xda\xcf\xbc\xc0" // "ï½¶ï½°ï¾„ï¾žï½¶ï¾žï½¿ï½³ï¾†ï½­ï½³ï½»ï¾šï¾�ï½¼ï¾€" ("Card inserted")
#define MSG_SD_REMOVED                      "\xb6\xb0\xc4\xde\xb6\xde\xb1\xd8\xcf\xbe\xdd"                     // "ï½¶ï½°ï¾„ï¾žï½¶ï¾žï½±ï¾˜ï¾�ï½¾ï¾�" ("Card removed")
#define MSG_LCD_ENDSTOPS                    "Endstops"                                                         // Max length 8 characters
#define MSG_MAIN                            "\xd2\xb2\xdd"                                                     // "ï¾’ï½²ï¾�" ("Main")
#define MSG_AUTOSTART                       "\xbc\xde\xc4\xde\xb3\xb6\xb2\xbc"                                 // "ï½¼ï¾žï¾„ï¾žï½³ï½¶ï½²ï½¼" ("Autostart")
#define MSG_DISABLE_STEPPERS                "\xd3\xb0\xc0\xb0\xc3\xde\xdd\xb9\xde\xdd\x20\xb5\xcc"             // "ï¾“ï½°ï¾€ï½°ï¾ƒï¾žï¾�ï½¹ï¾žï¾� ï½µï¾Œ" ("Disable steppers")
#define MSG_DEBUG_MENU                      "\xc3\xde\xca\xde\xaf\xb8\xde\xd2\xc6\xad\xb0"                     // "ï¾ƒï¾žï¾Šï¾žï½¯ï½¸ï¾žï¾’ï¾†ï½­ï½°" ("Debug Menu")
#define MSG_PROGRESS_BAR_TEST               "\xcc\xdf\xdb\xb8\xde\xda\xbd\xca\xde\xb0\x20\xc3\xbd\xc4"         // "ï¾Œï¾Ÿï¾›ï½¸ï¾žï¾šï½½ï¾Šï¾žï½° ï¾ƒï½½ï¾„" ("Progress Bar Test")
#define MSG_AUTO_HOME                       "\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7"                                 // "ï½¹ï¾žï¾�ï¾ƒï¾�ï¾Œï½¯ï½·" ("Auto home")
#define MSG_AUTO_HOME_X                     "X\xbc\xde\xb8\x20\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7"                // "Xï½¼ï¾žï½¸ ï½¹ï¾žï¾�ï¾ƒï¾�ï¾Œï½¯ï½·" ("Home X")
#define MSG_AUTO_HOME_Y                     "Y\xbc\xde\xb8\x20\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7"                // "Yï½¼ï¾žï½¸ ï½¹ï¾žï¾�ï¾ƒï¾�ï¾Œï½¯ï½·" ("Home Y")
#define MSG_AUTO_HOME_Z                     "Z\xbc\xde\xb8\x20\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7"                // "Zï½¼ï¾žï½¸ ï½¹ï¾žï¾�ï¾ƒï¾�ï¾Œï½¯ï½·" ("Home Z")
#define MSG_TMC_Z_CALIBRATION               "Z\xbc\xde\xb8\x20\xba\xb3\xbe\xb2"                                // "Zï½¼ï¾žï½¸ ï½ºï½³ï½¾ï½²" ("Calibrate Z")
#define MSG_LEVEL_BED_HOMING                "\xb9\xde\xdd\xc3\xdd\xcc\xaf\xb7\xc1\xad\xb3"                     // "ï½¹ï¾žï¾�ï¾ƒï¾�ï¾Œï½¯ï½·ï¾�ï½­ï½³" ("Homing XYZ")
#define MSG_LEVEL_BED_WAITING               "\xda\xcd\xde\xd8\xdd\xb8\xde\xb6\xb2\xbc"                         // "ï¾šï¾�ï¾žï¾˜ï¾�ï½¸ï¾žï½¶ï½²ï½¼" ("Click to Begin")
#define MSG_LEVEL_BED_NEXT_POINT            "\xc2\xb7\xde\xc9\xbf\xb8\xc3\xb2\xc3\xdd\xcd"                     // "ï¾‚ï½·ï¾žï¾‰ï½¿ï½¸ï¾ƒï½²ï¾ƒï¾�ï¾�" ("Next Point")
#define MSG_LEVEL_BED_DONE                  "\xda\xcd\xde\xd8\xdd\xb8\xde\xb6\xdd\xd8\xae\xb3"                 // "ï¾šï¾�ï¾žï¾˜ï¾�ï½¸ï¾žï½¶ï¾�ï¾˜ï½®ï½³" ("Leveling Done!")
#define MSG_SET_HOME_OFFSETS                "\xb7\xbc\xde\xad\xdd\xb5\xcc\xbe\xaf\xc4\xbe\xaf\xc3\xb2"         // "ï½·ï½¼ï¾žï½­ï¾�ï½µï¾Œï½¾ï½¯ï¾„ï½¾ï½¯ï¾ƒï½²" ("Set home offsets")
#define MSG_HOME_OFFSETS_APPLIED            "\xb5\xcc\xbe\xaf\xc4\xb6\xde\xc3\xb7\xd6\xb3\xbb\xda\xcf\xbc\xc0" // "ï½µï¾Œï½¾ï½¯ï¾„ï½¶ï¾žï¾ƒï½·ï¾–ï½³ï½»ï¾šï¾�ï½¼ï¾€" ("Offsets applied")
#define MSG_SET_ORIGIN                      "\xb7\xbc\xde\xad\xdd\xbe\xaf\xc4"                                 // "ï½·ï½¼ï¾žï½­ï¾�ï½¾ï½¯ï¾„" ("Set origin")
#define MSG_PREHEAT_1                       "PLA \xd6\xc8\xc2"                                                 // "PLA ï¾–ï¾ˆï¾‚" ("Preheat PLA")
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
#define MSG_PREHEAT_1_ALL                   "PLA \xbd\xcd\xde\xc3\xd6\xc8\xc2"                                 // "PLA ï½½ï¾�ï¾žï¾ƒï¾–ï¾ˆï¾‚" (" All")
#define MSG_PREHEAT_1_BEDONLY               "PLA \xcd\xde\xaf\xc4\xde\xd6\xc8\xc2"                             // "PLA ï¾�ï¾žï½¯ï¾„ï¾žï¾–ï¾ˆï¾‚" (" Bed")
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 "\xbe\xaf\xc3\xb2"                                   // "ï½¾ï½¯ï¾ƒï½²" (" conf")
#define MSG_PREHEAT_2                       "ABS \xd6\xc8\xc2"                                                 // "ABS ï¾–ï¾ˆï¾‚" ("Preheat ABS")
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
#define MSG_PREHEAT_2_ALL                   "ABS \xbd\xcd\xde\xc3\xd6\xc8\xc2"                                 // "ABS ï½½ï¾�ï¾žï¾ƒï¾–ï¾ˆï¾‚" (" All")
#define MSG_PREHEAT_2_BEDONLY               "ABS \xcd\xde\xaf\xc4\xde\xd6\xc8\xc2"                             // "ABS ï¾�ï¾žï½¯ï¾„ï¾žï¾–ï¾ˆï¾‚" (" Bed")
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 "\xbe\xaf\xc3\xb2"                                   // "ï½¾ï½¯ï¾ƒï½²" (" conf")
#define MSG_COOLDOWN                        "\xb6\xc8\xc2\xc3\xb2\xbc"                                         // "ï½¶ï¾ˆï¾‚ï¾ƒï½²ï½¼" ("Cooldown")
#define MSG_SWITCH_PS_ON                    "\xc3\xde\xdd\xb9\xde\xdd\x20\xb5\xdd"                             // "ï¾ƒï¾žï¾�ï½¹ï¾žï¾� ï½µï¾�" ("Switch power on")
#define MSG_SWITCH_PS_OFF                   "\xc3\xde\xdd\xb9\xde\xdd\x20\xb5\xcc"                             // "ï¾ƒï¾žï¾�ï½¹ï¾žï¾� ï½µï¾Œ" ("Switch power off")
#define MSG_EXTRUDE                         "\xb5\xbc\xc0\xde\xbc"                                             // "ï½µï½¼ï¾€ï¾žï½¼" ("Extrude")
#define MSG_RETRACT                         "\xcb\xb7\xba\xd0\xbe\xaf\xc3\xb2"                                 // "ï¾‹ï½·ï½ºï¾�ï½¾ï½¯ï¾ƒï½²" ("Retract")
#define MSG_MOVE_AXIS                       "\xbc\xde\xb8\xb2\xc4\xde\xb3"                                     // "ï½¼ï¾žï½¸ï½²ï¾„ï¾žï½³" ("Move axis")
#define MSG_BED_LEVELING                    "\xcd\xde\xaf\xc4\xde\xda\xcd\xde\xd8\xdd\xb8\xde"                 // "ï¾�ï¾žï½¯ï¾„ï¾žï¾šï¾�ï¾žï¾˜ï¾�ï½¸ï¾ž" ("Bed Leveling")
#define MSG_LEVEL_BED                       "\xcd\xde\xaf\xc4\xde\xda\xcd\xde\xd8\xdd\xb8\xde"                 // "ï¾�ï¾žï½¯ï¾„ï¾žï¾šï¾�ï¾žï¾˜ï¾�ï½¸ï¾ž" ("Level bed")
#define MSG_MOVING                          "\xb2\xc4\xde\xb3\xc1\xad\xb3"                                     // "ï½²ï¾„ï¾žï½³ï¾�ï½­ï½³" ("Moving...")
#define MSG_FREE_XY                         "XY\xbc\xde\xb8\x20\xb6\xb2\xce\xb3"                               // "XYï½¼ï¾žï½¸ ï½¶ï½²ï¾Žï½³" ("Free XY")
#define MSG_MOVE_X                          "X\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"                                // "Xï½¼ï¾žï½¸ ï½²ï¾„ï¾žï½³" ("Move X")
#define MSG_MOVE_Y                          "Y\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"                                // "Yï½¼ï¾žï½¸ ï½²ï¾„ï¾žï½³" ("Move Y")
#define MSG_MOVE_Z                          "Z\xbc\xde\xb8\x20\xb2\xc4\xde\xb3"                                // "Zï½¼ï¾žï½¸ ï½²ï¾„ï¾žï½³" ("Move Z")
#define MSG_MOVE_E                          "\xb4\xb8\xbd\xc4\xd9\xb0\xc0\xde\xb0"                             // "ï½´ï½¸ï½½ï¾„ï¾™ï½°ï¾€ï¾žï½°" ("Extruder")
#define MSG_MOVE_01MM                       "0.1mm \xb2\xc4\xde\xb3"                                           // "0.1mm ï½²ï¾„ï¾žï½³" ("Move 0.1mm")
#define MSG_MOVE_1MM                        "  1mm \xb2\xc4\xde\xb3"                                           // "  1mm ï½²ï¾„ï¾žï½³" ("Move 1mm")
#define MSG_MOVE_10MM                       " 10mm \xb2\xc4\xde\xb3"                                           // " 10mm ï½²ï¾„ï¾žï½³" ("Move 10mm")
#define MSG_SPEED                           "\xbf\xb8\xc4\xde"                                                 // "ï½¿ï½¸ï¾„ï¾ž" ("Speed")
#define MSG_BED_Z                           "Z\xb5\xcc\xbe\xaf\xc4"                                            // "Zï½µï¾Œï½¾ï½¯ï¾„" ("Bed Z")
#define MSG_NOZZLE                          "\xc9\xbd\xde\xd9"                                                 // "ï¾‰ï½½ï¾žï¾™" ("Nozzle")
#define MSG_BED                             "\xcd\xde\xaf\xc4\xde"                                             // "ï¾�ï¾žï½¯ï¾„ï¾ž" ("Bed")
#define MSG_FAN_SPEED                       "\xcc\xa7\xdd\xbf\xb8\xc4\xde"                                     // "ï¾Œï½§ï¾�ï½¿ï½¸ï¾„ï¾ž" ("Fan speed")
#define MSG_FLOW                            "\xc4\xbc\xad\xc2\xd8\xae\xb3"                                     // "ï¾„ï½¼ï½­ï¾‚ï¾˜ï½®ï½³" ("Flow")
#define MSG_CONTROL                         "\xbe\xb2\xb7\xde\xae"                                             // "ï½¾ï½²ï½·ï¾žï½®" ("Control")
#define MSG_MIN                             LCD_STR_THERMOMETER " \xbb\xb2\xc3\xb2"                            // " ï½»ï½²ï¾ƒï½²" (" Min")
#define MSG_MAX                             LCD_STR_THERMOMETER " \xbb\xb2\xba\xb3"                            // " ï½»ï½²ï½ºï½³" (" Max")
#define MSG_FACTOR                          LCD_STR_THERMOMETER " \xcc\xa7\xb8\xc0\xb0"                        // " ï¾Œï½§ï½¸ï¾€ï½°" (" Fact")
#if LCD_WIDTH >= 20
  #define MSG_AUTOTEMP                      "\xbc\xde\xc4\xde\xb3\xb5\xdd\xc4\xde\xbe\xb2\xb7\xde\xae"         // "ï½¼ï¾žï¾„ï¾žï½³ï½µï¾�ï¾„ï¾žï½¾ï½²ï½·ï¾žï½®" ("Autotemp")
#else
  #define MSG_AUTOTEMP                      "\xbc\xde\xc4\xde\xb3\xb5\xdd\xc4\xde"                             // "ï½¼ï¾žï¾„ï¾žï½³ï½µï¾�ï¾„ï¾ž" ("Autotemp")
#endif
#define MSG_ON                              "\xb5\xdd "                                                        // "ï½µï¾� " ("On ")
#define MSG_OFF                             "\xb5\xcc "                                                        // "ï½µï¾Œ " ("Off")
#define MSG_PID_P                           "PID-P"
#define MSG_PID_I                           "PID-I"
#define MSG_PID_D                           "PID-D"
#define MSG_PID_C                           "PID-C"
#define MSG_SELECT                          "\xbe\xdd\xc0\xb8"                                                 // "ï½¾ï¾�ï¾€ï½¸" ("Select")
#define MSG_JERK                            "\xbc\xde\xb8\x20\xd4\xb8\xc4\xde mm/s"                            // ãƒ¤ã‚¯ãƒ‰ mm/s ("Jerk")
#if LCD_WIDTH >= 20
  #define MSG_ACC                           "\xb6\xbf\xb8\xc4\xde mm/s2"                                       // "ï½¶ï½¿ï½¸ï¾„ï¾ž mm/s2" ("Accel")
  #if IS_KINEMATIC
    #define MSG_VA_JERK                     "A\xbc\xde\xb8\x20\xd4\xb8\xc4\xde mm/s"                           // "Aï½¼ï¾žï½¸ ï¾”ï½¸ï¾„ï¾ž mm/s" ("Va-jerk")
    #define MSG_VB_JERK                     "B\xbc\xde\xb8\x20\xd4\xb8\xc4\xde mm/s"                           // "Bï½¼ï¾žï½¸ ï¾”ï½¸ï¾„ï¾ž mm/s" ("Vb-jerk")
    #define MSG_VC_JERK                     "C\xbc\xde\xb8\x20\xd4\xb8\xc4\xde mm/s"                           // "Cï½¼ï¾žï½¸ ï¾”ï½¸ï¾„ï¾ž mm/s" ("Vc-jerk")
  #else
    #define MSG_VA_JERK                     "X\xbc\xde\xb8\x20\xd4\xb8\xc4\xde mm/s"                           // "Xï½¼ï¾žï½¸ ï¾”ï½¸ï¾„ï¾ž mm/s" ("Vx-jerk")
    #define MSG_VB_JERK                     "Y\xbc\xde\xb8\x20\xd4\xb8\xc4\xde mm/s"                           // "Yï½¼ï¾žï½¸ ï¾”ï½¸ï¾„ï¾ž mm/s" ("Vy-jerk")
    #define MSG_VC_JERK                     "Z\xbc\xde\xb8\x20\xd4\xb8\xc4\xde mm/s"                           // "Zï½¼ï¾žï½¸ ï¾”ï½¸ï¾„ï¾ž mm/s" ("Vz-jerk")
  #endif
  #define MSG_VE_JERK                       "\xb4\xb8\xbd\xc4\xd9\xb0\xc0\xde\xb0\x20\xd4\xb8\xc4\xde"         // "ï½´ï½¸ï½½ï¾„ï¾™ï½°ï¾€ï¾žï½° ï¾”ï½¸ï¾„ï¾ž" ("Ve-jerk")
  #define MSG_VMAX                          "\xbb\xb2\xc0\xde\xb2\xb5\xb8\xd8\xbf\xb8\xc4\xde "                // "ï½»ï½²ï¾€ï¾žï½²ï½µï½¸ï¾˜ï½¿ï½¸ï¾„ï¾ž " ("Vmax ")
  #define MSG_VMIN                          "\xbb\xb2\xbc\xae\xb3\xb5\xb8\xd8\xbf\xb8\xc4\xde"                 // "ï½»ï½²ï½¼ï½®ï½³ï½µï½¸ï¾˜ï½¿ï½¸ï¾„ï¾ž" ("Vmin")
  #define MSG_VTRAV_MIN                     "\xbb\xb2\xbc\xae\xb3\xb2\xc4\xde\xb3\xbf\xb8\xc4\xde"             // "ï½»ï½²ï½¼ï½®ï½³ï½²ï¾„ï¾žï½³ï½¿ï½¸ï¾„ï¾ž" ("VTrav min")
  #define MSG_AMAX                          "\xbb\xb2\xc0\xde\xb2\xb6\xbf\xb8\xc4\xde "                        // "ï½»ï½²ï¾€ï¾žï½²ï½¶ï½¿ï½¸ï¾„ï¾ž " ("Amax ")
#else
  #define MSG_ACC                           "\xb6\xbf\xb8\xc4\xde"                                             // "ï½¶ï½¿ï½¸ï¾„ï¾ž" ("Accel")
  #if IS_KINEMATIC
    #define MSG_VA_JERK                     "A\x20\xd4\xb8\xc4\xde"                                            // "Aï½¼ï¾žï½¸ ï¾”ï½¸ï¾„ï¾ž" ("Va-jerk")
    #define MSG_VB_JERK                     "B\x20\xd4\xb8\xc4\xde"                                            // "Bï½¼ï¾žï½¸ ï¾”ï½¸ï¾„ï¾ž" ("Vb-jerk")
    #define MSG_VC_JERK                     "C\x20\xd4\xb8\xc4\xde"                                            // "Cï½¼ï¾žï½¸ ï¾”ï½¸ï¾„ï¾ž" ("Vc-jerk")
  #else
    #define MSG_VA_JERK                     "X\x20\xd4\xb8\xc4\xde"                                            // "Xï½¼ï¾žï½¸ ï¾”ï½¸ï¾„ï¾ž" ("Vx-jerk")
    #define MSG_VB_JERK                     "Y\x20\xd4\xb8\xc4\xde"                                            // "Yï½¼ï¾žï½¸ ï¾”ï½¸ï¾„ï¾ž" ("Vy-jerk")
    #define MSG_VC_JERK                     "Z\x20\xd4\xb8\xc4\xde"                                            // "Zï½¼ï¾žï½¸ ï¾”ï½¸ï¾„ï¾ž" ("Vz-jerk")
  #endif
  #define MSG_VE_JERK                       "E\x20\xd4\xb8\xc4\xde"                                            // "E ï¾”ï½¸ï¾„ï¾ž" ("Ve-jerk")
  #define MSG_VMAX                          "max\xb5\xb8\xd8\xbf\xb8\xc4\xde "                                 // "maxï½µï½¸ï¾˜ï½¿ï½¸ï¾„ï¾ž" ("Vmax ")
  #define MSG_VMIN                          "min\xb5\xb8\xd8\xbf\xb8\xc4\xde"                                  // "minï½µï½¸ï¾˜ï½¿ï½¸ï¾„ï¾ž" ("Vmin")
  #define MSG_VTRAV_MIN                     "min\xb2\xc4\xde\xb3\xbf\xb8\xc4\xde"                              // "minï½²ï¾„ï¾žï½³ï½¿ï½¸ï¾„ï¾ž" ("VTrav min")
  #define MSG_AMAX                          "max\xb6\xbf\xb8 "                                                 // "maxï½¶ï½¿ï½¸ " ("Amax ")
#endif
#define MSG_A_RETRACT                       "\xcb\xb7\xba\xd0\xb6\xbf\xb8\xc4\xde"                             // "ï¾‹ï½·ï½ºï¾�ï½¶ï½¿ï½¸ï¾„ï¾ž" ("A-retract")
#define MSG_A_TRAVEL                        "\xb2\xc4\xde\xb3\xb6\xbf\xb8\xc4\xde"                             // "ï½²ï¾„ï¾žï½³ï½¶ï½¿ï½¸ï¾„ï¾ž" ("A-travel")
#if LCD_WIDTH >= 20
  #define MSG_STEPS_PER_MM                  "Steps/mm"
  #if IS_KINEMATIC
    #define MSG_ASTEPS                      "Asteps/mm"
    #define MSG_BSTEPS                      "Bsteps/mm"
    #define MSG_CSTEPS                      "Csteps/mm"
  #else
    #define MSG_ASTEPS                      "Xsteps/mm"
    #define MSG_BSTEPS                      "Ysteps/mm"
    #define MSG_CSTEPS                      "Zsteps/mm"
  #endif
  #define MSG_ESTEPS                        "Esteps/mm"
  #define MSG_E1STEPS                       "E1steps/mm"
  #define MSG_E2STEPS                       "E2steps/mm"
  #define MSG_E3STEPS                       "E3steps/mm"
  #define MSG_E4STEPS                       "E4steps/mm"
  #define MSG_E5STEPS                       "E5steps/mm"
#else
  #define MSG_STEPS_PER_MM                  "Steps"
  #if IS_KINEMATIC
    #define MSG_ASTEPS                      "Asteps"
    #define MSG_BSTEPS                      "Bsteps"
    #define MSG_CSTEPS                      "Csteps"
  #else
    #define MSG_ASTEPS                      "Xsteps"
    #define MSG_BSTEPS                      "Ysteps"
    #define MSG_CSTEPS                      "Zsteps"
  #endif
  #define MSG_ESTEPS                        "Esteps"
  #define MSG_E1STEPS                       "E1steps"
  #define MSG_E2STEPS                       "E2steps"
  #define MSG_E3STEPS                       "E3steps"
  #define MSG_E4STEPS                       "E4steps"
  #define MSG_E5STEPS                       "E5steps"
#endif
#define MSG_TEMPERATURE                     "\xb5\xdd\xc4\xde"                                                 // "ï½µï¾�ï¾„ï¾ž" ("Temperature")
#define MSG_MOTION                          "\xb3\xba\xde\xb7\xbe\xaf\xc3\xb2"                                 // "ï½³ï½ºï¾žï½·ï½¾ï½¯ï¾ƒï½²" ("Motion")
#define MSG_FILAMENT                        "\xcc\xa8\xd7\xd2\xdd\xc4"                                         // "ï¾Œï½¨ï¾—ï¾’ï¾�ï¾„" ("Filament")
#define MSG_VOLUMETRIC_ENABLED              "E in mm3"
#if LCD_WIDTH >= 20
  #define MSG_FILAMENT_DIAM                 "\xcc\xa8\xd7\xd2\xdd\xc4\xc1\xae\xaf\xb9\xb2"                     // "ï¾Œï½¨ï¾—ï¾’ï¾�ï¾„ï¾�ï½®ï½¯ï½¹ï½²" ("Fil. Dia.")
#else
  #define MSG_FILAMENT_DIAM                 "\xcc\xa8\xd7\xd2\xdd\xc4\xb9\xb2"                                 // "ï¾Œï½¨ï¾—ï¾’ï¾�ï¾„ï½¹ï½²" ("Fil. Dia.")
#endif
#define MSG_CONTRAST                        "LCD\xba\xdd\xc4\xd7\xbd\xc4"                                      // "LCDï½ºï¾�ï¾„ï¾—ï½½ï¾„" ("LCD contrast")
#define MSG_STORE_EEPROM                    "\xd2\xd3\xd8\xcd\xb6\xb8\xc9\xb3"                                 // "ï¾’ï¾“ï¾˜ï¾�ï½¶ï½¸ï¾‰ï½³" ("Store memory")
#define MSG_LOAD_EEPROM                     "\xd2\xd3\xd8\xb6\xd7\xd6\xd0\xba\xd0"                             // "ï¾’ï¾“ï¾˜ï½¶ï¾—ï¾–ï¾�ï½ºï¾�" ("Load memory")
#define MSG_RESTORE_FAILSAFE                "\xbe\xaf\xc3\xb2\xd8\xbe\xaf\xc4"                                 // "ï½¾ï½¯ï¾ƒï½²ï¾˜ï½¾ï½¯ï¾„" ("Restore failsafe")
#define MSG_REFRESH                         "\xd8\xcc\xda\xaf\xbc\xad"                                         // "ï¾˜ï¾Œï¾šï½¯ï½¼ï½­" ("Refresh")
#define MSG_WATCH                           "\xbc\xde\xae\xb3\xce\xb3\xb6\xde\xd2\xdd"                         // "ï½¼ï¾žï½®ï½³ï¾Žï½³ï½¶ï¾žï¾’ï¾�" ("Info screen")
#define MSG_PREPARE                         "\xbc\xde\xad\xdd\xcb\xde\xbe\xaf\xc3\xb2"                         // "ï½¼ï¾žï½­ï¾�ï¾‹ï¾žï½¾ï½¯ï¾ƒï½²" ("Prepare")
#define MSG_TUNE                            "\xc1\xae\xb3\xbe\xb2"                                             // "ï¾�ï½®ï½³ï½¾ï½²" ("Tune")
#define MSG_PAUSE_PRINT                     "\xb2\xc1\xbc\xde\xc3\xb2\xbc"                                     // "ï½²ï¾�ï½¼ï¾žï¾ƒï½²ï½¼" ("Pause print")
#define MSG_RESUME_PRINT                    "\xcc\xdf\xd8\xdd\xc4\xbb\xb2\xb6\xb2"                             // "ï¾Œï¾Ÿï¾˜ï¾�ï¾„ï½»ï½²ï½¶ï½²" ("Resume print")
#define MSG_STOP_PRINT                      "\xcc\xdf\xd8\xdd\xc4\xc3\xb2\xbc"                                 // "ï¾Œï¾Ÿï¾˜ï¾�ï¾„ï¾ƒï½²ï½¼" ("Stop print")
#define MSG_CARD_MENU                       "SD\xb6\xb0\xc4\xde\xb6\xd7\xcc\xdf\xd8\xdd\xc4"                   // "SDï½¶ï½°ï¾„ï¾žï½¶ï¾—ï¾Œï¾Ÿï¾˜ï¾�ï¾„" ("Print from SD")
#define MSG_NO_CARD                         "SD\xb6\xb0\xc4\xde\xb6\xde\xb1\xd8\xcf\xbe\xdd"                   // "SDï½¶ï½°ï¾„ï¾žï½¶ï¾žï½±ï¾˜ï¾�ï½¾ï¾�" ("No SD card")
#define MSG_DWELL                           "\xb7\xad\xb3\xbc"                                                 // "ï½·ï½­ï½³ï½¼" ("Sleep...")
#define MSG_USERWAIT                        "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"             // "ï½¼ï¾Šï¾žï¾—ï½¸ï½µï¾�ï¾�ï½¸ï¾€ï¾žï½»ï½²" ("Wait for user...")
#define MSG_PRINT_ABORTED                   "\xcc\xdf\xd8\xdd\xc4\xb6\xde\xc1\xad\xb3\xbc\xbb\xda\xcf\xbc\xc0" // "ï¾Œï¾Ÿï¾˜ï¾�ï¾„ï½¶ï¾žï¾�ï½­ï½³ï½¼ï½»ï¾šï¾�ï½¼ï¾€" ("Print aborted")
#define MSG_NO_MOVE                         "\xb3\xba\xde\xb7\xcf\xbe\xdd"                                     // "ï½³ï½ºï¾žï½·ï¾�ï½¾ï¾�" ("No move.")
#define MSG_KILLED                          "\xcb\xbc\xde\xae\xb3\xc3\xb2\xbc"                                 // "ï¾‹ï½¼ï¾žï½®ï½³ï¾ƒï½²ï½¼" ("KILLED. ")
#define MSG_STOPPED                         "\xc3\xb2\xbc\xbc\xcf\xbc\xc0"                                     // "ï¾ƒï½²ï½¼ï½¼ï¾�ï½¼ï¾€" ("STOPPED. ")
#if LCD_WIDTH >= 20
  #define MSG_CONTROL_RETRACT               "\xcb\xb7\xba\xd0\xd8\xae\xb3 mm"                                  // "ï¾‹ï½·ï½ºï¾�ï¾˜ï½®ï½³ mm" ("Retract mm")
  #define MSG_CONTROL_RETRACT_SWAP          "\xcb\xb7\xba\xd0\xd8\xae\xb3S mm"                                 // "ï¾‹ï½·ï½ºï¾�ï¾˜ï½®ï½³S mm" ("Swap Re.mm")
  #define MSG_CONTROL_RETRACTF              "\xcb\xb7\xba\xd0\xbf\xb8\xc4\xde mm/s"                            // "ï¾‹ï½·ï½ºï¾�ï½¿ï½¸ï¾„ï¾ž mm/s" ("Retract  V")
  #define MSG_CONTROL_RETRACT_ZLIFT         "\xc9\xbd\xde\xd9\xc0\xb2\xcb mm"                                  // "ï¾‰ï½½ï¾žï¾™ï¾€ï½²ï¾‹ mm" ("Hop mm")
  #define MSG_CONTROL_RETRACT_RECOVER       "\xce\xbc\xae\xb3\xd8\xae\xb3 mm"                                  // "ï¾Žï½¼ï½®ï½³ï¾˜ï½®ï½³ mm" ("UnRet mm")
  #define MSG_CONTROL_RETRACT_RECOVER_SWAP  "\xce\xbc\xae\xb3\xd8\xae\xb3S mm"                                 // "ï¾Žï½¼ï½®ï½³ï¾˜ï½®ï½³S mm" ("S UnRet mm")
  #define MSG_CONTROL_RETRACT_RECOVERF      "\xce\xbc\xae\xb3\xbf\xb8\xc4\xde mm/s"                            // "ï¾Žï½¼ï½®ï½³ï½¿ï½¸ï¾„ï¾ž mm/s" ("UnRet  V")
#else
  #define MSG_CONTROL_RETRACT               "\xcb\xb7\xba\xd0\xd8\xae\xb3"                                     // "ï¾‹ï½·ï½ºï¾�ï¾˜ï½®ï½³" ("Retract mm")
  #define MSG_CONTROL_RETRACT_SWAP          "\xcb\xb7\xba\xd0\xd8\xae\xb3S"                                    // "ï¾‹ï½·ï½ºï¾�ï¾˜ï½®ï½³S" ("Swap Re.mm")
  #define MSG_CONTROL_RETRACTF              "\xcb\xb7\xba\xd0\xbf\xb8\xc4\xde"                                 // "ï¾‹ï½·ï½ºï¾�ï½¿ï½¸ï¾„ï¾ž" ("Retract  V")
  #define MSG_CONTROL_RETRACT_ZLIFT         "\xc9\xbd\xde\xd9\xc0\xb2\xcb"                                     // "ï¾‰ï½½ï¾žï¾™ï¾€ï½²ï¾‹" ("Hop mm")
  #define MSG_CONTROL_RETRACT_RECOVER       "\xce\xbc\xae\xb3\xd8\xae\xb3"                                     // "ï¾Žï½¼ï½®ï½³ï¾˜ï½®ï½³" ("UnRet mm")
  #define MSG_CONTROL_RETRACT_RECOVER_SWAP  "\xce\xbc\xae\xb3\xd8\xae\xb3S"                                    // "ï¾Žï½¼ï½®ï½³ï¾˜ï½®ï½³S" ("S UnRet mm")
  #define MSG_CONTROL_RETRACT_RECOVERF      "\xce\xbc\xae\xb3\xbf\xb8\xc4\xde"                                 // "ï¾Žï½¼ï½®ï½³ï½¿ï½¸ï¾„ï¾ž" ("UnRet  V")
#endif
#define MSG_AUTORETRACT                     "\xbc\xde\xc4\xde\xb3\xcb\xb7\xba\xd0"                             // "ï½¼ï¾žï¾„ï¾žï½³ï¾‹ï½·ï½ºï¾�" ("AutoRetr.")
#define MSG_FILAMENTCHANGE                  "\xcc\xa8\xd7\xd2\xdd\xc4\xba\xb3\xb6\xdd"                         // "ï¾Œï½¨ï¾—ï¾’ï¾�ï¾„ï½ºï½³ï½¶ï¾�" ("Change filament")
#define MSG_INIT_SDCARD                     "SD\xb6\xb0\xc4\xde\xbb\xb2\xd6\xd0\xba\xd0"                       // "SDï½¶ï½°ï¾„ï¾žï½»ï½²ï¾–ï¾�ï½ºï¾�" ("Init. SD card")
#define MSG_CNG_SDCARD                      "SD\xb6\xb0\xc4\xde\xba\xb3\xb6\xdd"                               // "SDï½¶ï½°ï¾„ï¾žï½ºï½³ï½¶ï¾�" ("Change SD card")
#define MSG_ZPROBE_OUT                      "Z\xcc\xdf\xdb\xb0\xcc\xde\x20\xcd\xde\xaf\xc4\xde\xb6\xde\xb2"    // "Zï¾Œï¾Ÿï¾›ï½°ï¾Œï¾ž ï¾�ï¾žï½¯ï¾„ï¾žï½¶ï¾žï½²" ("Z probe out. bed")
#if LCD_WIDTH >= 20
  #define MSG_BLTOUCH_SELFTEST              "BLTouch \xbc\xde\xba\xbc\xdd\xc0\xde\xdd"                         // "BLTouch ï½¼ï¾žï½ºï½¼ï¾�ï¾€ï¾žï¾�" ("BLTouch Self-Test")
#else
  #define MSG_BLTOUCH_SELFTEST              "BLTouch \xbe\xd9\xcc\xc3\xbd\xc4"                                 // "BLTouch ï½¾ï¾™ï¾Œï¾ƒï½½ï¾„" ("BLTouch Self-Test")
#endif
#define MSG_BLTOUCH_RESET                   "BLTouch \xd8\xbe\xaf\xc4"                                         // "BLTouch ï¾˜ï½¾ï½¯ï¾„" ("Reset BLTouch")
#define MSG_HOME                            "\xbb\xb7\xc6"                                                     // "ï½»ï½·ï¾†" ("Home") // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
#if LCD_WIDTH >= 20
  #define MSG_FIRST                         "\xa6\xcc\xaf\xb7\xbb\xbe\xc3\xb8\xc0\xde\xbb\xb2"                 // "ï½¦ï¾Œï½¯ï½·ï½»ï½¾ï¾ƒï½¸ï¾€ï¾žï½»ï½²" ("first")
#else
  #define MSG_FIRST                         "\xa6\xcc\xaf\xb7\xbb\xbe\xd6"                                     // "ï½¦ï¾Œï½¯ï½·ï½»ï½¾ï¾–" ("first")
#endif
#define MSG_ZPROBE_ZOFFSET                  "Z\xb5\xcc\xbe\xaf\xc4"                                            // "Zï½µï¾Œï½¾ï½¯ï¾„" ("Z Offset")
#define MSG_BABYSTEP_X                      "X\xbc\xde\xb8\x20\xcb\xde\xc4\xde\xb3"                            // "Xï½¼ï¾žï½¸ ï¾‹ï¾žï¾„ï¾žï½³" ("Babystep X")
#define MSG_BABYSTEP_Y                      "Y\xbc\xde\xb8\x20\xcb\xde\xc4\xde\xb3"                            // "Yï½¼ï¾žï½¸ ï¾‹ï¾žï¾„ï¾žï½³" ("Babystep Y")
#define MSG_BABYSTEP_Z                      "Z\xbc\xde\xb8\x20\xcb\xde\xc4\xde\xb3"                            // "Zï½¼ï¾žï½¸ ï¾‹ï¾žï¾„ï¾žï½³" ("Babystep Z")
#if LCD_WIDTH >= 20
  #define MSG_ENDSTOP_ABORT                 "\xb2\xc4\xde\xb3\xb9\xde\xdd\xb6\xb2\xb9\xdd\xc1\xb7\xc9\xb3"     // "ï½²ï¾„ï¾žï½³ï½¹ï¾žï¾�ï½¶ï½²ï½¹ï¾�ï¾�ï½·ï¾‰ï½³" ("Endstop abort")
#else
  #define MSG_ENDSTOP_ABORT                 "\xb2\xc4\xde\xb3\xb9\xde\xdd\xb6\xb2\xb9\xdd\xc1"                 // "ï½²ï¾„ï¾žï½³ï½¹ï¾žï¾�ï½¶ï½²ï½¹ï¾�ï¾�" ("Endstop abort")
#endif
#define MSG_HEATING_FAILED_LCD              "\xb6\xc8\xc2\xbc\xaf\xca\xdf\xb2"                                 // "ï½¶ï¾ˆï¾‚ï½¼ï½¯ï¾Šï¾Ÿï½²" ("Heating failed")
#if LCD_WIDTH >= 20
  #define MSG_ERR_REDUNDANT_TEMP            "\xb4\xd7\xb0:\xbc\xde\xae\xb3\xc1\xae\xb3\xbb\xb0\xd0\xbd\xc0\xb0\xb7\xc9\xb3" // "ï½´ï¾—ï½°:ï½¼ï¾žï½®ï½³ï¾�ï½®ï½³ï½»ï½°ï¾�ï½½ï¾€ï½°ï½·ï¾‰ï½³" ("Err: REDUNDANT TEMP")
#else
  #define MSG_ERR_REDUNDANT_TEMP            "\xb4\xd7\xb0:\xbc\xde\xae\xb3\xc1\xae\xb3\xbb\xb0\xd0\xbd\xc0"                 // "ï½´ï¾—ï½°:ï½¼ï¾žï½®ï½³ï¾�ï½®ï½³ï½»ï½°ï¾�ï½½ï¾€" ("Err: REDUNDANT TEMP")
#endif
#define MSG_THERMAL_RUNAWAY                 "\xc8\xc2\xce\xde\xb3\xbf\xb3"                                                  // "ï¾ˆï¾‚ï¾Žï¾žï½³ï½¿ï½³" ("THERMAL RUNAWAY")
#define MSG_ERR_MAXTEMP                     "\xb4\xd7\xb0:\xbb\xb2\xba\xb3\xb5\xdd\xc1\xae\xb3\xb6"                         // "ï½´ï¾—ï½°:ï½»ï½²ï½ºï½³ï½µï¾�ï¾�ï½®ï½³ï½¶" ("Err: MAXTEMP")
#define MSG_ERR_MINTEMP                     "\xb4\xd7\xb0:\xbb\xb2\xc3\xb2\xb5\xdd\xd0\xcf\xdd"                             // "ï½´ï¾—ï½°:ï½»ï½²ï¾ƒï½²ï½µï¾�ï¾�ï¾�ï¾�" ("Err: MINTEMP")
#if LCD_WIDTH >= 20
  #define MSG_ERR_MAXTEMP_BED               "\xb4\xd7\xb0:\xcd\xde\xaf\xc4\xde\x20\xbb\xb2\xba\xb3\xb5\xdd\xc1\xae\xb3\xb6" // "ï½´ï¾—ï½°:ï¾�ï¾žï½¯ï¾„ï¾ž ï½»ï½²ï½ºï½³ï½µï¾�ï¾�ï½®ï½³ï½¶" ("Err: MAXTEMP BED")
  #define MSG_ERR_MINTEMP_BED               "\xb4\xd7\xb0:\xcd\xde\xaf\xc4\xde\x20\xbb\xb2\xc3\xb2\xb5\xdd\xd0\xcf\xdd"     // "ï½´ï¾—ï½°:ï¾�ï¾žï½¯ï¾„ï¾ž ï½»ï½²ï¾ƒï½²ï½µï¾�ï¾�ï¾�ï¾�" ("Err: MINTEMP BED")
#else
  #define MSG_ERR_MAXTEMP_BED               "\xb4\xd7\xb0:\xcd\xde\xaf\xc4\xde\x20\xbb\xb2\xba\xb3\xb5\xdd"                 // "ï½´ï¾—ï½°:ï¾�ï¾žï½¯ï¾„ï¾ž ï½»ï½²ï½ºï½³ï½µï¾�" ("Err: MAXTEMP BED")
  #define MSG_ERR_MINTEMP_BED               "\xb4\xd7\xb0:\xcd\xde\xaf\xc4\xde\x20\xbb\xb2\xc3\xb2\xb5\xdd"                 // "ï½´ï¾—ï½°:ï¾�ï¾žï½¯ï¾„ï¾ž ï½»ï½²ï¾ƒï½²ï½µï¾�" ("Err: MINTEMP BED")
#endif
#define MSG_ERR_Z_HOMING                    MSG_HOME " " MSG_X MSG_Y " " MSG_FIRST                             // "ï½»ï½·ï¾† XY ï½¦ï¾Œï½¯ï½·ï½»ï½¾ï¾ƒï½¸ï¾€ï¾žï½»ï½²" or "ï½»ï½·ï¾† XY ï½¦ï¾Œï½¯ï½·ï½»ï½¾ï¾–" ("G28 Z Forbidden")
#define MSG_HALTED                          "\xcc\xdf\xd8\xdd\xc0\xb0\xca\xc3\xb2\xbc\xbc\xcf\xbc\xc0"         // "ï¾Œï¾Ÿï¾˜ï¾�ï¾€ï½°ï¾Šï¾ƒï½²ï½¼ï½¼ï¾�ï½¼ï¾€" ("PRINTER HALTED")
#define MSG_PLEASE_RESET                    "\xd8\xbe\xaf\xc4\xbc\xc3\xb8\xc0\xde\xbb\xb2"                     // "ï¾˜ï½¾ï½¯ï¾„ï½¼ï¾ƒï½¸ï¾€ï¾žï½»ï½²" ("Please reset")
#define MSG_SHORT_DAY                       "d"                                                                // One character only
#define MSG_SHORT_HOUR                      "h"                                                                // One character only
#define MSG_SHORT_MINUTE                    "m"                                                                // One character only
#define MSG_HEATING                         "\xb6\xc8\xc2\xc1\xad\xb3"                                         // "ï½¶ï¾ˆï¾‚ï¾�ï½­ï½³" ("Heating...")
#define MSG_BED_HEATING                     "\xcd\xde\xaf\xc4\xde\x20\xb6\xc8\xc2\xc1\xad\xb3"                 // "ï¾�ï¾žï½¯ï¾„ï¾ž ï½¶ï¾ˆï¾‚ï¾�ï½­ï½³" ("Bed Heating...")
#define MSG_DELTA_CALIBRATE                 "\xc3\xde\xd9\xc0\x20\xba\xb3\xbe\xb2"                             // "ï¾ƒï¾žï¾™ï¾€ ï½ºï½³ï½¾ï½²" ("Delta Calibration")
#define MSG_DELTA_CALIBRATE_X               "X\xbc\xde\xb8\x20\xba\xb3\xbe\xb2"                                // "Xï½¼ï¾žï½¸ ï½ºï½³ï½¾ï½²" ("Calibrate X")
#define MSG_DELTA_CALIBRATE_Y               "Y\xbc\xde\xb8\x20\xba\xb3\xbe\xb2"                                // "Yï½¼ï¾žï½¸ ï½ºï½³ï½¾ï½²" ("Calibrate Y")
#define MSG_DELTA_CALIBRATE_Z               "Z\xbc\xde\xb8\x20\xba\xb3\xbe\xb2"                                // "Zï½¼ï¾žï½¸ ï½ºï½³ï½¾ï½²" ("Calibrate Z")
#define MSG_DELTA_CALIBRATE_CENTER          "\xc1\xad\xb3\xbc\xdd\x20\xba\xb3\xbe\xb2"                         // "ï¾�ï½­ï½³ï½¼ï¾� ï½ºï½³ï½¾ï½²" ("Calibrate Center")
#define MSG_INFO_MENU                       "\xba\xc9\xcc\xdf\xd8\xdd\xc0\xb0\xc6\xc2\xb2\xc3"                 // "ï½ºï¾‰ï¾Œï¾Ÿï¾˜ï¾�ï¾€ï½°ï¾†ï¾‚ï½²ï¾ƒ" ("About Printer")
#define MSG_INFO_PRINTER_MENU               "\xcc\xdf\xd8\xdd\xc0\xb0\xbc\xde\xae\xb3\xce\xb3"                 // "ï¾Œï¾Ÿï¾˜ï¾�ï¾€ï½°ï½¼ï¾žï½®ï½³ï¾Žï½³" ("Printer Info")
#define MSG_INFO_STATS_MENU                 "\xcc\xdf\xd8\xdd\xc4\xbc\xde\xae\xb3\xb7\xae\xb3"                 // "ï¾Œï¾Ÿï¾˜ï¾�ï¾„ï½¼ï¾žï½®ï½³ï½·ï½®ï½³" ("Printer Stats")
#define MSG_INFO_BOARD_MENU                 "\xbe\xb2\xb7\xde\xae\xb9\xb2\xbc\xde\xae\xb3\xce\xb3"             // "ï½¾ï½²ï½·ï¾žï½®ï½¹ï½²ï½¼ï¾žï½®ï½³ï¾Žï½³" ("Board Info")
#define MSG_INFO_THERMISTOR_MENU            "\xbb\xb0\xd0\xbd\xc0\xb0"                                         // "ï½»ï½°ï¾�ï½½ï¾€ï½°" ("Thermistors")
#define MSG_INFO_EXTRUDERS                  "\xb4\xb8\xbd\xc4\xd9\xb0\xc0\xde\xb0\xbd\xb3"                     // "ï½´ï½¸ï½½ï¾„ï¾™ï½°ï¾€ï¾žï½°ï½½ï½³" ("Extruders")
#define MSG_INFO_BAUDRATE                   "\xce\xde\xb0\xda\xb0\xc4"                                         // "ï¾Žï¾žï½°ï¾šï½°ï¾„" ("Baud")
#define MSG_INFO_PROTOCOL                   "\xcc\xdf\xdb\xc4\xba\xd9"                                         // "ï¾Œï¾Ÿï¾›ï¾„ï½ºï¾™" ("Protocol")
#define MSG_CASE_LIGHT                      "\xb7\xae\xb3\xc0\xb2\xc5\xb2\xbc\xae\xb3\xd2\xb2"                 // "ï½·ï½®ï½³ï¾€ï½²ï¾…ï½²ï½¼ï½®ï½³ï¾’ï½²" ("Case light")
#define MSG_INFO_PRINT_COUNT                "\xcc\xdf\xd8\xdd\xc4\xbd\xb3"                                     // "ï¾Œï¾Ÿï¾˜ï¾�ï¾„ï½½ï½³" ("Print Count")
#define MSG_INFO_COMPLETED_PRINTS           "\xb6\xdd\xd8\xae\xb3\xbd\xb3"                                     // "ï½¶ï¾�ï¾˜ï½®ï½³ï½½ï½³" ("Completed")
#define MSG_INFO_PRINT_TIME                 "\xcc\xdf\xd8\xdd\xc4\xbc\xde\xb6\xdd\xd9\xb2\xb9\xb2"             // "ï¾Œï¾Ÿï¾˜ï¾�ï¾„ï½¼ï¾žï½¶ï¾�ï¾™ï½²ï½¹ï½²" ("Total print time")
#define MSG_INFO_PRINT_LONGEST              "\xbb\xb2\xc1\xae\xb3\xcc\xdf\xd8\xdd\xc4\xbc\xde\xb6\xdd"         // "ï½»ï½²ï¾�ï½®ï½³ï¾Œï¾Ÿï¾˜ï¾�ï¾„ï½¼ï¾žï½¶ï¾�" ("Longest job time")
#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_FILAMENT           "\xcc\xa8\xd7\xd2\xdd\xc4\xbc\xd6\xb3\xd8\xae\xb3\xd9\xb2\xb9\xb2" // "ï¾Œï½¨ï¾—ï¾’ï¾�ï¾„ï½¼ï¾–ï½³ï¾˜ï½®ï½³ï¾™ï½²ï½¹ï½²" ("Extruded total")
#else
  #define MSG_INFO_PRINT_FILAMENT           "\xcc\xa8\xd7\xd2\xdd\xc4\xbf\xb3\xbc\xd6\xb3\xd8\xae\xb3"         // "ï¾Œï½¨ï¾—ï¾’ï¾�ï¾„ï½¿ï½³ï½¼ï¾–ï½³ï¾˜ï½®ï½³" ("Extruded")
#endif
#define MSG_INFO_MIN_TEMP                   "\xbe\xaf\xc3\xb2\xbb\xb2\xc3\xb2\xb5\xdd"                         // "ï½¾ï½¯ï¾ƒï½²ï½»ï½²ï¾ƒï½²ï½µï¾�" ("Min Temp")
#define MSG_INFO_MAX_TEMP                   "\xbe\xaf\xc3\xb2\xbb\xb2\xba\xb3\xb5\xdd"                         // "ï½¾ï½¯ï¾ƒï½²ï½»ï½²ï½ºï½³ï½µï¾�" ("Max Temp")
#if LCD_WIDTH >= 20
  #define MSG_INFO_PSU                      "\xc3\xde\xdd\xb9\xde\xdd\xbc\xad\xcd\xde\xc2"                     // "ï¾ƒï¾žï¾�ï½¹ï¾žï¾�ï½¼ï½­ï¾�ï¾žï¾‚" ("Power Supply")
#else
  #define MSG_INFO_PSU                      "\xc3\xde\xdd\xb9\xde\xdd"                                         // "ï¾ƒï¾žï¾�ï½¹ï¾žï¾�" ("Power Supply")
#endif
#define MSG_DRIVE_STRENGTH                  "\xd3\xb0\xc0\xb0\xb8\xc4\xde\xb3\xd8\xae\xb8"                     // "ï¾“ï½°ï¾€ï½°ï½¸ï¾„ï¾žï½³ï¾˜ï½®ï½¸" ("Drive Strength")
#if LCD_WIDTH >= 20
  #define MSG_DAC_PERCENT                   "DAC\xbc\xad\xc2\xd8\xae\xb8 %"                                    // "DACï½¼ï½­ï¾‚ï¾˜ï½®ï½¸ %" ("Driver %")
#else
  #define MSG_DAC_PERCENT                   "DAC\xbc\xad\xc2\xd8\xae\xb8"                                      // "DACï½¼ï½­ï¾‚ï¾˜ï½®ï½¸" ("Driver %")
#endif
#define MSG_DAC_EEPROM_WRITE                MSG_STORE_EEPROM                                                   // "ï¾’ï¾“ï¾˜ï¾�ï½¶ï½¸ï¾‰ï½³" ("DAC EEPROM Write")
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   "\xcc\xdf\xd8\xdd\xc4\xbb\xb2\xb6\xb2"                             // "ï¾Œï¾Ÿï¾˜ï¾�ï¾„ï½»ï½²ï½¶ï½²" ("Resume print")

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1        "\xba\xb3\xb6\xdd\xa6\xb6\xb2\xbc\xbc\xcf\xbd"                     // "ï½ºï½³ï½¶ï¾�ï½¦ï½¶ï½²ï½¼ï½¼ï¾�ï½½" ("Wait for start")
  #define MSG_FILAMENT_CHANGE_INIT_2        "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"             // "ï½¼ï¾Šï¾žï¾—ï½¸ï½µï¾�ï¾�ï½¸ï¾€ï¾žï½»ï½²" ("of the filament")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      "\xcc\xa8\xd7\xd2\xdd\xc4\xc7\xb7\xc0\xde\xbc\xc1\xad\xb3"         // "ï¾Œï½¨ï¾—ï¾’ï¾�ï¾„ï¾‡ï½·ï¾€ï¾žï½¼ï¾�ï½­ï½³" ("Wait for")
  #define MSG_FILAMENT_CHANGE_UNLOAD_2      "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"             // "ï½¼ï¾Šï¾žï¾—ï½¸ï½µï¾�ï¾�ï½¸ï¾€ï¾žï½»ï½²" ("filament unload")
  #define MSG_FILAMENT_CHANGE_INSERT_1      "\xcc\xa8\xd7\xd2\xdd\xc4\xa6\xbf\xb3\xc6\xad\xb3\xbc,"            // "ï¾Œï½¨ï¾—ï¾’ï¾�ï¾„ï½¦ï½¿ï½³ï¾†ï½­ï½³ï½¼," ("Insert filament")
  #define MSG_FILAMENT_CHANGE_INSERT_2      "\xb8\xd8\xaf\xb8\xbd\xd9\xc4\xbf\xde\xaf\xba\xb3\xbc\xcf\xbd"     // "ï½¸ï¾˜ï½¯ï½¸ï½½ï¾™ï¾„ï½¿ï¾žï½¯ï½ºï½³ï½¼ï¾�ï½½" ("and press button")
  #define MSG_FILAMENT_CHANGE_LOAD_1        "\xcc\xa8\xd7\xd2\xdd\xc4\xbf\xb3\xc3\xdd\xc1\xad\xb3"             // "ï¾Œï½¨ï¾—ï¾’ï¾�ï¾„ï½¿ï½³ï¾ƒï¾�ï¾�ï½­ï½³" ("Wait for")
  #define MSG_FILAMENT_CHANGE_LOAD_2        "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"             // "ï½¼ï¾Šï¾žï¾—ï½¸ï½µï¾�ï¾�ï½¸ï¾€ï¾žï½»ï½²" ("filament load")
  #define MSG_FILAMENT_CHANGE_RESUME_1      "\xcc\xdf\xd8\xdd\xc4\xa6\xbb\xb2\xb6\xb2\xbc\xcf\xbd"             // "ï¾Œï¾Ÿï¾˜ï¾�ï¾„ï½¦ï½»ï½²ï½¶ï½²ï½¼ï¾�ï½½" ("Wait for print")
  #define MSG_FILAMENT_CHANGE_RESUME_2      "\xbc\xca\xde\xd7\xb8\xb5\xcf\xc1\xb8\xc0\xde\xbb\xb2"             // "ï½¼ï¾Šï¾žï¾—ï½¸ï½µï¾�ï¾�ï½¸ï¾€ï¾žï½»ï½²" ("to resume")
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1        "\xba\xb3\xb6\xdd\xa6\xb6\xb2\xbc\xbc\xcf\xbd"                     // "ï½ºï½³ï½¶ï¾�ï½¦ï½¶ï½²ï½¼ï½¼ï¾�ï½½" ("Please wait...")
  #define MSG_FILAMENT_CHANGE_UNLOAD_1      "\xcc\xa8\xd7\xd2\xdd\xc4\xc7\xb7\xc0\xde\xbc\xc1\xad\xb3"         // "ï¾Œï½¨ï¾—ï¾’ï¾�ï¾„ï¾‡ï½·ï¾€ï¾žï½¼ï¾�ï½­ï½³" ("Ejecting...")
  #if LCD_WIDTH >= 20
    #define MSG_FILAMENT_CHANGE_INSERT_1    "\xbf\xb3\xc6\xad\xb3\xbc\x2c\xb8\xd8\xaf\xb8\xbc\xc3\xb8\xc0\xde\xbb\xb2" // "ï½¿ï½³ï¾†ï½­ï½³ï½¼,ï½¸ï¾˜ï½¯ï½¸ï½¼ï¾ƒï½¸ï¾€ï¾žï½»ï½²" ("Insert and Click")
  #else
    #define MSG_FILAMENT_CHANGE_INSERT_1    "\xbf\xb3\xc6\xad\xb3\xbc\x2c\xb8\xd8\xaf\xb8\xbe\xd6"                     // "ï½¿ï½³ï¾†ï½­ï½³ï½¼,ï½¸ï¾˜ï½¯ï½¸ï½¾ï¾–" ("Insert and Click")
  #endif
  #define MSG_FILAMENT_CHANGE_LOAD_1        "\xcc\xa8\xd7\xd2\xdd\xc4\xbf\xb3\xc3\xdd\xc1\xad\xb3"             // "ï¾Œï½¨ï¾—ï¾’ï¾�ï¾„ï½¿ï½³ï¾ƒï¾�ï¾�ï½­ï½³" ("Loading...")
  #define MSG_FILAMENT_CHANGE_RESUME_1      "\xcc\xdf\xd8\xdd\xc4\xa6\xbb\xb2\xb6\xb2\xbc\xcf\xbd"             // "ï¾Œï¾Ÿï¾˜ï¾�ï¾„ï½¦ï½»ï½²ï½¶ï½²ï½¼ï¾�ï½½" ("Resuming...")
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_KANA_H
