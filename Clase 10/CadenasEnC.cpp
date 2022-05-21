#include <iostream>
using namespace std;

int main(){
    ///Manejo de cadenas de caracteres en C
    int legajo;
    char apellido[20];
    char nombre[30];
    char domicilio[100];

    cout << "Legajo: ";
    cin >> legajo;
    cin.ignore();
    cout << "Ingresar apellido: ";
    cin.getline(apellido, 20);
    cout << "Ingresar nombre: ";
    cin.getline(nombre, 30);
    cout << "Ingresar domicilio: ";
    cin.getline(domicilio, 100);

    cout << endl << endl;
    cout << "Hola " << nombre << " " << apellido;
    cout << " tu legajo es " << legajo;

    return 0;
}
