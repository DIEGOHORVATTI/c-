#include <iostream>

using namespace std;

int main(){

  enum armas{ 
    fuzil=100, 
    revolver=8, 
    rifle=12, 
    escopeta=1
  };

  armas armasSel;
  armasSel = rifle;

  cout << armasSel;

  return (0);
}