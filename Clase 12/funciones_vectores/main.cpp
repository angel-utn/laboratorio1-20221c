#include <iostream>
#include <string>
using namespace std;

#include "funciones.h"

int main()
{
    const int CANTIDAD = 4;
    float vNumeros[CANTIDAD], promedio;
    int cantidad;

    // Cargar los 10 numeros
    cargar_vector(vNumeros, CANTIDAD);

    // Calcular el promedio de los 10 numeros
    promedio = promediar_vector(vNumeros, CANTIDAD);

    // Contar mayores al promedio calculado
    cantidad = contar_mayores_que(vNumeros, CANTIDAD, promedio);

    // Mostrar la cantidad
    cout << "La cantidad de numeros mayores al promedio es: "<< cantidad;

    return 0;
}

