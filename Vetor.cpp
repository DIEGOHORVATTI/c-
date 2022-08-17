#include <iostream>
#include <stdlib.h>
#include <time.h>

#define TAM 20
using namespace std;

int main(){

  srand(time(NULL));
  int vet[TAM];

  for (int i=0; i < (sizeof(vet)/4); i++)
    vet[i] = rand() % 10;

  for (int i=0; i < (sizeof(vet)/4); i++)
    cout << "\t" << i << "\t->\t" << vet[i] << "\n";
  return 0;
}
