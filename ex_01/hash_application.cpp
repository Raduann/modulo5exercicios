#include <iostream>
#include "hash.h" 

using namespace std;

int main(){

  Hash clientesHash(10);
  int   imei[5]   = {
     73509, 16489, 35105, 15238, 42685};
  string user[5] = {
    "sasuke.uchiha@sou.inteli.edu.br", "kakashi.hatake@sou.inteli.edu.br", "sakura.haruno@sou.mtofraca.edu.br", "rock.lee@sou.top.edu.br", "danzou.shimura@sou.cuzao.edu.br"}; 

 for (int i = 0; i < 7; i++) {
    Cliente cliente = Cliente(imei[i], user[i]);
    clientesHash.insertItem(cliente);
  }
  clientesHash.print();  
  cout << "------------------------------" <<  endl;
  
  Cliente cliente(16489,"");  
  bool     found = false;
  clientesHash.retrieveItem(cliente, found);
  cout << cliente.getUser() << " -> " << found << endl;
  
  cout << "------------------------------" <<  endl;

  clientesHash.deleteItem(cliente);
  clientesHash.print();
  cout << "Fim" << endl;  
}