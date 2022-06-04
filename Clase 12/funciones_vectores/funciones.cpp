#include <iostream>
#include <string>
using namespace std;

#include "funciones.h"

void cargar_vector(float vec[], int cant, string mensaje){
    int i;
    for(i=0; i<cant; i++){
        cout << mensaje;
        cin >> vec[i];
    }
}

void cargar_vector(float vec[], int cant){
    int i;
    for(i=0; i<cant; i++){
        cin >> vec[i];
    }
}

float promediar_vector(float Vec[], int cant)
{
    float r;
    float acu=0;
    for (int i = 0; i < cant; i++){
        acu+=Vec[i];
    }

    r=acu/cant;

    return r;
}

int contar_mayores_que(float vec[], int cant, float valor) {
    int cont = 0;
    for(int i=0; i<cant; i++) {
        if(vec[i] > valor) {
            cont++;
        }
    }
    return cont;
}
