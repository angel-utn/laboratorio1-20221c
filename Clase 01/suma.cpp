/*
Dados dos números enteros que se ingresan por teclado
calcular y mostrar la suma de ellos.
*/
#include <iostream>
using namespace std;

int main(){
    int num1, num2, suma;
    cout << "Ingresar primer número: ";
    cin >> num1;
    cout << "Ingresar segundo número: ";
    cin >> num2;
    suma = num1 + num2;
    cout << endl;
    cout << "El resultado de la suma es: ";
    cout << suma;

    return 0;
}
