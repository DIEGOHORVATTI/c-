#include <iostream>

#define TAM 10
using namespace std;

int main(){

  srand(time(NULL));

  int vet[TAM][TAM];

  for (int j = 0; j < TAM; j++){
    for (int i = 0; i < TAM; i++)
      vet[j][i] = 10+(rand() % 10);
  }

  for (int j = 0; j < TAM; j++){
    for (int i = 0; i < TAM; i++)
      cout << vet[j][i] << " ";
    cout << "\n";
  }

  return 0;
}
