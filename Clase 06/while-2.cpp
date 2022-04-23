/**
2) A partir de una lista de números que finaliza cuando se ingresa un número cero. Calcular e informar el máximo de los negativos y el mínimo de los positivos.
*/

#include <iostream>
using namespace std;

int main(){
    int n, posmaxneg, maxneg, minpos=-1, cpos=0, cneg=0, cont=0;
    bool huboPositivo = false;

    cout << "Número: ";
    cin >> n;

    while (n != 0){
        cont++;

        if (n < 0){
            cneg++;
            if (cneg == 1 || n > maxneg){
                maxneg = n;
                posmaxneg = cont;
            }
        }
        else{ // Puedo asumir que es positivo porque el while corta con cero.
            huboPositivo = true;
            if (minpos == -1 || n < minpos){
                minpos = n;
            }
        }

        cout << "Número: ";
        cin >> n;
    }

    cout << endl;

    if (cneg == 0){
        cout << "No se ingresaron negativos." << endl;
    }
    else{
        cout << endl << "Máximo de los negativos: " << maxneg << endl;
        cout << "En la posición: " << posmaxneg << endl;
    }

    if (huboPositivo == false){
        cout << "No se ingresaron positivos.";
    }
    else{
        cout << endl << "Mínimo de los positivos: " << minpos << endl;
    }


    return 0;
}
