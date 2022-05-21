#include <iostream>
using namespace std;
#include <cstring>
#include <string>

int main(){
    string pais, pais2;

    int idpais;
    cout << "ID Pais:";
    cin >> idpais;
    cin.ignore();
    cout << "Ingresa tu país: ";
    getline(cin, pais);

    pais2 = pais;

    cout << endl << "Tu país es: " << pais;
    cout << endl << "Tu país copiado es: " << pais2;

    if (pais == "Argentina"){
        cout << endl << "Querés un mate?" << endl;
    }




    return 0;
}
