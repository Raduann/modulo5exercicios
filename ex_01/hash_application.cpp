#include <iostream>
#include "hash.h" 

using namespace std;

int main(){

  Hash clientesHash(10);
  int   imei[5]   = {
     73509, 16489, 35105, 15238, 42685};
  string user[5] = {
    "sasuke.uchiha@sou.inteli.edu.br", "kakashi.hatake@sou.inteli.edu.br", "sakura.haruno@sou.mtofraca.edu.br", "rock.lee@sou.top.edu.br", "danzou.shimura@sou.cuzao.edu.br"}; 

 for (int i = 0; i < 5; i++) {
    Cliente cliente = cliente(ras[i], nomes[i]);
    clienteHash.insertItem(cliente);
  }
  clienteHash.print();  
  cout << "------------------------------" <<  endl;
  
  Cliente cliente(16489,"");  
  bool     found = false;
  clienteHash.retrieveItem(cliente, found);
  cout << cliente.getNome() << " -> " << found << endl;
  
  cout << "------------------------------" <<  endl;

  clienteHash.deleteItem(cliente);
  clienteHash.print();
  cout << "Fim" << endl;  
}