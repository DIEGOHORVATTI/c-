#include <iostream>
using namespace std;

int main(void){
  
  // cout << | escrever no terminal
  // cin >>  | ler do teclado

  int vidas = 7;           // inteiro
  char letra = 'A';        // caracter
  double decimal_1 = 2.2984894984894;  // double, numero flutuante com precisão
  float decimal_2 = 2.59849486494988;  // float, numero flutuante com aproximação->
  bool vivo = true;        // boleano
  string nome = "Kapa";    // string
  
  cout << decimal_1 << "\n" << decimal_2;
  cout << vivo << "\n";
  cout << letra << "\n";
  cout << nome << "\n";
  
  cout << "Digite seu nome: ";
  cin >> nome;
  cout << nome;
}