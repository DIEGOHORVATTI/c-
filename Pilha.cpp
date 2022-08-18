#include <iostream>
#include <stack>

// ultimo elemento que entra é o primeiro elemento  a sair

using namespace std;

int main(){

  stack <string> cartas;

  if ( cartas.empty() )
    cout << "Pilha vazia" << "\n";
  elses
    cout << "Pilha com cartas" << "\n";

  cartas.push("Rei de copas");
  cartas.push("Rei de espadas");
  cartas.push("Rei de ouros");
  cartas.push("Rei de paus");

  if ( cartas.size() == 0 )
    cout << "Pilha vazia" << "\n";
  else
    cout << "\nPilha com cartas\n\n";

  cout << "Tamanho pilha: " << cartas.size() << "\n";
  cout << "Carta do topo: " << cartas.top() << "\n\n";
  cartas.pop();

  cout << "Nova Carta do topo: " << cartas.top() << "\n";

  return 0;
}