#ifndef Step_h
#define Step_h

//*** LIBRARIES ***
#include <arduino.h>

class Step
{
  public:
  //*** CONSTRUCTOR ***
  Step();

  //*** FUNCTIONS ***
  // Here are the three main functions of the step.
  // At the beginning an initialisation function is launched. Then the step perform a loop stored insode the
  // Perform function. When the step stop a last function is executed once.
  virtual void Init();
  virtual void Perform();
  virtual void Exit();

  private:
  //*** ATTRIBUTS ***
  bool activate;

  //*** OBJECTS ***

  //*** VARIABLES ***
  
};
#endif
