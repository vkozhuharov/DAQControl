#include "DAQControl.h"


DAQControl::DAQControl(){
}

DAQControl::DAQControl(std::string name)
  : NamedObject(name) , ConfigManager("cfg/"+name+".cfg"){
}

DAQControl::~DAQControl(){
}

void DAQControl::Init(){
  
}

void DAQControl::Start(){
}

void DAQControl::Exit(){
}
