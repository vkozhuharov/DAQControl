#ifndef  DAQVMODULE_H
#define  DAQVMODULE_H

#include "NamedObject.h"
#include "ConfigManager.h"



class DAQVModule : public NamedObject,ConfigManager{
public:
  DAQVModule();
  DAQVModule(std::string name);

  ~DAQVModule(){;};

  void Init(){;};
  void Configure(){;};
  void ReadData(){;};

  
private:
  int state;
  
  
};

#endif
