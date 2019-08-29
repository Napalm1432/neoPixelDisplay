int position_blinker = 44;
int stepsize_blinker = 4;
void showAnimation_01(int thisFrame)
{
  int excludedCounter;
    excludedCounter = -2;
    
    for(int i = 0; i < frame_pixels; i++)
      {
        for(int e = 0; e < 28; e++)
         {
            if(i == excludes[e])
            {
                  //skip pixel
                  excludedCounter += 1;
            }else
            {
              uint64_t thisLed;
              thisLed = pgm_read_dword(&(animation_matrix_01[thisFrame][i]));
              leds[i-excludedCounter] = thisLed;
            }
         }
      }
      
      FastLED.show();
      
}


void showAnimation_02(int thisFrame)
{
  int excludedCounter;
  //for(int j = 0; j < frames_02; j++)
  //{
    excludedCounter = -2;
    for(int i = 0; i < frame_pixels; i++)
      {
        for(int e = 0; e < 28; e++)
         {
            if(i == excludes[e])
            {
                  //skip pixel
                  excludedCounter += 1;
            }else
            {
              uint64_t thisLed;
              thisLed = pgm_read_dword(&(animation_matrix_02[thisFrame][i]));
              leds[i-excludedCounter] = thisLed;
            }
         }
      }
      FastLED.show();
      
  //}
}

void showAnimation_03(int thisFrame)
{
  
  int excludedCounter;
  
    excludedCounter = -2;
    for(int i = 0; i < frame_pixels; i++)
      {
        int tempI = i+(position_blinker-23);
        
        for(int e = 0; e < 28; e++)
         {
            if(i == excludes[e])
            {
                  //skip pixel
                  excludedCounter += 1;
            }else
            {
              
              uint64_t thisLed;
              thisLed = pgm_read_dword(&(animation_matrix_03[thisFrame][tempI]));
              leds[i-excludedCounter] = thisLed;

            }
         }
      }
      FastLED.show();
      
  
  if(position_blinker > -22)
  {
    position_blinker-=stepsize_blinker;
  }else{
    position_blinker = 22;
  }
}
void showAnimation_04(int thisFrame)
{
  int excludedCounter;
  
    excludedCounter = -2;
    for(int i = 0; i < frame_pixels; i++)
      {
        for(int e = 0; e < 28; e++)
         {
            if(i == excludes[e])
            {
                  //skip pixel
                  excludedCounter += 1;
            }else
            {
              uint64_t thisLed;
              thisLed = pgm_read_dword(&(animation_matrix_04[thisFrame][i]));
              leds[i-excludedCounter] = thisLed;
            }
         }
      }
      FastLED.show();
      
  
}
void showAnimation_05(int thisFrame)
{
  int excludedCounter;
 
    excludedCounter = -2;
    for(int i = 0; i < frame_pixels; i++)
      {
        for(int e = 0; e < 28; e++)
         {
            if(i == excludes[e])
            {
                  //skip pixel
                  excludedCounter += 1;
            }else
            {
              uint64_t thisLed;
              thisLed = pgm_read_dword(&(animation_matrix_05[thisFrame][i]));
              leds[i-excludedCounter] = thisLed;
            }
         }
      }
      FastLED.show();
      
  
}
void showAnimation_06(int thisFrame)
{
  int excludedCounter;
  
    excludedCounter = -2;
    for(int i = 0; i < frame_pixels; i++)
      {
        for(int e = 0; e < 28; e++)
         {
            if(i == excludes[e])
            {
                  //skip pixel
                  excludedCounter += 1;
            }else
            {
              uint64_t thisLed;
              thisLed = pgm_read_dword(&(animation_matrix_06[thisFrame][i]));
              leds[i-excludedCounter] = thisLed;
            }
         }
      }
      FastLED.show();
      
  
}
void showAnimation_07(int thisFrame)
{
  int excludedCounter;
  
    excludedCounter = -2;
    for(int i = 0; i < frame_pixels; i++)
      {
        int tempI = i+(position_blinker-23);
        for(int e = 0; e < 28; e++)
         {
            if(i == excludes[e])
            {
                  //skip pixel
                  excludedCounter += 1;
            }else
            {
              uint64_t thisLed;
              thisLed = pgm_read_dword(&(animation_matrix_07[thisFrame][tempI]));
              leds[i-excludedCounter] = thisLed;
            }
         }
      }
      FastLED.show();
      
  if(position_blinker > 0 && position_blinker < 45)
  {
    position_blinker-=stepsize_blinker;
  }else{
    position_blinker = 44;
  }
}
void showAnimation_08(int thisFrame)
{
  int excludedCounter;
  
    excludedCounter = -2;
    for(int i = 0; i < frame_pixels; i++)
      {
        for(int e = 0; e < 28; e++)
         {
            if(i == excludes[e])
            {
                  //skip pixel
                  excludedCounter += 1;
            }else
            {
              uint64_t thisLed;
              thisLed = pgm_read_dword(&(animation_matrix_08[thisFrame][i]));
              leds[i-excludedCounter] = thisLed;
            }
         }
      }
      FastLED.show();
      
  
}
void showAnimation_09(int thisFrame)
{
  int excludedCounter;
  
    excludedCounter = -2;
    for(int i = 0; i < frame_pixels; i++)
      {
        int tempI = i+(position_blinker-23);
        for(int e = 0; e < 28; e++)
         {
            if(i == excludes[e])
            {
                  //skip pixel
                  excludedCounter += 1;
            }else
            {
              uint64_t thisLed;
              thisLed = pgm_read_dword(&(animation_matrix_09[thisFrame][tempI]));
              leds[i-excludedCounter] = thisLed;
            }
         }
      }
      FastLED.show();
      
  if(position_blinker > 0 && position_blinker < 45)
  {
    position_blinker-=stepsize_blinker;
  }else{
    position_blinker = 44;
  }
}
void showAnimation_10(int thisFrame)
{
  int excludedCounter;
  
    excludedCounter = -2;
    for(int i = 0; i < frame_pixels; i++)
      {
        for(int e = 0; e < 28; e++)
         {
            if(i == excludes[e])
            {
                  //skip pixel
                  excludedCounter += 1;
            }else
            {
              uint64_t thisLed;
              thisLed = pgm_read_dword(&(animation_matrix_10[thisFrame][i]));
              leds[i-excludedCounter] = thisLed;
            }
         }
      }
      FastLED.show();
      
  
}
void showAnimation_11(int thisFrame)
{
  int excludedCounter;
 
    excludedCounter = -2;
    for(int i = 0; i < frame_pixels; i++)
      {
        int tempI = i+(position_blinker-23);
        for(int e = 0; e < 28; e++)
         {
            if(i == excludes[e])
            {
                  //skip pixel
                  excludedCounter += 1;
            }else
            {
              uint64_t thisLed;
              thisLed = pgm_read_dword(&(animation_matrix_11[thisFrame][tempI]));
              leds[i-excludedCounter] = thisLed;
            }
         }
      }
      FastLED.show();
      
  if(position_blinker > 0 && position_blinker < 45)
  {
    position_blinker-=stepsize_blinker;
  }else{
    position_blinker = 44;
  }
}
void showAnimation_12(int thisFrame)
{
  int excludedCounter;
  
 
    excludedCounter = -2;
    for(int i = 0; i < frame_pixels; i++)
      {
        for(int e = 0; e < 28; e++)
         {
            if(i == excludes[e])
            {
                  //skip pixel
                  excludedCounter += 1;
            }else
            {
              uint64_t thisLed;
              thisLed = pgm_read_dword(&(animation_matrix_12[thisFrame][i]));
              leds[i-excludedCounter] = thisLed;
            }
         }
      }
      FastLED.show();
  
}
void showAnimation_13(int thisFrame)
{
  int excludedCounter;
  
    excludedCounter = -2;
    for(int i = 0; i < frame_pixels; i++)
      {
        int tempI = i+(position_blinker-23);
        for(int e = 0; e < 28; e++)
         {
            if(i == excludes[e])
            {
                  //skip pixel
                  excludedCounter += 1;
            }else
            {
              uint64_t thisLed;
              thisLed = pgm_read_dword(&(animation_matrix_13[thisFrame][tempI]));
              leds[i-excludedCounter] = thisLed;
            }
         }
      }
      FastLED.show();
      
  if(position_blinker > 0 && position_blinker < 45)
  {
    position_blinker-=stepsize_blinker;
  }else{
    position_blinker = 44;
  }
}
void showAnimation_14(int thisFrame)
{
  int excludedCounter;
  
    excludedCounter = -2;
    for(int i = 0; i < frame_pixels; i++)
      {
        int tempI = i+(position_blinker-23);
        for(int e = 0; e < 28; e++)
         {
            if(i == excludes[e])
            {
                  //skip pixel
                  excludedCounter += 1;
            }else
            {
              uint64_t thisLed;
              thisLed = pgm_read_dword(&(animation_matrix_14[thisFrame][tempI]));
              leds[i-excludedCounter] = thisLed;
            }
         }
      }
      FastLED.show();
      
  if(position_blinker > 0 && position_blinker < 45)
  {
    position_blinker-=stepsize_blinker;
  }else{
    position_blinker = 44;
  }
}
void showAnimation_15(int thisFrame)
{
  int excludedCounter;
  
    excludedCounter = -2;
    for(int i = 0; i < frame_pixels; i++)
      {
        int tempI = i+(position_blinker-23);
        for(int e = 0; e < 28; e++)
         {
            if(i == excludes[e])
            {
                  //skip pixel
                  excludedCounter += 1;
            }else
            {
              uint64_t thisLed;
              thisLed = pgm_read_dword(&(animation_matrix_15[thisFrame][tempI]));
              leds[i-excludedCounter] = thisLed;
            }
         }
      }
      FastLED.show();
      
  if(position_blinker > 0)
  {
    position_blinker-=stepsize_blinker;
  }else{
    position_blinker = 44;
  }
}
void showAnimation_16(int thisFrame)
{
  int excludedCounter;
  
    excludedCounter = -2;
    for(int i = 0; i < frame_pixels+position_blinker; i++)
      {
        int tempI = i+(position_blinker-23);
        for(int e = 0; e < 28; e++)
         {
            if(i == excludes[e])
            {
                  //skip pixel
                  excludedCounter += 1;
            }else
            {
              uint64_t thisLed;
              thisLed = pgm_read_dword(&(animation_matrix_16[thisFrame][tempI]));
              leds[i-excludedCounter] = thisLed;
              if(i > frame_pixels-position_blinker)
              {
                leds[i-excludedCounter] = 0x000000;
              }
            }
         }
      }
      FastLED.show();
      
  if(position_blinker > 0 && position_blinker < 45)
  {
    position_blinker-=stepsize_blinker;
  }else{
    position_blinker = 44;
  }
}
