//*** LIBRARIES ***
#include <arduino.h>
#include "Step.h"

//*** Static variables declarations ***

//*** CONSTRUCTOR ***
Step1_Sleep::Step1_Sleep(){

}

//*** FUNCTIONS ***
void Step1_Sleep::Init(){
  Serial.println("Step1_Sleep Init()");
}
void Step1_Sleep::Perform(){
  Serial.println("Step1_Sleep Perform()");
}
void Step1_Sleep::Exit(){
  Serial.println("Step1_Sleep Exit()");
}
