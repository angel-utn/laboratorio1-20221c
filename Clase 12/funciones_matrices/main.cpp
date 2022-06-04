#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void cargar_matriz(int mat[3][5]);
void mostrar_matriz(int mat[3][5]);

int main()
{
    srand(time(0));
    int mNumeros[3][5];

    cargar_matriz(mNumeros);

    mostrar_matriz(mNumeros);

    return 0;
}

void cargar_matriz(int mat[3][5]){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5 ; j++){
            mat[i][j] = rand() % 10;
        }
    }
}

void mostrar_matriz(int mat[3][5]){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 5 ; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}











