#ifndef NAMEDOBJECT_H
#define NAMEDOBJECT_H


#include <string>

class NamedObject {
public:
  NamedObject(std::string name){fName = name;};
  NamedObject(const char *name){fName = name;};
  ~NamedObject();
  
  std::string& GetName(){return fName;};
  void SetName(std::string name){fName = name;};
  void SetName(const char *name){fName = name;};


private:
  std::string fName;
}
 



#endif
