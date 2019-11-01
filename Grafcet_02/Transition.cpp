//*** LIBRARIES ***
#include <arduino.h>
#include "Transition.h"
#include "Step.h"
#include "Inputs.h"

//*** CONSTRUCTOR ***
Transition::Transition(Inputs &var){
  transitionInputs = &var;
  
}

void Transition::AddPreviousStep(Step *_previousStep){
  //this -> previousStep = _previousStep;
}
