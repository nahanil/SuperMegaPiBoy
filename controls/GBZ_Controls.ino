// Simple example application that shows how to read four Arduino
// digital pins and map them to the USB Joystick library.
//
// IIRC this is the Arduino sketch used for the SMPB Controls, based on at ATMEGA32U/Pro Micro clone board
//
// NOTE: This sketch file is for use with Arduino Leonardo and
//       Arduino Micro only.
//
// by Matthew Heironimus
// 2015-11-20
//--------------------------------------------------------------------
#include <Joystick.h>
int NUM_BUTTONS = 13;

Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID,JOYSTICK_TYPE_GAMEPAD,
  NUM_BUTTONS, 0,                  // Button Count, Hat Switch Count
  true, true, false,     // X and Y, but no Z Axis
  false, false, false,   // No Rx, Ry, or Rz
  false, false,          // No rudder or throttle
  false, false, false);  // No accelerator, brake, or steering
  
//               udlr,      abxy,                start/sel  l/r .    z
int buttons[] = {6,3,4,5,   A3, A2, A1, A0,      15, 14,    16, 10,  7};

void setup() {
  // Initialize Button Pins
  for (int idx=0; idx < NUM_BUTTONS; idx++) {
    pinMode( buttons[idx], INPUT_PULLUP);
  }

  // Initialize Joystick Library
  Joystick.begin();
}

// Last state of the button
int lastButtonState[] = {0,0,0,0,0,0,0,0,0,0,0,0,0};

void loop() {

  // Read pin values
  for (int index = 0; index < NUM_BUTTONS; index++)
  {
    int currentButtonState = !digitalRead(buttons[index]);
    if (currentButtonState != lastButtonState[index]) {
      Joystick.setButton(index, currentButtonState);
      lastButtonState[index] = currentButtonState;
    }
  }

  delay(50);
}
