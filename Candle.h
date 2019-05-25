/*
 * Candle object header
 * Brendan Ralston, 5/25/19
 */

 #ifndef Candle_h
 #define Candle_h

 #include "Arduino.h"

 class Candle
 {
  public:
    Candle(byte pin);
    Candle();
    void on();
    void off();
    void toggle();
    bool isLit();
  private:
    byte _pin;
    bool _state;
 };

 #endif
