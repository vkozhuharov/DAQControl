#include "ConfigManager.h"
#include "DEBUG.h"


ConfigManager::ConfigManager(utl::ConfigParser *parser){
  fConfigParser = parser;
}
ConfigManager::ConfigManager(){
  fConfigParser = NULL;  
}
ConfigManager::ConfigManager(std::string name){
#ifdef DEBUG
  std::cout << "Initializing config file " << name << std::endl;
#endif
  fFileName = name;
  fConfigParser = new utl::ConfigParser(name);  
}

ConfigManager::~ConfigManager(){
  
#ifdef DEBUG
  if(fConfigParser)
    std::cout << "Deleting config parser " << fFileName << std::endl;
#endif

  if(fConfigParser) delete fConfigParser;
  
}

int ConfigManager::GetParOrDefault(std::string group,std::string name,int val){
  return fConfigParser->HasConfig(group,name)?std::stoi(fConfigParser->GetSingleArg(group,name)):val;
}

double ConfigManager::GetParOrDefault(std::string group,std::string name,double val){
  return fConfigParser->HasConfig(group,name)?std::stof(fConfigParser->GetSingleArg(group,name)):val;
}
