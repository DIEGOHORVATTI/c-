#include <iostream>

using namespace std;

int main(){
  
  int x;
  cout << "Digite um numero: ";
  cin >> x;
  switch (x){
  case 20:
    std::cout << "vinte" << std::endl;
    break;
  case 30:
    std::cout << "trinta" << std::endl;
    break;
  default:
    std::cout << 0 << std::endl;
    break;
  }

  return 0;
}