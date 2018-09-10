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
 * Greek
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_EL_H
#define LANGUAGE_EL_H

#define MAPPER_CECF
#define DISPLAY_CHARSET_ISO10646_GREEK
#define CHARSIZE 2

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" Î­Ï„Î¿Î¹Î¼Î¿.")
#define MSG_SD_INSERTED                     _UxGT("Î•Î¹ÏƒÎ±Î³Ï‰Î³Î® ÎºÎ¬Ï�Ï„Î±Ï‚")
#define MSG_SD_REMOVED                      _UxGT("Î‘Ï†Î±Î¯Ï�ÎµÏƒÎ· ÎºÎ¬Ï�Ï„Î±Ï‚")
#define MSG_LCD_ENDSTOPS                    _UxGT("Endstops") // Max length 8 characters
#define MSG_MAIN                            _UxGT("Î’Î±ÏƒÎ¹ÎºÎ® ÎŸÎ¸ÏŒÎ½Î·")
#define MSG_AUTOSTART                       _UxGT("Î‘Ï…Ï„ÏŒÎ¼Î±Ï„Î· ÎµÎºÎºÎ¯Î½Î·ÏƒÎ·")
#define MSG_DISABLE_STEPPERS                _UxGT("Î‘Ï€ÎµÎ½ÎµÏ�Î³Î¿Ï€Î¿Î¯Î·ÏƒÎ· ÎœÎ¿Ï„Î­Ï�")
#define MSG_AUTO_HOME                       _UxGT("Î‘Ï…Ï„Î¿Î¼. ÎµÏ€Î±Î½Î±Ï†Î¿Ï�Î¬ ÏƒÏ„Î¿ Î±Ï�Ï‡Î¹ÎºÏŒ ÏƒÎ·Î¼ÎµÎ¯Î¿") //SHORTEN
#define MSG_AUTO_HOME_X                     _UxGT("Î‘Ï�Ï‡Î¹ÎºÏŒ ÏƒÎ·Î¼ÎµÎ¯Î¿ X")
#define MSG_AUTO_HOME_Y                     _UxGT("Î‘Ï�Ï‡Î¹ÎºÏŒ ÏƒÎ·Î¼ÎµÎ¯Î¿ Y")
#define MSG_AUTO_HOME_Z                     _UxGT("Î‘Ï�Ï‡Î¹ÎºÏŒ ÏƒÎ·Î¼ÎµÎ¯Î¿ Z")
#define MSG_TMC_Z_CALIBRATION               _UxGT("Î’Î±Î¸Î¼Î¿Î½ÏŒÎ¼Î·ÏƒÎ· Z")
#define MSG_LEVEL_BED_HOMING                _UxGT("Î•Ï€Î±Î½Î±Ï†Î¿Ï�Î¬ Î•Ï€. Î•ÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚") //SHORTEN
#define MSG_LEVEL_BED_WAITING               _UxGT("Î•Ï€Î¹Ï€ÎµÎ´Î¿Ï€Î¿Î¯Î·ÏƒÎ· ÎµÏ€. Î•ÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚ Ï€ÎµÏ�Î¹Î¼ÎµÎ½ÎµÎ¹") //SHORTEN
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("Î•Ï€ÏŒÎ¼ÎµÎ½Î¿ ÏƒÎ·Î¼ÎµÎ¯Î¿")
#define MSG_LEVEL_BED_DONE                  _UxGT("ÎŸÎ»Î¿ÎºÎ»Î®Ï�Ï‰ÏƒÎ· ÎµÏ€Î¹Ï€ÎµÎ´Î¿Ï€Î¿Î¯Î·ÏƒÎ·Ï‚!") //SHORTEN
#define MSG_SET_HOME_OFFSETS                _UxGT("ÎŸÏ�Î¹ÏƒÎ¼ÏŒÏ‚ Î²Î±ÏƒÎ¹ÎºÏŽÎ½ Î¼ÎµÏ„Î±Ï„Î¿Ï€Î¯ÏƒÎµÏ‰Î½") //SHORTEN
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Î•Ï†Î±Ï�Î¼ÏŒÏƒÏ„Î·ÎºÎ±Î½ Î¿Î¹ Î¼ÎµÏ„Î±Ï„Î¿Ï€Î¯ÏƒÎµÎ¹Ï‚") //SHORTEN
#define MSG_SET_ORIGIN                      _UxGT("ÎŸÏ�Î¹ÏƒÎ¼ÏŒÏ‚ Ï€Ï�Î¿Î­Î»ÎµÏ…ÏƒÎ·Ï‚")
#define MSG_PREHEAT_1                       _UxGT("Î Ï�Î¿Î¸Î­Ï�Î¼Î±Î½ÏƒÎ· PLA")
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" ÏŒÎ»Î±")
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" bed") //SHORTEN
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" ÎµÏ€Î¹Î²ÎµÎ²Î±Î¯Ï‰ÏƒÎ·") //SHORTEN
#define MSG_PREHEAT_2                       _UxGT("Î Ï�Î¿Î¸Î­Ï�Î¼Î±Î½ÏƒÎ· ABS")
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" ÏŒÎ»Î±")
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" bed") //SHORTEN
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" ÎµÏ€Î¹Î²ÎµÎ²Î±Î¯Ï‰ÏƒÎ·") //SHORTEN
#define MSG_COOLDOWN                        _UxGT("ÎœÎµÎ¹Ï‰ÏƒÎ· Î¸ÎµÏ�Î¼Î¿ÎºÏ�Î±ÏƒÎ¹Î±Ï‚")
#define MSG_SWITCH_PS_ON                    _UxGT("Î•Î½ÎµÏ�Î³Î¿Ï€Î¿Î¯Î·ÏƒÎ·")
#define MSG_SWITCH_PS_OFF                   _UxGT("Î‘Ï€ÎµÎ½ÎµÏ�Î³Î¿Ï€Î¿Î¯Î·ÏƒÎ·")
#define MSG_EXTRUDE                         _UxGT("Î•Î¾ÏŽÎ¸Î·ÏƒÎ·")
#define MSG_RETRACT                         _UxGT("Î‘Î½Î¬ÏƒÏ…Ï�ÏƒÎ·")
#define MSG_MOVE_AXIS                       _UxGT("ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· Î¬Î¾Î¿Î½Î±")
#define MSG_BED_LEVELING                    _UxGT("Î•Ï€Î¹Ï€ÎµÎ´Î¿Ï€Î¿Î¯Î·ÏƒÎ· Î•Ï€. Î•ÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚") //SHORTEN
#define MSG_LEVEL_BED                       _UxGT("Î•Ï€Î¹Ï€ÎµÎ´Î¿Ï€Î¿Î¯Î·ÏƒÎ· Î•Ï€. Î•ÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚") //SHORTEN
#define MSG_MOVE_X                          _UxGT("ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· X")
#define MSG_MOVE_Y                          _UxGT("ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· Y")
#define MSG_MOVE_Z                          _UxGT("ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· Z")
#define MSG_MOVE_E                          _UxGT("Î•Î¾Ï‰Î¸Î·Ï„Î®Ï�Î±Ï‚")
#define MSG_MOVE_01MM                       _UxGT("ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· 0,1Î¼Î¼")
#define MSG_MOVE_1MM                        _UxGT("ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· 1Î¼Î¼")
#define MSG_MOVE_10MM                       _UxGT("ÎœÎµÏ„Î±ÎºÎ¯Î½Î·ÏƒÎ· 10Î¼Î¼")
#define MSG_SPEED                           _UxGT("Î¤Î±Ï‡Ï�Ï„Î·Ï„Î±")
#define MSG_BED_Z                           _UxGT("Î•Ï€. Î•ÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚ Z")
#define MSG_NOZZLE                          _UxGT("Î‘ÎºÏ�Î¿Ï†Ï�ÏƒÎ¹Î¿")
#define MSG_BED                             _UxGT("ÎšÎ»Î¯Î½Î·")
#define MSG_FAN_SPEED                       _UxGT("Î¤Î±Ï‡Ï�Ï„Î·Ï„Î± Î±Î½ÎµÎ¼Î¹ÏƒÏ„Î®Ï�Î±")
#define MSG_FLOW                            _UxGT("Î¡Î¿Î®")
#define MSG_CONTROL                         _UxGT("ÎˆÎ»ÎµÎ³Ï‡Î¿Ï‚")
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Min")
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Max")
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Fact")
#define MSG_AUTOTEMP                        _UxGT("Î‘Ï…Ï„Î¿Î¼ Ï�Ï�Î¸Î¼Î¹ÏƒÎ· Î¸ÎµÏ�/ÏƒÎ¯Î±Ï‚") //SHORTEN
#define MSG_ON                              _UxGT("Î•Î½ÎµÏ�Î³Î¿Ï€Î¿Î¹Î·Î¼Î­Î½Î¿")
#define MSG_OFF                             _UxGT("Î‘Ï€ÎµÎ½ÎµÏ�Î³Î¿Ï€Î¿Î¹Î·Î¼Î­Î½Î¿")
#define MSG_PID_P                           _UxGT("PID-P")
#define MSG_PID_I                           _UxGT("PID-I")
#define MSG_PID_D                           _UxGT("PID-D")
#define MSG_PID_C                           _UxGT("PID-C")
#define MSG_ACC                             _UxGT("Î•Ï€Î¹Ï„Î¬Ï‡Ï…Î½ÏƒÎ·")
#define MSG_JERK                            _UxGT("Jerk")
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("VÎ±Î½Ï„Î¯Î´Ï�Î±ÏƒÎ· A")
  #define MSG_VB_JERK                       _UxGT("VÎ±Î½Ï„Î¯Î´Ï�Î±ÏƒÎ· B")
  #define MSG_VC_JERK                       _UxGT("VÎ±Î½Ï„Î¯Î´Ï�Î±ÏƒÎ· C")
#else
  #define MSG_VA_JERK                       _UxGT("VÎ±Î½Ï„Î¯Î´Ï�Î±ÏƒÎ· X")
  #define MSG_VB_JERK                       _UxGT("VÎ±Î½Ï„Î¯Î´Ï�Î±ÏƒÎ· Y")
  #define MSG_VC_JERK                       _UxGT("VÎ±Î½Ï„Î¯Î´Ï�Î±ÏƒÎ· Z")
#endif
#define MSG_VE_JERK                         _UxGT("VÎ±Î½Ï„Î¯Î´Ï�Î±ÏƒÎ· E")
#define MSG_VMAX                            _UxGT("V ÎœÎ­Î³Î¹ÏƒÏ„Î¿")
#define MSG_VMIN                            _UxGT("V Î•Î»Î¬Ï‡Î¹ÏƒÏ„Î¿")
#define MSG_VTRAV_MIN                       _UxGT("VÎµÎ»Î¬Ï‡. Î¼ÎµÏ„Î±Ï„ÏŒÏ€Î¹ÏƒÎ·")
#define MSG_ACCELERATION                    MSG_ACC
#define MSG_AMAX                            _UxGT("AÎ¼ÎµÎ³ ")
#define MSG_A_RETRACT                       _UxGT("Î‘-Î±Î½Î¬ÏƒÏ…Ï�ÏƒÎ·")
#define MSG_A_TRAVEL                        _UxGT("Î‘-Î¼ÎµÏ„Î±Ï„ÏŒÏ€Î¹ÏƒÎ·")
#define MSG_STEPS_PER_MM                    _UxGT("BÎ®Î¼Î±Ï„Î± Î±Î½Î¬ Î¼Î¼")
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("BÎ®Î¼Î±Ï„Î± A Î±Î½Î¬ Î¼Î¼")
  #define MSG_BSTEPS                        _UxGT("BÎ®Î¼Î±Ï„Î± B Î±Î½Î¬ Î¼Î¼")
  #define MSG_CSTEPS                        _UxGT("BÎ®Î¼Î±Ï„Î± C Î±Î½Î¬ Î¼Î¼")
#else
  #define MSG_ASTEPS                        _UxGT("BÎ®Î¼Î±Ï„Î± X Î±Î½Î¬ Î¼Î¼")
  #define MSG_BSTEPS                        _UxGT("BÎ®Î¼Î±Ï„Î± Y Î±Î½Î¬ Î¼Î¼")
  #define MSG_CSTEPS                        _UxGT("BÎ®Î¼Î±Ï„Î± Z Î±Î½Î¬ Î¼Î¼")
#endif
#define MSG_ESTEPS                          _UxGT("BÎ®Î¼Î±Ï„Î± Î• Î±Î½Î¬ Î¼Î¼")
#define MSG_E1STEPS                         _UxGT("BÎ®Î¼Î±Ï„Î± Î•1 Î±Î½Î¬ Î¼Î¼")
#define MSG_E2STEPS                         _UxGT("BÎ®Î¼Î±Ï„Î± Î•2 Î±Î½Î¬ Î¼Î¼")
#define MSG_E3STEPS                         _UxGT("BÎ®Î¼Î±Ï„Î± Î•3 Î±Î½Î¬ Î¼Î¼")
#define MSG_E4STEPS                         _UxGT("BÎ®Î¼Î±Ï„Î± Î•4 Î±Î½Î¬ Î¼Î¼")
#define MSG_E5STEPS                         _UxGT("BÎ®Î¼Î±Ï„Î± Î•5 Î±Î½Î¬ Î¼Î¼")
#define MSG_TEMPERATURE                     _UxGT("Î˜ÎµÏ�Î¼Î¿ÎºÏ�Î±ÏƒÎ¯Î±")
#define MSG_MOTION                          _UxGT("ÎšÎ¯Î½Î·ÏƒÎ·")
#define MSG_FILAMENT                        _UxGT("Î�Î®Î¼Î±")
#define MSG_VOLUMETRIC_ENABLED              _UxGT("Î• ÏƒÎµ Î¼Î¼3")
#define MSG_FILAMENT_DIAM                   _UxGT("Î”Î¹Î¬Î¼ÎµÏ„Ï�Î¿Ï‚ Î½Î®Î¼Î±Ï„Î¿Ï‚")
#define MSG_CONTRAST                        _UxGT("ÎšÎ¿Î½Ï„Ï�Î¬ÏƒÏ„ LCD")
#define MSG_STORE_EEPROM                    _UxGT("Î‘Ï€Î¿Î¸Î®ÎºÎµÏ…ÏƒÎ·")
#define MSG_LOAD_EEPROM                     _UxGT("Î¦ÏŒÏ�Ï„Ï‰ÏƒÎ·")
#define MSG_RESTORE_FAILSAFE                _UxGT("Î•Ï€Î±Î½Î±Ï†Î¿Ï�Î¬ Î±ÏƒÏ†Î±Î»Î¿Ï�Ï‚ Î±Î½Ï„Î¹Î³Ï�Î¬Ï†Î¿Ï…") //SHORTEN
#define MSG_REFRESH                         _UxGT("Î‘Î½Î±Î½Î­Ï‰ÏƒÎ·")
#define MSG_WATCH                           _UxGT("ÎŸÎ¸ÏŒÎ½Î· Ï€Î»Î·Ï�Î¿Ï†ÏŒÏ�Î·ÏƒÎ·Ï‚")
#define MSG_PREPARE                         _UxGT("Î Ï�Î¿ÎµÏ„Î¿Î¹Î¼Î±ÏƒÎ¯Î±")
#define MSG_TUNE                            _UxGT("Î£Ï…Î½Ï„Î¿Î½Î¹ÏƒÎ¼ÏŒÏ‚")
#define MSG_PAUSE_PRINT                     _UxGT("Î Î±Ï�ÏƒÎ· ÎµÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚")
#define MSG_RESUME_PRINT                    _UxGT("Î£Ï…Î½Î­Ï‡Î¹ÏƒÎ· ÎµÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚")
#define MSG_STOP_PRINT                      _UxGT("Î”Î¹Î±ÎºÎ¿Ï€Î® ÎµÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚")
#define MSG_CARD_MENU                       _UxGT("Î•ÎºÏ„Ï�Ï€Ï‰ÏƒÎ· Î±Ï€ÏŒ SD")
#define MSG_NO_CARD                         _UxGT("Î”ÎµÎ½ Î²Ï�Î­Î¸Î·ÎºÎµ SD")
#define MSG_DWELL                           _UxGT("Î‘Î½Î±ÏƒÏ„Î¿Î»Î® Î»ÎµÎ¹Ï„Î¿Ï…Ï�Î³Î¯Î±Ï‚")
#define MSG_USERWAIT                        _UxGT("Î‘Î½Î±Î¼Î¿Î½Î® Î³Î¹Î± Ï‡Ï�Î®ÏƒÏ„Î·")
#define MSG_PRINT_ABORTED                   _UxGT("Î”Î¹Î±ÎºÏŒÏ€Ï„ÎµÏ„Î±Î¹ Î· ÎµÎºÏ„Ï�Ï€Ï‰ÏƒÎ·") //SHORTEN
#define MSG_NO_MOVE                         _UxGT("ÎšÎ±Î¼Î¯Î± ÎºÎ¯Î½Î·ÏƒÎ·.")
#define MSG_KILLED                          _UxGT("Î¤Î•Î¡ÎœÎ‘Î¤Î™Î£ÎœÎŸÎ£. ")
#define MSG_STOPPED                         _UxGT("Î”Î™Î‘ÎšÎŸÎ Î—. ")
#define MSG_CONTROL_RETRACT                 _UxGT("Î‘Î½Î¬ÏƒÏ…Ï�ÏƒÎ· Î¼Î¼")
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Î•Î½Î±Î»Î»Î±Î³Î® Î±Î½Î¬ÏƒÏ…Ï�ÏƒÎ·Ï‚ Î¼Î¼")  //SHORTEN
#define MSG_CONTROL_RETRACTF                _UxGT("Î‘Î½Î¬ÏƒÏ…Ï�ÏƒÎ· V")
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("ÎœÎµÏ„Î±Ï€Î®Î´Î·ÏƒÎ· Î¼Î¼")
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("S UnRet mm")
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet  V")
#define MSG_AUTORETRACT                     _UxGT("Î‘Ï…Ï„ÏŒÎ¼Î±Ï„Î· Î±Î½Î¬ÏƒÏ…Ï�ÏƒÎ·")
#define MSG_FILAMENTCHANGE                  _UxGT("Î‘Î»Î»Î±Î³Î® Î½Î®Î¼Î±Ï„Î¿Ï‚")
#define MSG_INIT_SDCARD                     _UxGT("Î Ï�Î¿ÎµÏ„Î¿Î¹Î¼Î±ÏƒÎ¯Î± ÎºÎ¬Ï�Ï„Î±Ï‚ SD")  //SHORTEN
#define MSG_CNG_SDCARD                      _UxGT("Î‘Î»Î»Î±Î³Î® ÎºÎ¬Ï�Ï„Î±Ï‚ SD")
#define MSG_ZPROBE_OUT                      _UxGT("Î”Î¹ÎµÏ�ÎµÏ�Î½Î·ÏƒÎ· Z ÎµÎºÏ„ÏŒÏ‚ Î•Ï€.Î•ÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚") //SHORTEN
#define MSG_YX_UNHOMED                      _UxGT("Î•Ï€Î±Î½Î±Ï†Î¿Ï�Î¬ Î§/Î¥ Ï€Ï�Î¹Î½ Î±Ï€ÏŒ Î–") //SHORTEN
#define MSG_XYZ_UNHOMED                     _UxGT("Î•Ï€Î±Î½Î±Ï†Î¿Ï�Î¬ Î§Î¥Î– Ï€Ï�ÏŽÏ„Î±")
#define MSG_ZPROBE_ZOFFSET                  _UxGT("ÎœÎµÏ„Î±Ï„ÏŒÏ€Î¹ÏƒÎ· Î–")
#define MSG_BABYSTEP_X                      _UxGT("ÎœÎ¹ÎºÏ�ÏŒ Î²Î®Î¼Î± Î§")
#define MSG_BABYSTEP_Y                      _UxGT("ÎœÎ¹ÎºÏ�ÏŒ Î²Î®Î¼Î± Î¥")
#define MSG_BABYSTEP_Z                      _UxGT("ÎœÎ¹ÎºÏ�ÏŒ Î²Î®Î¼Î± Î–")
#define MSG_ENDSTOP_ABORT                   _UxGT("Î‘ÎºÏ�Ï�Ï‰ÏƒÎ· endstop ")
#define MSG_HEATING_FAILED_LCD              _UxGT("Î‘Î½ÎµÏ€Î¹Ï„Ï…Ï‡Î®Ï‚ Î¸Î­Ï�Î¼Î±Î½ÏƒÎ·")
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("Î Î›Î•ÎŸÎ�Î‘Î–ÎŸÎ¥Î£Î‘ Î˜Î•Î¡ÎœÎŸÎ¤Î—Î¤Î‘")
#define MSG_THERMAL_RUNAWAY                 _UxGT("Î”Î™Î‘Î¦Î¥Î“Î— Î˜Î•Î¡ÎœÎŸÎšÎ¡Î‘Î£Î™Î‘Î£")
#define MSG_ERR_MAXTEMP                     _UxGT("Î Î•Î¡Î™Î¤Î— Î˜Î•Î¡ÎœÎŸÎšÎ¡Î‘Î£Î™Î‘")
#define MSG_ERR_MINTEMP                     _UxGT("ÎœÎ— Î•Î Î‘Î¡ÎšÎ—Î£ Î˜Î•Î¡ÎœÎŸÎšÎ¡Î‘Î£Î™Î‘Î£") //SHORTEN
#define MSG_ERR_MAXTEMP_BED                 _UxGT("ÎœÎ•Î“Î™Î£Î¤Î— Î˜Î•Î¡ÎœÎŸÎšÎ¡Î‘Î£Î™Î‘Î£ Î•Î . Î•ÎšÎ¤Î¥Î Î©Î£Î—Î£") //SHORTEN
#define MSG_ERR_MINTEMP_BED                 _UxGT("Î•Î›Î‘Î§Î™Î£Î¤Î— Î˜Î•Î¡ÎœÎŸÎšÎ¡Î‘Î£Î™Î‘Î£ Î•Î . Î•ÎšÎ¤Î¥Î Î©Î£Î—Î£") //SHORTEN
#define MSG_HALTED                          _UxGT("H ÎµÎºÏ„Ï�Ï€Ï‰ÏƒÎ· Î´Î¹Î±ÎºÏŒÏ€Î·ÎºÎµ")
#define MSG_HEATING                         _UxGT("Î˜ÎµÏ�Î¼Î±Î¯Î½ÎµÏ„Î±Î¹â€¦")
#define MSG_BED_HEATING                     _UxGT("Î˜Î­Ï�Î¼Î±Î½ÏƒÎ· Î•Î . Î•ÎºÏ„Ï�Ï€Ï‰ÏƒÎ·Ï‚") //SHORTEN
#define MSG_DELTA_CALIBRATE                 _UxGT("Î’Î±Î¸Î¼Î¿Î½ÏŒÎ¼Î·ÏƒÎ· Delta")
#define MSG_DELTA_CALIBRATE_X               _UxGT("Î’Î±Î¸Î¼Î¿Î½ÏŒÎ¼Î·ÏƒÎ· X")
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Î’Î±Î¸Î¼Î¿Î½ÏŒÎ¼Î·ÏƒÎ· Y")
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Î’Î±Î¸Î¼Î¿Î½ÏŒÎ¼Î·ÏƒÎ· Z")
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Î’Î±Î¸Î¼Î¿Î½ÏŒÎ¼Î·ÏƒÎ· ÎºÎ­Î½Ï„Ï�Î¿Ï…")

#endif // LANGUAGE_EL_H
