/**
El dueño del gimnasio Laragym nos pide que realicemos un programa que les permita
cargar todas los entrenamientos de sus 50 clientes, cada registro de entrenamiento
contiene:
Numero de Entrenamiento (1 - 9999)
Cliente (101- 150)
Tipo de Entrenamiento ( 1 - 10 )
Tiempo del Entrenamiento (minutos)

Puede haber varios registros de entrenamiento por cliente. La información no se
encuentra agrupada ni ordenada. El fin de la carga de entrenamientos se indica con
un número de entrenamiento igual a cero, informar:

1) Por cada cliente, el tiempo total de entrenamiento (expresarlo en horas y minutos,
ejemplo 70 minutos se expresaría 1 hora y 10 minutos).
2) Por cada cliente, los tipos de entrenamiento que realizó.

        1   2   3   4   5   6   .   .   10
        ------------------------------------
101     5   0   8   0   9   0   0   0   100
102         4
103                 8

3) Por cada cada cliente y tipo de entrenamiento, la cantidad total de minutos entrenados.
Sólo listar aquellos registros que sean superiores a 0.
4) El número de cliente que más tiempo haya entrenado.
5) Los tipos de entrenamiento que no se realizaron por ningún cliente.
6) Por cada cliente, el tipo de entremiento que más sesiones haya realizado.
7) El nùmero de entrenamiento más extenso en minutos.
*/
#include <iostream>
using namespace std;

int main(){
    int numE, cliente, tipoE, tiempo;
    // A
    int vMinCli[50] = {};

    int matMinutos[50][10] = {};
    int matEntrenamientos[50][10] = {};
    int maxTiempo=0, maxNumEntrenamiento;

    cout << "Número de entrenamiento: ";
    cin >> numE;
    while(numE != 0){
        cout << "Cliente: ";
        cin >> cliente;
        cout << "Tipo de entrenamiento: ";
        cin >> tipoE;
        cout << "Tiempo: ";
        cin >> tiempo;

        /// Punto 1
        vMinCli[cliente-101] += tiempo;
        /// Punto 1,2,3,4,5
        matMinutos[cliente-101][tipoE-1] += tiempo;
        /// Punto 6
        matEntrenamientos[cliente-101][tipoE-1]++; // Punto 6 inventado en Zoom

        // Punto 7 inventado en Zoom
        if (tiempo > maxTiempo){
            maxTiempo = tiempo;
            maxNumEntrenamiento = numE;
        }

        cout << "============================" << endl;
        cout << "Número de entrenamiento: ";
        cin >> numE;
    }
    /// A
    cout << "Punto 1 - Con Vector" << endl;
    for(int i=0; i<50; i++){
        int horas, minutos;
        horas = vMinCli[i] / 60;
        minutos = vMinCli[i] % 60;
        cout << "Cliente: " << i+101 << " - Tiempo entrenamiento: " << horas << ":" <<minutos<< endl ;
    }
    cout << endl << "Punto 1 - Con Matriz" << endl;
    for(int i=0; i<50; i++){
        int minutosTotales = 0;
        for(int j=0; j<10; j++){
            minutosTotales += matMinutos[i][j];
        }
        int horas, minutos;
        horas = vMinCli[i] / 60;
        minutos = vMinCli[i] % 60;
        cout << "Cliente: " << i+101 << " - Tiempo entrenamiento: " << horas << ":" <<minutos<< endl ;
    }
    /// B
    cout << "Punto 2" << endl;

    /// 7
    cout << "Punto 7" << endl;
    cout << "El entrenamiento más extenso en minutos fue " << maxNumEntrenamiento << endl;

    return 0;
}
