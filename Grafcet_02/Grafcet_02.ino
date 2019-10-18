//*** LIBRARIES ***
#include "step.h"
#include "Transition.h"

Step1_Sleep* _Step1_Sleep;
Step2_Awaike* _Step2_Awaike;
Transition1* _Transition1;

void setup() {
  Serial.begin(9600);

  _Step1_Sleep = new Step1_Sleep();
  _Step2_Awaike = new Step2_Awaike();
  _Transition1 = new Transition1();
  
  // For each transition, we have to define one (ore more) previous step and one (or more) next step
  // The number of steps before and after have to be set buy define the arrays size inside each transitions classes definitions.
  _Transition1 -> previousStepArray[0] = _Step1_Sleep;
  _Transition1 -> nextStepArray[0] = _Step2_Awaike;

  // TO BE REMOVED LATER
  // This line should ba put inside the main loop
  _Transition1 -> ComputeTransition();
}

void loop() {
  //Object_Step1_Sleep -> Init();
}
