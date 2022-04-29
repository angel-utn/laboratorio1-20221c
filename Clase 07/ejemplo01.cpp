/**
1) Una agencia de viajes posee la información de los cinco destinos turísticos que
comercializa en cada uno de los meses del año 2021. Por cada destino y mes registra:
- Código de destino turístico (entero)
- Número de mes (entero entre 1 y 12)
- Cantidad de pasajes vendidos (entero)
- Total recaudado (float)

La información se encuentra agrupada por destino turístico pero no se encuentra ordenada
bajo ningún criterio. Hay un registro para cada destino turístico y mes.

Se pide calcular e informar:
A) La cantidad totales de pasajes vendidos en el año 2021 entre todos los destinos
turísticos.
B) Por cada destino turístico, el total recaudado.
*/
#include <iostream>
using namespace std;

int main(){
    const int DESTINOS = 3, MESES = 5;
    int i, j, cod_dest, mes, cant_pasajes;
    float rec_mes;
    /// A
    int total_pasajes = 0;
    /// B
    float total_recaudacion;

    for(i=1; i<=DESTINOS; i++){
        total_recaudacion = 0;

        for(j=1; j<=MESES; j++){
            cout << "Destino: ";
            cin >> cod_dest;
            cout << "Mes: ";
            cin >> mes;
            cout << "Cantidad pasajes: ";
            cin >> cant_pasajes;
            cout << "Recaudación: $";
            cin >> rec_mes;
            cout << "----------------------" << endl;
            /// A
            total_pasajes += cant_pasajes;
            /// B
            total_recaudacion += rec_mes;
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
















