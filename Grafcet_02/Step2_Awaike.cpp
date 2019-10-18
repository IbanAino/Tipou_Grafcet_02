//*** LIBRARIES ***
#include <arduino.h>
#include "Step.h"

//*** Static variables declarations ***

//*** CONSTRUCTOR ***
Step2_Awaike::Step2_Awaike(){

}

//*** FUNCTIONS ***
void Step2_Awaike::Init(){
  Serial.println("Step1_Sleep Init()");
}
void Step2_Awaike::Perform(){
  Serial.println("Step1_Sleep Perform()");
}
void Step2_Awaike::Exit(){
  Serial.println("Step1_Sleep Exit()");
}
