#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
  
  srand(time(NULL));
  int tentativas = 0;

  int aleatorio = 10+(rand() % 20);
  int x;

  while (true){
    cout << "Digite um numero: ";
    cin >> x;
      
    if (x < aleatorio){
      cout << "? é maior\n";
    } else if (x > aleatorio){
      cout << "? é menor\n";
    } else if (x == aleatorio){
      cout << "Resposta correta em: " << tentativas << " tentativa";
      break;
    }

    tentativas++;
  }

  return 0;
}
