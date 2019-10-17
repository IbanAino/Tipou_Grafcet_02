//*** LIBRARIES ***
#include <arduino.h>
#include "Transition.h"
#include "Step.h"

//*** CONSTRUCTOR ***
Transition1::Transition1(){
  
}

void Transition1::ComputeTransition(){
  if (this -> previousStep -> activate == true){
    Serial.println("TRUE");
  }else{
    Serial.println("FALSE");
  }
}
