#include <iostream>

using namespace std;

int pow(int, int);

int main(){

  int base, expoente;
  cout << "Numero: "; cin >> base;
  cout << "Expoente: "; cin >> expoente;

  cout << "\n" << base << "^" << expoente << " = " << pow(base, expoente);

  return(0);
}

int pow(int base, int expoente){
  if (expoente != 0) return (base*pow(base, expoente-1));
  else return 1;
}