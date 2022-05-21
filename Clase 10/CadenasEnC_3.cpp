#include <iostream>
using namespace std;
#include <cstring>

int main(){
    char palabra[20];
    char palabra2[20];
    int valor;

    cout << "Primer palabra: ";
    cin >> palabra;
    cout << "Segunda palabra: ";
    cin >> palabra2;

    /**
        Valores devueltos por strcmp
        0   -> Cuando son iguales
        < 0 -> Cuando palabra es mayor a palabra2
        > 0 -> Cuando palabra es menor a palabra2
    */
    valor = strcmp(palabra, palabra2);

    cout << "Valor: " << valor;

    return 0;
}
