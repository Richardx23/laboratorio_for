#include <iostream>
using namespace std;

int main(){
    int filas, columnas;

    cout <<"ingrese el numero de filas " << endl;
    cin >> filas;
    cout <<"ingrese el numero de columnas " << endl;
    cin >> columnas;



for (int i=1 ; i <= filas; i++){

    for (int j=1; j<= columnas; j++){

        cout <<i*j<<"\t";
    }


}
return 0;
}
    

    