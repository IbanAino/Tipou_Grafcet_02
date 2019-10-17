//*** LIBRARIES ***
#include "step.h"
#include "Transition.h"

Step1_Sleep* Object_Step1_Sleep;
Transition1* Object_Transition1;


void setup() {
  Serial.begin(9600);
  Object_Step1_Sleep = new Step1_Sleep();
  Object_Transition1 = new Transition1();
  
  Object_Transition1 -> AddPreviousStep(Object_Step1_Sleep);
  Object_Transition1 -> ComputeTransition();
}

void loop() {
  //Object_Step1_Sleep -> Init();
}
