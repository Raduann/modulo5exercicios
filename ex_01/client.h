#include <iostream>
using namespace std;

class Cliente{
private :
  int imei;
  std::string user; 
public:  
  Cliente();
  Cliente(int imei, std::string user);
  string getUser() const;
  int getImei() const; 
};