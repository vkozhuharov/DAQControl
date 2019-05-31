#include "DAQVModule.hh"


DAQVModule::DAQVModule() {
}

DAQVModule::DAQVModule(const std::string name)
  : NamedObject(name) , ConfigManager("cfg/"+name+".cfg"){
}
