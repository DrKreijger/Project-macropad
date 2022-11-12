#pragma once

#include "quantum.h"
#define ___ KC_NO
#define LAYOUT_h( K00 ) \
{ {K00} }
#define LAYOUT LAYOUT_h
#define BONGO_ENABLE

enum oled_modes {
  OLED_BONGO
};