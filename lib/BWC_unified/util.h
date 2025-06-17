#pragma once

#include <Arduino.h>

#ifndef D0
#define D0 16
#define D1 5
#define D2 4
#define D3 0
#define D4 2
#define D5 14
#define D6 12
#define D7 13
#define D8 15
#endif

float C2F(float c);
float F2C(float f);

const int D_pin[9] = {D0, D1, D2, D3, D4, D5, D6, D7, D8};
int gpio2dp(int gpio);
int dp2gpio(int dp);