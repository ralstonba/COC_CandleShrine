/*
 * Candle object source
 * Brendan Ralston, 5/25/19
 */

 #include "Arduino.h"
 #include "Candle.h"

 Candle::Candle(byte pin){
  pinMode(pin, OUTPUT);
  _pin = pin;
  _state = true;
 }

 Candle::Candle(){}

 void Candle::on(){
  _state = false;
  digitalWrite(_pin, _state);
 }

 void Candle::off(){
  _state = true;
  digitalWrite(_pin, _state);
 }

 void Candle::toggle(){
  _state = !_state;
  digitalWrite(_pin, _state);
 }

 bool Candle::isLit(){
  return !_state;
 }
