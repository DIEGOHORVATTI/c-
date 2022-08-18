#include <iostream>
#include <list>
#include <stdlib.h>
#include <time.h>
// primeiro elemento a entrar é o primeiro elemento  a sair

using namespace std;

int main(){

  srand(time(NULL));

  list <int> cartas, teste;
  list <int>::iterator it;

  int tam = 10;

  teste.push_back(45);
  teste.push_back(28);

  for (int i=0; i < tam; i++){
    cartas.push_back( rand() % 10 );
    // cartas.push_front(i);
  }

  if ( cartas.empty() )
    cout << "Lista vazia" << "\n";
  else
    it = cartas.begin();
    advance(it, 0);
    cartas.insert(it, -1);
    cartas.erase(--it);

    cartas.merge(teste);
    cartas.sort();
    cartas.reverse();


    tam = cartas.size();
    // cartas.clear();
    cout << "Lista com cartas: " << tam << "\n";

    if ( cartas.empty() )
      cout << "Lista vazia: " << cartas.size();
    else
      for (int i=0; i < tam; i++){
        cout << cartas.front() << "\n";
        cartas.pop_front();
      }

      cout << "Lista com cartas: " << cartas.size() << "\n";

    return 0;
}