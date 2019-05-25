/*
 * Puzzle object source
 * Brendan Ralston, 5/25/19
 */

 #include "Arduino.h"
 #include "Puzzle.h"

 Puzzle::Puzzle(byte inputPin){
  pinMode(inputPin, INPUT);
  _pin = inputPin;
  _solved = false;
 }

 Puzzle::Puzzle(){}

 bool Puzzle::isSolved(){
  return _solved;
 }

 void Puzzle::isSolved(bool solved){
  _solved = solved;
 }

 byte Puzzle::getPin(){
  return _pin;
 }
