/**
    Hacer un programa que solicite la cantidad de asientos disponibles y
    la cantidad de pasajes ocupados. Luego calcular e informar el
    porcentaje de ocupación y no ocupación.
*/

#include <iostream>
using namespace std;

int main(){
    int asientos_disp, asientos_ocup, capacidad;
    float porc_ocup, porc_no_ocup;

    cout << "Ingresar cantidad de asientos disponibles: ";
    cin >> asientos_disp;

    cout << "Ingresar cantidad de asientos ocupados   : ";
    cin >> asientos_ocup;

    capacidad = asientos_disp + asientos_ocup;

    porc_ocup = asientos_ocup * 100.0 / capacidad;
    porc_no_ocup = asientos_disp * 100 / (float) capacidad;

    cout << endl;
    cout << "Porcentaje disponible: " << porc_no_ocup << endl;
    cout << "Porcentaje ocupación : " << porc_ocup << endl;

    return 0;
}
