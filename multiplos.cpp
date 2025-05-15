#include <iostream> 
using namespace std;

int main(){
    // se pide al usuario que ingrese un numero
    int numero;
    cout << "ingrese un numero";
    cin >> numero;
  // usamos for para seguir una secuencia de una multiplicacion hasta el numero 12
    for (int i=1; i<=12; i++){
        cout << numero << " x " << i << "=" << numero * i << endl; 


    
    }


    return 0;
}