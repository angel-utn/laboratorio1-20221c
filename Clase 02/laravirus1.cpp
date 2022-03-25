/*
Para considerarse de riesgo para Laravirus es necesario tener edad mayor a 80 o estar inmunosuprimido.
*/
#include <iostream>
using namespace std;

int main(){
    int edad;
    char inmunosuprimido;

    cout << "Edad: ";
    cin >> edad;

    cout << "Inmunosuprimido (S/N): ";
    cin >> inmunosuprimido;

    if (edad > 80 || inmunosuprimido == 'S'){
        cout << "Riesgo de Laravirus" << endl;
    }
    else{
        cout << "Todo OK!" << endl;
    }

    return 0;
}
