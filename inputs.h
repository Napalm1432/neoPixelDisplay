/*
 *0000 no input                                 01 0
  1000 brakes                                   02  128
  0100 indicator                                03  64
  0010 reverse                                  04  32
  0001 mist                                     05  16

  1001 brakes+mist                              06  144
  0101 indicator+mist                           07  80
  0011 reverse+mist                             08  48

  1100 brakes+indicator                         09  192
  1010 brakes+reverse                           10  160

  1101 brakes+indicator+mist                    11  208
  1011 brakes+reverse+mist                      12  176

  1110 brakes+indicator+reverse                 13  224
  1111 brakes+indicator+reverse+mist            14  240

  0110 indicator+reverse                        15  96
  0111 indicator+reverse+mist                   16  112
 */

int inPins [4] = {4,5,6,7};
int pinStates [4] = {0,0,0,0};
int state = 0;

unsigned long previousMillis = 0;
const long interval = 3;
int tick = 0;


void setupInputs()
{
  for(int i = 0; i < 4; i++)
  {
    pinMode(inPins[i], INPUT_PULLUP);
  }  
}
void timer()
{
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is off turn it on and vice-versa:
    if (tick == 0) {
      tick = 1;
    } else {
      tick = 0;
    }
    if(frame_01 < frames_01-1)
    {
      frame_01+=1;
    }else{frame_01 = 0;}
    
    if(frame_02 < frames_02-1)
    {
      frame_02+=1;
    }else{frame_02 = 0;}
    
    if(frame_03 < frames_03-1)
    {
      frame_03+=1;
    }else{frame_03 = 0;}
    
    if(frame_04 < frames_04-1)
    {
      frame_04+=1;
    }else{frame_04 = 0;}
    
    if(frame_05 < frames_05-1)
    {
      frame_05+=1;
    }else{frame_05 = 0;}
    
    if(frame_06 < frames_06-1)
    {
      frame_06+=1;
    }else{frame_06 = 0;}
    
    if(frame_07 < frames_07-1)
    {
      frame_07+=1;
    }else{frame_07 = 0;}
    
    if(frame_08 < frames_08-1)
    {
      frame_08+=1;
    }else{frame_08 = 0;}
    
    if(frame_09 < frames_09-1)
    {
      frame_09+=1;
    }else{frame_09 = 0;}
    
    if(frame_10 < frames_10-1)
    {
      frame_10+=1;
    }else{frame_10 = 0;}
    
    if(frame_11 < frames_11-1)
    {
      frame_11+=1;
    }else{frame_11 = 0;}
    
    if(frame_12 < frames_12-1)
    {
      frame_12+=1;
    }else{frame_12 = 0;}
    
    if(frame_13 < frames_13-1)
    {
      frame_13+=1;
    }else{frame_13 = 0;}
    
    if(frame_14 < frames_14-1)
    {
      frame_14+=1;
    }else{frame_14 = 0;}
    
    if(frame_15 < frames_15-1)
    {
      frame_15+=1;
    }else{frame_15 = 0;}
    
    if(frame_16 < frames_16-1)
    {
      frame_16+=1;
    }else{frame_16 = 0;}
    
  }
}
void inputDetector(int input)
{
  

switch (input) 
{
  case 0:
    showAnimation_01(frame_01);
    break;
  case 128:
    showAnimation_02(frame_02);
    break;
  case 64:
    showAnimation_03(frame_03);
    break;
  case 32:
    showAnimation_04(frame_04);
    break;
  case 16:
    showAnimation_05(frame_05);
    break;
  case 144:
    showAnimation_06(frame_06);
    break;
  case 80:
    showAnimation_07(frame_07);
    break;
  case 48:
    showAnimation_08(frame_08);
    break;
  case 192:
    showAnimation_09(frame_09);
    break;
  case 160:
    showAnimation_10(frame_10);
    break;  
  case 208:
    showAnimation_11(frame_11);
    break;
  case 176:
    showAnimation_12(frame_12);
    break;
  case 224:
    showAnimation_13(frame_13);
    break;
  case 240:
    showAnimation_14(frame_14);
    break;
  case 96:
    showAnimation_15(frame_15);
    break;
  case 112:
    showAnimation_16(frame_16);
    break;
  
  
  }

}

void inputs()
{
  char pinBuffer[] = "0000";
  for(int i = 0;i<4;i++)
  {
    pinStates[i] = digitalRead(inPins[i]);
    if(pinStates[i] == 0)
    {
      pinBuffer[i] = '1';
    }else{
      pinBuffer[i] = '0';
    }
  }
  int noOut = 0;
  for (int ii =0; ii < 4; ii++) {
   noOut = noOut | (pinBuffer[ii] - '0') << (7-ii);
  }
  
  
  inputDetector(noOut);

  
  
}

