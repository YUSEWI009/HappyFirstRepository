#include<FastLED.h>

#define DATA_PIN 6
#define LED_NUM 30

CRGB leds[LED_NUM];

int i = 0;

void setup() 
{
  // put your setup code here, to run once:
  FastLED.addLeds<WS2812,DATA_PIN, GRB>(leds, LED_NUM);
}

void loop() 
{
  i++;
  leds[i].r = 255;
  leds[i].g = 0;
  leds[i].b = 0;

  delay(50);
  
  leds[i-1].r = 0;
  leds[i-1].g = 0;
  leds[i-1].b = 0;

  delay(50);

  if(i > LED_NUM)
  {
    i = 0;
  }
 FastLED.show();
}
