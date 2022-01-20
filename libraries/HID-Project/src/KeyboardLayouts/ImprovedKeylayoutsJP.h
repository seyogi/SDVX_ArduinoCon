//Japanese Keyboard Layout

#pragma once
#include "ImprovedKeylayouts.h"

static const uint16_t _asciimap[] PROGMEM =                 
{                   
    KEY_RESERVED,                           //  NUL         0   0x00
    KEY_RESERVED,                           //  SOH         1   0x01
    KEY_RESERVED,                           //  STX         2   0x02
    KEY_RESERVED,                           //  ETX         3   0x03
    KEY_RESERVED,                           //  EOT         4   0x04
    KEY_RESERVED,                           //  ENQ         5   0x05
    KEY_RESERVED,                           //  ACK         6   0x06
    KEY_RESERVED,                           //  BEL         7   0x07
    KEY_BACKSPACE,                          //  BS          8   0x08
    KEY_TAB,                                //  TAB         9   0x09
    KEY_ENTER,                              //  LF          10  0x0A
    KEY_RESERVED,                           //  VT          11  0x0B
    KEY_RESERVED,                           //  FF          12  0x0C
    KEY_RESERVED,                           //  CR          13  0x0D
    KEY_RESERVED,                           //  SO          14  0x0E
    KEY_RESERVED,                           //  SI          15  0x0F
    KEY_RESERVED,                           //  DEL         16  0x10
    KEY_RESERVED,                           //  DC1         17  0x11
    KEY_RESERVED,                           //  DC2         18  0x12
    KEY_RESERVED,                           //  DC3         19  0x13
    KEY_RESERVED,                           //  DC4         20  0x14
    KEY_RESERVED,                           //  NAK         21  0x15
    KEY_RESERVED,                           //  SYN         22  0x16
    KEY_RESERVED,                           //  ETB         23  0x17
    KEY_RESERVED,                           //  CAN         24  0x18
    KEY_RESERVED,                           //  EM          25  0x19
    KEY_RESERVED,                           //  SUB         26  0x1A
    KEY_RESERVED,                           //  ESC         27  0x1B
    KEY_RESERVED,                           //  FS          28  0x1C
    KEY_RESERVED,                           //  GS          29  0x1D
    KEY_RESERVED,                           //  RS          30  0x1E
    KEY_RESERVED,                           //  US          31  0x1F
    KEY_SPACE,                              //  Space       32  0x20
    KEY_1 | MOD_LEFT_SHIFT,                 //  !           33  0x21
    KEY_2 | MOD_LEFT_SHIFT,                 //  "           34  0x22
    KEY_3 | MOD_LEFT_SHIFT,                 //  #           35  0x23
    KEY_4 | MOD_LEFT_SHIFT,                 //  $           36  0x24
    KEY_5 | MOD_LEFT_SHIFT,                 //  %           37  0x25
    KEY_6 | MOD_LEFT_SHIFT,                 //  &           38  0x26
    KEY_7 | MOD_LEFT_SHIFT,                 //  '           39  0x27
    KEY_8 | MOD_LEFT_SHIFT,                 //  (           40  0x28
    KEY_9 | MOD_LEFT_SHIFT,                 //  )           41  0x29
    KEY_QUOTE | MOD_LEFT_SHIFT,             //  *           42  0x2A
    KEY_SEMICOLON | MOD_LEFT_SHIFT,         //  +           43  0x2B
    KEY_COMMA,                              //  ,           44  0x2C
    KEY_MINUS,                              //  -           45  0x2D
    KEY_PERIOD,                             //  .           46  0x2E
    KEY_SLASH,                              //  /           47  0x2F
    KEY_0,                                  //  0           48  0x30
    KEY_1,                                  //  1           49  0x31
    KEY_2,                                  //  2           50  0x32
    KEY_3,                                  //  3           51  0x33
    KEY_4,                                  //  4           52  0x34
    KEY_5,                                  //  5           53  0x35
    KEY_6,                                  //  6           54  0x36
    KEY_7,                                  //  7           55  0x37
    KEY_8,                                  //  8           56  0x38
    KEY_9,                                  //  9           57  0x39
    KEY_QUOTE,                              //  :           58  0x3A
    KEY_SEMICOLON,                          //  ;           59  0x3B
    KEY_COMMA | MOD_LEFT_SHIFT,             //  <           60  0x3C
    KEY_MINUS | MOD_LEFT_SHIFT,             //  =           61  0x3D
    KEY_PERIOD | MOD_LEFT_SHIFT,            //  >           62  0x3E
    KEY_SLASH | MOD_LEFT_SHIFT,             //  ?           63  0x3F
    KEY_LEFT_BRACE,                         //  @           64  0x40
    KEY_A | MOD_LEFT_SHIFT,                 //  A           65  0x41
    KEY_B | MOD_LEFT_SHIFT,                 //  B           66  0x42
    KEY_C | MOD_LEFT_SHIFT,                 //  C           67  0x43
    KEY_D | MOD_LEFT_SHIFT,                 //  D           68  0x44
    KEY_E | MOD_LEFT_SHIFT,                 //  E           69  0x45
    KEY_F | MOD_LEFT_SHIFT,                 //  F           70  0x46
    KEY_G | MOD_LEFT_SHIFT,                 //  G           71  0x47
    KEY_H | MOD_LEFT_SHIFT,                 //  H           72  0x48
    KEY_I | MOD_LEFT_SHIFT,                 //  I           73  0x49
    KEY_J | MOD_LEFT_SHIFT,                 //  J           74  0x4A
    KEY_K | MOD_LEFT_SHIFT,                 //  K           75  0x4B
    KEY_L | MOD_LEFT_SHIFT,                 //  L           76  0x4C
    KEY_M | MOD_LEFT_SHIFT,                 //  M           77  0x4D
    KEY_N | MOD_LEFT_SHIFT,                 //  N           78  0x4E
    KEY_O | MOD_LEFT_SHIFT,                 //  O           79  0x4F
    KEY_P | MOD_LEFT_SHIFT,                 //  P           80  0x50
    KEY_Q | MOD_LEFT_SHIFT,                 //  Q           81  0x51
    KEY_R | MOD_LEFT_SHIFT,                 //  R           82  0x52
    KEY_S | MOD_LEFT_SHIFT,                 //  S           83  0x53
    KEY_T | MOD_LEFT_SHIFT,                 //  T           84  0x54
    KEY_U | MOD_LEFT_SHIFT,                 //  U           85  0x55
    KEY_V | MOD_LEFT_SHIFT,                 //  V           86  0x56
    KEY_W | MOD_LEFT_SHIFT,                 //  W           87  0x57
    KEY_X | MOD_LEFT_SHIFT,                 //  X           88  0x58
    KEY_Y | MOD_LEFT_SHIFT,                 //  Y           89  0x59
    KEY_Z | MOD_LEFT_SHIFT,                 //  Z           90  0x5A
    KEY_RIGHT_BRACE,                        //  [           91  0x5B
    KEY_INTERNATIONAL3,                     //  ¥          92  0x5C
    KEY_NON_US_NUM,                         //  ]           93  0x5D
    KEY_EQUAL,                              //  ^           94  0x5E
    KEY_INTERNATIONAL1 | MOD_LEFT_SHIFT,    //  _           95  0x5F
    KEY_LEFT_BRACE | MOD_LEFT_SHIFT,        //  `           96  0x60
    KEY_A,                                  //  a           97  0x61
    KEY_B,                                  //  b           98  0x62
    KEY_C,                                  //  c           99  0x63
    KEY_D,                                  //  d           100 0x64
    KEY_E,                                  //  e           101 0x65
    KEY_F,                                  //  f           102 0x66
    KEY_G,                                  //  g           103 0x67
    KEY_H,                                  //  h           104 0x68
    KEY_I,                                  //  i           105 0x69
    KEY_J,                                  //  j           106 0x6A
    KEY_K,                                  //  k           107 0x6B
    KEY_L,                                  //  l           108 0x6C
    KEY_M,                                  //  m           109 0x6D
    KEY_N,                                  //  n           110 0x6E
    KEY_O,                                  //  o           111 0x6F
    KEY_P,                                  //  p           112 0x70
    KEY_Q,                                  //  q           113 0x71
    KEY_R,                                  //  r           114 0x72
    KEY_S,                                  //  s           115 0x73
    KEY_T,                                  //  t           116 0x74
    KEY_U,                                  //  u           117 0x75
    KEY_V,                                  //  v           118 0x76
    KEY_W,                                  //  w           119 0x77
    KEY_X,                                  //  x           120 0x78
    KEY_Y,                                  //  y           121 0x79
    KEY_Z,                                  //  z           122 0x7A
    KEY_RIGHT_BRACE | MOD_LEFT_SHIFT,       //  {           123 0x7B
    KEY_INTERNATIONAL3 | MOD_LEFT_SHIFT,    //  |           124 0x7C
    KEY_NON_US_NUM | MOD_LEFT_SHIFT,        //  }           125 0x7D
    KEY_EQUAL | MOD_LEFT_SHIFT,             //  ~           126 0x7E
    KEY_RESERVED,                           //  DEL         127 0x7F
};                  