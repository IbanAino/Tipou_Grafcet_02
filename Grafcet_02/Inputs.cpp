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
