#ifndef CONFIGMANAGER_H
#define CONFIGMANAGER_H

#include "utlConfigParser.hh"
#include <string>

class ConfigManager {
 public:
  ConfigManager(utl::ConfigParser *parser);
  ConfigManager();
  ConfigManager(std::string name);
 ~ConfigManager();
  
  int GetParOrDefault(std::string,std::string,int);
  double GetParOrDefault(std::string,std::string,double);
  utl::ConfigParser * GetConfigParser(){return fConfigParser;};

 private:
  utl::ConfigParser *fConfigParser;
  std::string fFileName;

};




#endif
