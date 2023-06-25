////////////////////////////////////////////////////////////////////////////////
// Jiggle-Wiggle                                                 https://bela.me
////////////////////////////////////////////////////////////////////////////////
#include <Mouse.h>                                  // generic mouse hid
#include <Adafruit_NeoPixel.h>                      // ws2812 leds

#define LED_NEO_PIN 16
#undef  LED_RED_PIN
#undef  LED_GRN_PIN
#undef  LED_BLU_PIN

Adafruit_NeoPixel ioLed(1, LED_NEO_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Mouse.begin();
  ioLed.begin();
  ioLed.clear();
  ioLed.show();
  ioLed.setBrightness(16);
}

void loop() {
  delay(5000);
  while(true) {
    jiggle();
    wiggle();
    delay(15000);
  }
}

// move the mouse cursor
void jiggle() {
  Mouse.move(2,0,0);
  ioLed.setPixelColor(0, ioLed.Color(255, 0, 0));
  ioLed.show();
  delay(100);
  Mouse.move(-4,0,0);
  ioLed.setPixelColor(0, ioLed.Color(0, 255, 0));
  ioLed.show();
  delay(100);
  Mouse.move(2,0,0);
  ioLed.setPixelColor(0, ioLed.Color(0, 0, 255));
  ioLed.show();
  delay(100);
  ioLed.setPixelColor(0, ioLed.Color(0, 0, 0));
  ioLed.show();
}

// display brief led animation
void wiggle() {

}
