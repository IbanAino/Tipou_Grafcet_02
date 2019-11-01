#ifndef Inputs_h
#define Inputs_h

//*** LIBRARIES ***
#include <arduino.h>

class Inputs
{
  public:
  //*** CONSTRUCTOR ***
  Inputs();

  //*** ATTRIBUTS ***
  bool variable1bool = false;
  bool variable2bool = true;
  int variable3int = 42;

  // Hardware input pins
  const byte button1 = 5; // shake sensor
  const byte button2 = 2; // water sensor
  const byte button3 = 3; // light sensor

};



#endif
