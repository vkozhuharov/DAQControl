#ifndef DAQCONTROL_H
#define DAQCONTROL_H

#include "NamedObject.h"
#include "ConfigManager.h"
#include "DAQVModule.hh"

#include <vector>

class DAQControl : public NamedObject,ConfigManager {
 public:
  DAQControl();
  DAQControl(std::string name);
  ~DAQControl();

  void Init();
  void Start();
  void Exit();

 private:
  std::vector<DAQVModule *> fModules;
  
  
};




#endif
