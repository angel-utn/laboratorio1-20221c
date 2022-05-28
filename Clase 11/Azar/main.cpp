#include <iostream>
using namespace std;
#include <cstdlib> /* srand, rand  */
#include <ctime> /* time */

int main()
{
    // Programa que genera 10 números al azar entre 1 y 6.
    // Programa que genera 10 letras al azar entre 'A' y 'Z'.
    srand(time(NULL));

    int i, numero;
    char letra;

    for(i=1; i<=10; i++){
        numero = (rand() % 6)+1;
        cout << numero << endl;
    }
    cout << endl;
    for(i=1; i<=10; i++){
        letra = (rand() % 26)+'A';
        cout << letra << endl;
    }

    return 0;
}
