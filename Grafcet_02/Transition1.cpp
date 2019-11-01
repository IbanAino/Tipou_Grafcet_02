//*** LIBRARIES ***
#include <arduino.h>
#include "Transition.h"
#include "Step.h"
#include "Inputs.h"

//*** CONSTRUCTOR ***
Transition1::Transition1(Inputs &var) : Transition(var){
  //int var2 = var.variable3int;
  
}

void Transition1::ComputeTransition(){
  if (this -> previousStepArray[0] -> activate == true){
    Serial.println("TRUE");
  }else{
    Serial.println("FALSE");
  }
  
  Serial.println(testVar);
  testVar = transitionInputs -> variable3int;
  
}
