#include <iostream>
using namespace std;

int main(){
    int nro;
    int resto;
    cout << "Ingresar número: ";
    cin >> nro;

    if (nro > 0){
        cout << "Es positivo" << endl;
    }
    else{
        if (nro == 0){
            cout << "Es cero" << endl;
        }
        else{
            cout << "Es negativo" << endl;
        }
    }

    return 0;
}
