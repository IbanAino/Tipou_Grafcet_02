//*** LIBRARIES ***
#include <arduino.h>
#include "Inputs.h"

//*** CONSTRUCTOR ***
Inputs::Inputs(){
  // Init hardware Input and Outputs
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
}

void Inputs::ReadInputs(){
  button1State = digitalRead(button1) == LOW ? true : false;
  button2State = digitalRead(button2) == LOW ? true : false;
  button3State = digitalRead(button3) == LOW ? true : false;
}
