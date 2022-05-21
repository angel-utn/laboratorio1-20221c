#include <iostream>
using namespace std;

int main(){
    /// Formas correctas de declarar un vector
    const int TAM = 100;
    int vec[TAM]; /// Forma con una constante

    int vec2[100]; /// Forma con un valor entero explícito

    /// Forma incorrecta de declarar un vector

    int cant = 100;
    int vec3[cant]; /// Esto está mal

    return 0;
}
