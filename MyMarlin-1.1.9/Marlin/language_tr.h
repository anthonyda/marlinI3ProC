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
 * Turkish
 *
 * LCD Menu Messages
 * See also http://marlinfw.org/docs/development/lcd_language.html
 *
 */
#ifndef LANGUAGE_TR_H
#define LANGUAGE_TR_H

#define MAPPER_C2C3_TR
#define DISPLAY_CHARSET_ISO10646_TR
#define CHARSIZE 2

#if DISABLED(DOGLCD)
  #error "Turkish needs a graphical display."
#endif

#define WELCOME_MSG                         MACHINE_NAME _UxGT(" hazÄ±r.")                               // hazÄ±r.
#define MSG_SD_INSERTED                     _UxGT("SD YerleÅŸti.")                                       // SD YerleÅŸti.
#define MSG_SD_REMOVED                      _UxGT("SD Ã‡Ä±karÄ±ldÄ±.")                                      // SD Ã‡Ä±karÄ±ldÄ±.
#define MSG_LCD_ENDSTOPS                    _UxGT("Endstops") // Max length 8 characters                // Endstops
#define MSG_MAIN                            _UxGT("Ana")                                                // Ana
#define MSG_BACK                            _UxGT("Geri")                                               // Geri
#define MSG_AUTOSTART                       _UxGT("OtobaÅŸlat")                                          // OtobaÅŸlat
#define MSG_DISABLE_STEPPERS                _UxGT("MotorlarÄ± Durdur")                                   // MotorlarÄ± Durdur
#define MSG_DEBUG_MENU                      _UxGT("Hata AyÄ±klama")                                      // Hata AyÄ±klama
#define MSG_PROGRESS_BAR_TEST               _UxGT("Durum Ã‡ubuÄŸu Testi")                                 // Durum Ã‡ubuÄŸu Testi
#define MSG_AUTO_HOME                       _UxGT("Eksenleri SÄ±fÄ±rla")                                  // Eksenleri SÄ±fÄ±rla
#define MSG_AUTO_HOME_X                     _UxGT("X SÄ±fÄ±rla")                                          // X SÄ±fÄ±rla
#define MSG_AUTO_HOME_Y                     _UxGT("Y SÄ±fÄ±rla")                                          // Y SÄ±fÄ±rla
#define MSG_AUTO_HOME_Z                     _UxGT("Z SÄ±fÄ±rla")                                          // Z SÄ±fÄ±rla
#define MSG_TMC_Z_CALIBRATION               _UxGT("Ayarla Z")                                           // Ayarla Z
#define MSG_LEVEL_BED_HOMING                _UxGT("XYZ SÄ±fÄ±rlanÄ±yor")                                   // XYZ SÄ±fÄ±rlanÄ±yor
#define MSG_LEVEL_BED_WAITING               _UxGT("BaÅŸlatmak iÃ§in tÄ±kla")                               // BaÅŸlatmak iÃ§in tÄ±kla
#define MSG_LEVEL_BED_NEXT_POINT            _UxGT("SÄ±radaki Nokta")                                     // SÄ±radaki Nokta
#define MSG_LEVEL_BED_DONE                  _UxGT("Seviyeleme Tamam!")                                  // Seviyeleme Tamam!
#define MSG_SET_HOME_OFFSETS                _UxGT("Offset Ayarla")                                      // Offset Ayarla
#define MSG_HOME_OFFSETS_APPLIED            _UxGT("Offset Tamam")                                       // Offset Tamam
#define MSG_SET_ORIGIN                      _UxGT("SÄ±fÄ±r Belirle")                                      // SÄ±fÄ±r Belirle
#define MSG_PREHEAT_1                       _UxGT("Ã–n IsÄ±nma PLA")                                      // Ã–n IsÄ±nma PLA
#define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 _UxGT(" ")                                    //
#define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 _UxGT(" TÃ¼m")                                 //  TÃ¼m
#define MSG_PREHEAT_1_END                   MSG_PREHEAT_1 _UxGT(" NozÃ¼l")                               //  NozÃ¼l
#define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 _UxGT(" Tabla")                               //  Tabla
#define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 _UxGT(" Ayar")                                //  Ayar
#define MSG_PREHEAT_2                       _UxGT("Ã–n IsÄ±nma ABS")                                      // Ã–n IsÄ±nma ABS
#define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 _UxGT(" ")                                    //
#define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 _UxGT(" TÃ¼m")                                 //  TÃ¼m
#define MSG_PREHEAT_2_END                   MSG_PREHEAT_2 _UxGT(" NozÃ¼l")                               //  NozÃ¼l
#define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 _UxGT(" Tabla")                               //  Tabla
#define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 _UxGT(" Ayar")                                //  Ayar
#define MSG_COOLDOWN                        _UxGT("SoÄŸut")                                              // SoÄŸut
#define MSG_SWITCH_PS_ON                    _UxGT("GÃ¼cÃ¼ AÃ§")                                            // GÃ¼cÃ¼ AÃ§
#define MSG_SWITCH_PS_OFF                   _UxGT("GÃ¼cÃ¼ Kapat")                                         // GÃ¼cÃ¼ Kapat
#define MSG_EXTRUDE                         _UxGT("Extrude")                                            // Extrude
#define MSG_RETRACT                         _UxGT("Geri Ã‡ek")                                           // Geri Ã‡ek
#define MSG_MOVE_AXIS                       _UxGT("Eksen YÃ¶net")                                        // Eksenleri YÃ¶net
#define MSG_BED_LEVELING                    _UxGT("Tabla Seviyele")                                     // Tabla Seviyele
#define MSG_LEVEL_BED                       _UxGT("Tabla Seviyele")                                     // Tabla Seviyele
#define MSG_MOVING                          _UxGT("KonumlanÄ±yor...")                                    // KonumlanÄ±yor...
#define MSG_FREE_XY                         _UxGT("Durdur XY")                                          // Durdur XY
#define MSG_MOVE_X                          _UxGT("X")                                                  // X
#define MSG_MOVE_Y                          _UxGT("Y")                                                  // Y
#define MSG_MOVE_Z                          _UxGT("Z")                                                  // Z
#define MSG_MOVE_E                          _UxGT("Ekstruder")                                          // Ekstruder
#define MSG_MOVE_01MM                       _UxGT("0.1mm")                                              // 0.1mm
#define MSG_MOVE_1MM                        _UxGT("1mm")                                                // 1mm
#define MSG_MOVE_10MM                       _UxGT("10mm")                                               // 10mm
#define MSG_SPEED                           _UxGT("HÄ±z")                                                // HÄ±z
#define MSG_BED_Z                           _UxGT("Z Mesafesi")                                         // Z Mesafesi
#define MSG_NOZZLE                          _UxGT("NozÃ¼l")                                              // NozÃ¼l
#define MSG_BED                             _UxGT("Tabla")                                              // Tabla
#define MSG_FAN_SPEED                       _UxGT("Fan HÄ±zÄ±")                                           // Fan HÄ±zÄ±
#define MSG_FLOW                            _UxGT("AkÄ±ÅŸ")                                               // AkÄ±ÅŸ
#define MSG_CONTROL                         _UxGT("Kontrol")                                            // Kontrol
#define MSG_MIN                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Min")                //  Min
#define MSG_MAX                             _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Max")                //  Max
#define MSG_FACTOR                          _UxGT(" ") LCD_STR_THERMOMETER _UxGT(" Ã‡arpan")             //  Ã‡arpan
#define MSG_AUTOTEMP                        _UxGT("Autotemp")                                           //  Autotemp
#define MSG_ON                              _UxGT("On ")                                                // On
#define MSG_OFF                             _UxGT("Off")                                                // Off
#define MSG_PID_P                           _UxGT("PID-P")                                              // PID-P
#define MSG_PID_I                           _UxGT("PID-I")                                              // PID-I
#define MSG_PID_D                           _UxGT("PID-D")                                              // PID-D
#define MSG_PID_C                           _UxGT("PID-C")                                              // PID-C
#define MSG_SELECT                          _UxGT("SeÃ§")                                                // SeÃ§
#define MSG_ACC                             _UxGT("Ä°vme")                                               // Ä°vme
#define MSG_JERK                            _UxGT("Jerk")
#if IS_KINEMATIC
  #define MSG_VA_JERK                       _UxGT("Va-jerk")
  #define MSG_VB_JERK                       _UxGT("Vb-jerk")
  #define MSG_VC_JERK                       _UxGT("Vc-jerk")
#else
  #define MSG_VA_JERK                       _UxGT("Vx-jerk")
  #define MSG_VB_JERK                       _UxGT("Vy-jerk")
  #define MSG_VC_JERK                       _UxGT("Vz-jerk")
#endif
#define MSG_VE_JERK                         _UxGT("Ve-jerk")                                            // Ve-Jerk
#define MSG_VMAX                            _UxGT("Vmax ")                                              // Vmax
#define MSG_VMIN                            _UxGT("Vmin")                                               // Vmin
#define MSG_VTRAV_MIN                       _UxGT("VTrav min")                                          // Vtrav min
#define MSG_AMAX                            _UxGT("Amax ")                                              // Amax
#define MSG_A_RETRACT                       _UxGT("A-retract")                                          // A-retract
#define MSG_A_TRAVEL                        _UxGT("A-travel")                                           // A-travel
#define MSG_STEPS_PER_MM                    _UxGT("Steps/mm")                                           // Steps/mm
#if IS_KINEMATIC
  #define MSG_ASTEPS                        _UxGT("Asteps/mm")
  #define MSG_BSTEPS                        _UxGT("Bsteps/mm")
  #define MSG_CSTEPS                        _UxGT("Csteps/mm")
#else
  #define MSG_ASTEPS                        _UxGT("Xsteps/mm")
  #define MSG_BSTEPS                        _UxGT("Ysteps/mm")
  #define MSG_CSTEPS                        _UxGT("Zsteps/mm")
#endif
#define MSG_ESTEPS                          _UxGT("Esteps/mm")                                          // Esteps/mm
#define MSG_E1STEPS                         _UxGT("E1steps/mm")                                         // E1steps/mm
#define MSG_E2STEPS                         _UxGT("E2steps/mm")                                         // E2steps/mm
#define MSG_E3STEPS                         _UxGT("E3steps/mm")                                         // E3steps/mm
#define MSG_E4STEPS                         _UxGT("E4steps/mm")                                         // E4steps/mm
#define MSG_E5STEPS                         _UxGT("E5steps/mm")                                         // E4steps/mm
#define MSG_TEMPERATURE                     _UxGT("SÄ±caklÄ±k")                                           // SÄ±caklÄ±k
#define MSG_MOTION                          _UxGT("Hareket")                                            // Hareket
#define MSG_FILAMENT                        _UxGT("Filaman")                                            // Filaman
#define MSG_VOLUMETRIC_ENABLED              _UxGT("E in mm3")                                           // E in mm3
#define MSG_FILAMENT_DIAM                   _UxGT("Fil. Ã‡ap")                                           // Fil. Ã‡ap
#define MSG_ADVANCE_K                       _UxGT("K Ä°lerlet")                                          // K Ä°lerlet
#define MSG_CONTRAST                        _UxGT("LCD Kontrast")                                       // LCD Kontrast
#define MSG_STORE_EEPROM                    _UxGT("HafÄ±zaya Al")                                        // HafÄ±zaya Al
#define MSG_LOAD_EEPROM                     _UxGT("HafÄ±zadan YÃ¼kle")                                    // HafÄ±zadan YÃ¼kle
#define MSG_RESTORE_FAILSAFE                _UxGT("Fabrika AyarlarÄ±")                                   // Fabrika AyarlarÄ±
#define MSG_REFRESH                         _UxGT("Yenile")                                             // Yenile
#define MSG_WATCH                           _UxGT("Bilgi EkranÄ±")                                       // Bilgi EkranÄ±
#define MSG_PREPARE                         _UxGT("HazÄ±rlÄ±k")                                           // HazÄ±rlÄ±k
#define MSG_TUNE                            _UxGT("Ayar")                                               // Ayar
#define MSG_PAUSE_PRINT                     _UxGT("Duraklat")                                           // Duraklat
#define MSG_RESUME_PRINT                    _UxGT("SÃ¼rdÃ¼r")                                             // SÃ¼rdÃ¼r
#define MSG_STOP_PRINT                      _UxGT("Durdur")                                             // Durdur
#define MSG_CARD_MENU                       _UxGT("SD den YazdÄ±r")                                      // SD den YazdÄ±r
#define MSG_NO_CARD                         _UxGT("SD Kart Yok")                                        // SD Kart Yok
#define MSG_DWELL                           _UxGT("Uyku...")                                            // Uyku...
#define MSG_USERWAIT                        _UxGT("OperatÃ¶r bekleniyor...")                             // OperatÃ¶r bekleniyor...
#define MSG_PRINT_ABORTED                   _UxGT("BaskÄ± Durduruldu")                                   // BaskÄ± Durduruldu
#define MSG_NO_MOVE                         _UxGT("Ä°ÅŸlem yok.")                                         // Ä°ÅŸlem yok.
#define MSG_KILLED                          _UxGT("Kilitlendi. ")                                       // Kilitlendi.
#define MSG_STOPPED                         _UxGT("Durdu. ")                                            // Durdu.
#define MSG_CONTROL_RETRACT                 _UxGT("Geri Ã‡ek mm")                                        // Geri Ã‡ek mm
#define MSG_CONTROL_RETRACT_SWAP            _UxGT("Swap Re.mm")                                         // Swap Re.mm
#define MSG_CONTROL_RETRACTF                _UxGT("Geri Ã‡ekme  V")                                      // Geri Ã‡ekme V
#define MSG_CONTROL_RETRACT_ZLIFT           _UxGT("Hop mm")                                             // Hop mm
#define MSG_CONTROL_RETRACT_RECOVER         _UxGT("UnRet mm")                                           // UnRet mm
#define MSG_CONTROL_RETRACT_RECOVER_SWAP    _UxGT("S UnRet mm")                                         // S UnRetmm
#define MSG_CONTROL_RETRACT_RECOVERF        _UxGT("UnRet  V")                                           // UnRet V
#define MSG_AUTORETRACT                     _UxGT("AutoRetr.")                                          // AutoRetr.
#define MSG_FILAMENTCHANGE                  _UxGT("Filaman DeÄŸiÅŸtir")                                   // Filaman DeÄŸiÅŸtir
#define MSG_INIT_SDCARD                     _UxGT("Init. SD")                                           // Init. SD
#define MSG_CNG_SDCARD                      _UxGT("SD DeÄŸiÅŸtir")                                        // SD DeÄŸiÅŸtir
#define MSG_ZPROBE_OUT                      _UxGT("Z Prob AÃ§Ä±k. Tabla")                                 // Z Prob AÃ§Ä±k. Tabla
#define MSG_BLTOUCH_SELFTEST                _UxGT("BLTouch Self-Test")                                  // BLTouch Self-Test
#define MSG_BLTOUCH_RESET                   _UxGT("SÄ±fÄ±rla BLTouch")                                    // SÄ±fÄ±rla BLTouch
#define MSG_HOME                            _UxGT("SÄ±fÄ±rla")                                            // SÄ±fÄ±rla
#define MSG_FIRST                           _UxGT("Ã¶nce")                                               // Ã–nce
#define MSG_ZPROBE_ZOFFSET                  _UxGT("Z Offset")                                           // Z Offset
#define MSG_BABYSTEP_X                      _UxGT("MiniadÄ±m X")                                         // MiniadÄ±m X
#define MSG_BABYSTEP_Y                      _UxGT("MiniadÄ±m Y")                                         // MiniadÄ±m Y
#define MSG_BABYSTEP_Z                      _UxGT("MiniadÄ±m Z")                                         // MiniadÄ±m Z
#define MSG_ENDSTOP_ABORT                   _UxGT("Endstop iptal")                                      // Endstop iptal
#define MSG_HEATING_FAILED_LCD              _UxGT("IsÄ±nma baÅŸarÄ±sÄ±z")                                   // IsÄ±nma baÅŸarÄ±sÄ±z
#define MSG_ERR_REDUNDANT_TEMP              _UxGT("Hata: GeÃ§ersiz SÄ±caklÄ±k")                            // Hata: GeÃ§ersiz SÄ±caklÄ±k
#define MSG_THERMAL_RUNAWAY                 _UxGT("TERMAL PROBLEM")                                     // TERMAL PROBLEM
#define MSG_ERR_MAXTEMP                     _UxGT("Hata: MAXSICAKLIK")                                  // Hata: MAXSICAKLIK
#define MSG_ERR_MINTEMP                     _UxGT("Hata: MINSICAKLIK")                                  // Hata: MINSICAKLIK
#define MSG_ERR_MAXTEMP_BED                 _UxGT("Hata: MAXSIC. TABLA")                                // Hata: MAXSIC. TABLA
#define MSG_ERR_MINTEMP_BED                 _UxGT("Hata: MINSIC. TABLA")                                // Hata: MINSIC. TABLA
#define MSG_ERR_Z_HOMING                    MSG_HOME _UxGT(" ") MSG_X MSG_Y _UxGT(" ") MSG_FIRST
#define MSG_HALTED                          _UxGT("YAZICI DURDURULDU")                                  // YAZICI DURDURULDU
#define MSG_PLEASE_RESET                    _UxGT("LÃ¼tfen resetleyin")                                  // LÃ¼tfen resetleyin
#define MSG_SHORT_DAY                       _UxGT("G") // One character only                            // G
#define MSG_SHORT_HOUR                      _UxGT("S") // One character only                            // S
#define MSG_SHORT_MINUTE                    _UxGT("D") // One character only                            // D
#define MSG_HEATING                         _UxGT("IsÄ±nÄ±yor...")                                        // IsÄ±nÄ±yor...
#define MSG_BED_HEATING                     _UxGT("Tabla IsÄ±nÄ±yor...")                                  // Tabla IsÄ±nÄ±yor...
#define MSG_DELTA_CALIBRATE                 _UxGT("Delta Kalibrasyonu")                                 // Delta Kalibrasyonu
#define MSG_DELTA_CALIBRATE_X               _UxGT("Ayarla X")                                           // Ayarla X
#define MSG_DELTA_CALIBRATE_Y               _UxGT("Ayarla Y")                                           // Ayarla Y
#define MSG_DELTA_CALIBRATE_Z               _UxGT("Ayarla Z")                                           // Ayarla Z
#define MSG_DELTA_CALIBRATE_CENTER          _UxGT("Ayarla Merkez")                                      // Ayarla Merkez
#define MSG_DELTA_AUTO_CALIBRATE            _UxGT("Oto Kalibrasyon")                                    // Oto Kalibrasyon
#define MSG_DELTA_HEIGHT_CALIBRATE          _UxGT("Delta YÃ¼k. Ayarla")                                  // Delta YÃ¼k. Ayarla
#define MSG_INFO_MENU                       _UxGT("YazÄ±cÄ± HakkÄ±nda")                                    // YazÄ±cÄ± HakkÄ±nda
#define MSG_INFO_PRINTER_MENU               _UxGT("YazÄ±cÄ± Bilgisi")                                     // YazÄ±cÄ± Bilgisi
#define MSG_INFO_STATS_MENU                 _UxGT("Ä°statistikler")                                      // Ä°statistikler
#define MSG_INFO_BOARD_MENU                 _UxGT("KontrolÃ¶r Bilgisi")                                  // Kontrol Bilgisi
#define MSG_INFO_THERMISTOR_MENU            _UxGT("TermistÃ¶rler")                                       // TermistÃ¶rler
#define MSG_INFO_EXTRUDERS                  _UxGT("Ekstruderler")                                       // Ekstruderler
#define MSG_INFO_BAUDRATE                   _UxGT("Ä°letiÅŸim HÄ±zÄ±")                                      // Ä°letiÅŸim HÄ±zÄ±
#define MSG_INFO_PROTOCOL                   _UxGT("Protokol")                                           // Protokol
#define MSG_CASE_LIGHT                      _UxGT("AydÄ±nlatmayÄ±")                                       // AydÄ±nlatmayÄ± AÃ§

#if LCD_WIDTH >= 20
  #define MSG_INFO_PRINT_COUNT              _UxGT("BaskÄ± SayÄ±sÄ±")                                       // BaskÄ± SayÄ±sÄ±
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Tamamlanan")                                         // Tamamlanan
  #define MSG_INFO_PRINT_TIME               _UxGT("Toplam BaskÄ± SÃ¼resi")                                // Toplam BaskÄ± SÃ¼resi
  #define MSG_INFO_PRINT_LONGEST            _UxGT("En Uzun BaskÄ± SÃ¼resi")                               // En Uzun BaskÄ± SÃ¼resi
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Toplam Filaman")                                     // Toplam Filaman
#else
  #define MSG_INFO_PRINT_COUNT              _UxGT("BaskÄ±")                                              // BaskÄ±
  #define MSG_INFO_COMPLETED_PRINTS         _UxGT("Tamamlanan")                                         // Tamamlanan
  #define MSG_INFO_PRINT_TIME               _UxGT("SÃ¼re")                                               // SÃ¼re
  #define MSG_INFO_PRINT_LONGEST            _UxGT("En Uzun")                                            // En Uzun
  #define MSG_INFO_PRINT_FILAMENT           _UxGT("Filaman")                                            // Filaman
#endif

#define MSG_INFO_MIN_TEMP                   _UxGT("Min SÄ±c.")                                           // Min SÄ±cak.
#define MSG_INFO_MAX_TEMP                   _UxGT("Max SÄ±c.")                                           // Max SÄ±cak.
#define MSG_INFO_PSU                        _UxGT("GÃ¼Ã§ KaynaÄŸÄ±")                                        // GÃ¼Ã§ KaynaÄŸÄ±

#define MSG_DRIVE_STRENGTH                  _UxGT("SÃ¼rÃ¼cÃ¼ GÃ¼cÃ¼")                                        // SÃ¼rÃ¼cÃ¼ GÃ¼cÃ¼
#define MSG_DAC_PERCENT                     _UxGT("SÃ¼rÃ¼cÃ¼ %")                                           // SÃ¼rÃ¼cÃ¼ %
#define MSG_FILAMENT_CHANGE_OPTION_HEADER   _UxGT("SeÃ§enekler:")                                        // SeÃ§enekler:
#define MSG_FILAMENT_CHANGE_OPTION_RESUME   _UxGT("BaskÄ±yÄ± sÃ¼rdÃ¼r")                                     // BaskÄ±yÄ± sÃ¼rdÃ¼r
#define MSG_FILAMENT_CHANGE_NOZZLE          _UxGT("  NozÃ¼l: ")                                          //   NozÃ¼l:

#if LCD_HEIGHT >= 4
  // Up to 3 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("BaÅŸlama bekleniyor")                               // BaÅŸlama bekleniyor
  #define MSG_FILAMENT_CHANGE_INIT_2          _UxGT("filamanÄ±n")                                        // filamanÄ±n
  #define MSG_FILAMENT_CHANGE_INIT_3          _UxGT("deÄŸiÅŸimi")                                         // deÄŸiÅŸimi
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Bekleniyor")                                       // Bekleniyor
  #define MSG_FILAMENT_CHANGE_UNLOAD_2        _UxGT("filamanÄ±n Ã§Ä±kmasÄ±")                                // filamanÄ±n Ã§Ä±kmasÄ±
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("FilamanÄ± yÃ¼kle")                                   // FilamanÄ± yÃ¼kle
  #define MSG_FILAMENT_CHANGE_INSERT_2        _UxGT("ve devam iÃ§in")                                    // ve devam iÃ§in
  #define MSG_FILAMENT_CHANGE_INSERT_3        _UxGT("tuÅŸa bas...")                                      // tuÅŸa bas...
  #define MSG_FILAMENT_CHANGE_HEAT_1          _UxGT("NozÃ¼lÃ¼ IsÄ±tmak iÃ§in")                              // NozÃ¼lÃ¼ IsÄ±tmak iÃ§in
  #define MSG_FILAMENT_CHANGE_HEAT_2          _UxGT("Butona Bas.")                                      // Butona Bas.
  #define MSG_FILAMENT_CHANGE_HEATING_1       _UxGT("NozÃ¼l IsÄ±nÄ±yor")                                   // NozÃ¼l IsÄ±nÄ±yor
  #define MSG_FILAMENT_CHANGE_HEATING_2       _UxGT("LÃ¼tfen Bekleyin...")                               // LÃ¼tfen Bekleyin...
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("Bekleniyor")                                       // Bekleniyor
  #define MSG_FILAMENT_CHANGE_LOAD_2          _UxGT("filamanÄ±n yÃ¼klenmesi")                             // filamanÄ±n yÃ¼klenmesi
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("BaskÄ±nÄ±n sÃ¼rdÃ¼rÃ¼lmesini")                          // BaskÄ±nÄ±n sÃ¼rdÃ¼rÃ¼lmesini
  #define MSG_FILAMENT_CHANGE_RESUME_2        _UxGT("bekle")                                            // bekle
#else // LCD_HEIGHT < 4
  // Up to 2 lines allowed
  #define MSG_FILAMENT_CHANGE_INIT_1          _UxGT("LÃ¼tfen bekleyiniz...")                             // LÃ¼tfen bekleyiniz...
  #define MSG_FILAMENT_CHANGE_UNLOAD_1        _UxGT("Ã‡Ä±kartÄ±lÄ±yor...")                                  // Ã‡Ä±kartÄ±lÄ±yor...
  #define MSG_FILAMENT_CHANGE_INSERT_1        _UxGT("YÃ¼kle ve bas")                                     // YÃ¼kle ve bas
  #define MSG_FILAMENT_CHANGE_LOAD_1          _UxGT("YÃ¼klÃ¼yor...")                                      // YÃ¼klÃ¼yor...
  #define MSG_FILAMENT_CHANGE_RESUME_1        _UxGT("SÃ¼rdÃ¼rÃ¼lÃ¼yor...")                                  // SÃ¼rdÃ¼rÃ¼lÃ¼yor...
#endif // LCD_HEIGHT < 4

#endif // LANGUAGE_TR_H
