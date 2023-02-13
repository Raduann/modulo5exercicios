#include "cliente.h"

Cliente::Cliente(){
  this->imei = -1;
  this->user = "";
};

Cliente::Cliente(int imei, std::string user){
  this->imei = imei;
  this->user = user;
}

string Cliente::getUser() const {
  return user;
}

int Cliente::getImei() const{
  return imei;
}