/*
1) A partir de una lista de números que finaliza cuando se ingresa un número negativo. Calcular la cantidad de números pares ingresados.

Nota: El número que finaliza la lista debe ser tenido en cuenta, eventualmente, como par.
*/
#include <iostream>
using namespace std;

int main(){
    int n, cpar=0;

    do{
        cout << "Número: ";
        cin >> n;

        if (n%2 == 0){
            cpar++;
        }

    }while(n >= 0);


    cout << endl << "Cantidad de pares: " << cpar;

    return 0;
}
