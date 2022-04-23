/*
1) A partir de una lista de números que finaliza cuando se ingresa un número negativo. Calcular la cantidad de números pares ingresados.

Nota: El número que finaliza la lista no debe ser tenido en cuenta, eventualmente, como par.
*/
#include <iostream>
using namespace std;

int main(){
    int n, cpar=0;
    cout << "Ingresar número: ";
    cin >> n;

    while (n >= 0){
        if (n%2 == 0){
            cpar++;
        }

        cout << "Ingresar número: ";
        cin >> n;
    }

    cout << endl << "Cantidad de pares: " << cpar;

    return 0;
}
