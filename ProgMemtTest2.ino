#include <avr/pgmspace.h>
#include <FastLED.h>
#define led_out 8
#define total_leds 325
#define frame_pixels 352
#define delayTime 2
int excludes[28] = {1,2,3,4,5,6,7,39,40,41,42,43,44,45,46,47,87,88,89,90,132,133,308,309,310,350,351,352};
CRGBArray<total_leds> leds;
int frame_01 =0;
int frame_02 =0;
int frame_03 =0;
int frame_04 =0;
int frame_05 =0;
int frame_06 =0;
int frame_07 =0;
int frame_08 =0;
int frame_09 =0;
int frame_10 =0;
int frame_11 =0;
int frame_12 =0;
int frame_13 =0;
int frame_14 =0;
int frame_15 =0;
int frame_16 =0;

#include "frames.h"
#include "sequencer.h"
#include "inputs.h"





void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  FastLED.addLeds<WS2813, led_out, BGR>(leds, total_leds);
  setupInputs();
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
  //inputDetector();
  timer();
  
  inputs();
}

