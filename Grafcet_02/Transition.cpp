//*** LIBRARIES ***
#include <arduino.h>
#include "Transition.h"
#include "Step.h"

//*** CONSTRUCTOR ***
Transition::Transition(){
  
}

void Transition::AddPreviousStep(Step *_previousStep){
  this -> previousStep = _previousStep;
}
