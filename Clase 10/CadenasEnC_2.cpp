#include <iostream>
using namespace std;
#include <cstring>

int main(){
    char palabra[7];
    char palabra2[7];

    cin >> palabra;
    // palabra2 = palabra;
    strcpy(palabra2, palabra);

    cout << "Primer palabra: " << palabra << endl;
    cout << "Segunda palabra: " << palabra2 << endl;

    return 0;
}
