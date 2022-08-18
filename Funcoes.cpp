#include <iostream>

using namespace std;

void imprimir( string x="\nola sem argumentos" );

int main(int argc, char const *argv[]){
  imprimir();
  imprimir("\nola com argumento");
}


void imprimir( string x ){
  cout << x;
}