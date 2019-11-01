#ifndef Transition_h
#define Transition_h

//*** LIBRARIES ***
#include <arduino.h>
#include "Step.h"
#include "Inputs.h"



class Transition
{
  public:
  //*** CONSTRUCTOR ***
  Transition(Inputs &var);

  //*** FUNCTIONS ***
  void AddPreviousStep(Step *previousStep);
  virtual void ComputeTransition();

  //protected:
  //*** ATTRIBUTS ***
  Inputs *transitionInputs;
  
  int testVar;
  
  //Step *previousStep;

  //*** OBJECTS ***

  //*** VARIABLES ***


};

class Transition1 : public Transition
{
  public:
  //*** CONSTRUCTOR ***
  Transition1(Inputs &var);

  //*** FUNCTIONS ***
  void ComputeTransition();

  Step *previousStepArray[1];
  Step *nextStepArray[1];


};
#endif
