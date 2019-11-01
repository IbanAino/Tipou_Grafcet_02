#ifndef Inputs_h
#define Inputs_h

//*** LIBRARIES ***
#include <arduino.h>

class Inputs
{
  public:
  //*** CONSTRUCTOR ***
  Inputs();

  //*** FUNCTIONS ***
  void ReadInputs();

  //*** ATTRIBUTS ***
  bool variable1bool = false;
  bool variable2bool = true;
  int variable3int = 42;

  // Hardware input pins
  const byte button1 = 2; // shake sensor
  const byte button2 = 3; // water sensor
  const byte button3 = 4; // light sensor

  bool button1State = false;
  bool button2State = false;
  bool button3State = false;

};



#endif
