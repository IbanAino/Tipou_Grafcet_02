#ifndef Transition_h
#define Transition_h

//*** LIBRARIES ***
#include <arduino.h>
#include "Step.h"

class Transition
{
  public:
  //*** CONSTRUCTOR ***
  Transition();

  //*** FUNCTIONS ***
  void AddPreviousStep(Step *previousStep);
  virtual void ComputeTransition();

  protected:
  //*** ATTRIBUTS ***
  Step *previousStep;

  //*** OBJECTS ***

  //*** VARIABLES ***


};

class Transition1 : public Transition
{
  public:
  //*** CONSTRUCTOR ***
  Transition1();

  //*** FUNCTIONS ***
  void ComputeTransition();
};
#endif
