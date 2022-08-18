#include <iostream>

using namespace std;

// int argc     -> guarda o búmero de flags passadas
// char *argv[] -> guardar as flags em vetores de vetores
// 

int main(int argc, char *argv[]){
  
  for (int i=0; i < argc; i++)
    cout << argc << " -> "<< *(argv+i) << "\n";

  return 0;
}