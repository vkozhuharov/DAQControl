#ifndef CONFIGMANAGER_H
#define CONFIGMANAGER_H

#include "utlConfigParser.hh"


class ConfigManager {
 public:
  ConfigManager(utl::ConfigParser *parser);
  ~ConfigManager(){;};
  
  int GetParOrDefault(std::string,std::string,int);
  double GetParOrDefault(std::string,std::string,double);
  utl::ConfigParser * GetConfigParser(){return fConfigParser;};

 private:
  utl::ConfigParser *fConfigParser;

};




#endif
