#include <iostream>
using namespace std;

int main(){
    int cod_dest, cod_dest_anterior, mes, cant_pasajes;
    float rec_mes;
    /// A
    int total_pasajes = 0;
    /// B
    float total_recaudacion;

    cout << "Destino: ";
    cin >> cod_dest;

    while (cod_dest != 0){
        total_recaudacion = 0;
        cod_dest_anterior = cod_dest;

        while(cod_dest == cod_dest_anterior){
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

            cout << "Destino: ";
            cin >> cod_dest;
        }
        cout << endl << endl;
        cout << "Punto B: " << endl;
        cout << "Destino: " << cod_dest_anterior << endl;
        cout << "Total recaudación: " << total_recaudacion << endl;
    }
    cout << endl << endl;
    cout << "Punto A: " << endl;
    cout << "Total pasajes: " << total_pasajes << endl;
    return 0;
}
