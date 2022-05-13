#include <iostream>
using namespace std;

int main(){
    const int TAM = 6;
    float vec[TAM];
    int posicion;

    int i = 0;
    for(i=0; i<TAM; i++){
        cout << "Ingresar un número en la posición #" << i << ": ";
        cin >> vec[i];
    }

    cout << endl << endl << "Datos cargados: " << endl;
    for(i=0; i<TAM; i++){
        cout << vec[i] << endl;
    }

    cout << endl << "Ingresa la posición (1-" << TAM << ") que querés visualizar: ";
    cin >> posicion;

    cout << vec[posicion-1];

    return 0;
}
