/**
Una agencia de viaje posee la información de los cinco destinos turísticos que
comercializa en algunos meses del año 2021. Por cada registro se ingresa:
- Código de destino turístico (entero)
- Número de mes (entero entre 1 y 12)
- Cantidad de pasajes vendidos (entero)
- Total recaudado (float)

La información se encuentra agrupada por destino turístico pero no se encuentra ordenada
bajo ningún criterio. No todos los destinos tuvieron información para todos los meses. Para
indicar que finaliza la carga de un destino se ingresa un mes igual a cero.

Se pide calcular e informar:
A) La cantidad totales de pasajes vendidos en el año 2021 entre todos los destinos
turísticos.
B) Por cada destino turístico, el total recaudado.
*/
#include <iostream>
using namespace std;

int main(){
    const int DESTINOS = 3;
    int i, cod_dest, mes, cant_pasajes;
    float rec_mes;
    /// A
    int total_pasajes = 0;
    /// B
    float total_recaudacion;

    for(i=1; i<=DESTINOS; i++){
        total_recaudacion = 0;

        cout << "Destino: ";
        cin >> cod_dest;
        cout << "Mes: ";
        cin >> mes;
        while(mes != 0){
            cout << "Cantidad pasajes: ";
            cin >> cant_pasajes;
            cout << "Recaudación: $";
            cin >> rec_mes;
            cout << "----------------------" << endl;
            /// A
            total_pasajes += cant_pasajes;
            /// B
            total_recaudacion += rec_mes;

            cout << "Destino: ";
            cin >> cod_dest;
            cout << "Mes: ";
            cin >> mes;
        }
        cout << endl << endl;
        cout << "Punto B: " << endl;
        cout << "Destino: " << cod_dest << endl;
        cout << "Total recaudación: " << total_recaudacion << endl;
    }
    cout << endl << endl;
    cout << "Punto A: " << endl;
    cout << "Total pasajes: " << total_pasajes << endl;

    return 0;
}
