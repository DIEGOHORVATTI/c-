#include <iostream>
#include <queue>

// primeiro elemento a entrar é o primeiro elemento  a sair

using namespace std;

int main(){

  queue <string> cartas;

  if ( cartas.empty() )
    cout << "Fila vazia" << "\n";
  else
    cout << "Fila com cartas" << "\n";

  cartas.push("Rei de copas");
  cartas.push("Rei de espadas");
  cartas.push("Rei de ouros");
  cartas.push("Rei de paus");

  if ( cartas.size() == 0 )
    cout << "Fila vazia" << "\n";
  else
    cout << "\nFila com cartas\n\n";

  cout << "Tamanho Fila: " << cartas.size() << "\n";
  cout << "Carta do topo: " << cartas.front() << "\n";
  cout << "Carta do fundo: " << cartas.back() << "\n\n";

  cartas.pop();
  cout << "Nova carta do topo: " << cartas.front() << "\n";

  return 0;
}