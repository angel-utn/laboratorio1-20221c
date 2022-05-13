/**
Cargar las notas del primer parcial de los 78 estudiantes de un curso. Luego de cargar todas las notas:
- Listas cuántos estudiantes obtuvieron una nota mayor al promedio.
- Pedir un número y mostrar por pantalla la nota registrada. Por ejemplo, se ingresa 10 para mostrar el décimo examen.
- Obtener la mejor calificación y cuántos estudiantes lograron dicha calificación.

*/

#include <iostream>
using namespace std;

int main(){
    const int CANT = 8;
    int i;
    float notas[CANT], suma=0, promedio;
    /// A
    int cantMayoresProm=0;
    /// C
    float maxNota;
    int cantMaxNota;

    cout << "Carga de notas:" << endl << endl;
    for(i=0; i<CANT; i++){
        cout << "Nota: ";
        cin >> notas[i];
    }

    /// Sumar todas las notas
    for(i=0; i<CANT; i++){
        suma = suma + notas[i];
    }

    promedio = suma / CANT;

    cout << endl << "Punto A: Notas mayores al promedio: ";
    for(i=0; i<CANT; i++){
        if (notas[i] > promedio){
            cantMayoresProm++;
        }
    }
    cout << cantMayoresProm << endl;

    /// C
    maxNota = notas[0];
    for(i=1; i<CANT; i++){
        if (notas[i] > maxNota){
            maxNota = notas[i];
        }
    }

    for(i=0; i<CANT; i++){
        if (notas[i] == maxNota){
            cantMaxNota++;
        }
    }

    cout << endl << "Punto C:" << endl;
    cout << "Mejor calificación: " << maxNota << endl;
    cout << "Cantidad de exámenes con mejor calificación: " << cantMaxNota << endl;



    return 0;
}
