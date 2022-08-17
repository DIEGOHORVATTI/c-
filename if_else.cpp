#include <iostream>

using namespace std;

int main(void){

  inicio:

  int num;
  cout << "Digite 2 ou 5: ";
  cin >> num;

  if (num == 2 || num == 5){
    cout << " => okay";
  } else{
    cout << "\nTente novamente\n\n";
    goto inicio;
  }

  return(0);
}