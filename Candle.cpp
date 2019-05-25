/*
 * Candle object source
 * Brendan Ralston, 5/25/19
 */

 #include "Arduino.h"
 #include "Candle.h"

 Candle::Candle(byte pin){
  pinMode(pin, OUTPUT);
  _pin = pin;
  _status = false;
 }

 void Candle::on(){
  _status = true;
  digitalWrite(_pin, _status);
 }

 void Candle::off(){
  _status = false;
  digitalWrite(_pin, _status);
 }

 void Candle::toggle(){
  _status = !_status;
  digitalWrite(_pin, _status);
 }

 bool Candle::isLit(){
  return _status;
 }
