#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

// pasaje por direccion
// void cargar_vector(float vec[10]); // declaramos una funcion que reciba un vector de 10
void cargar_vector(float vec[], int cant, string mensaje); // declaramos una funcion que reciba un vector y una cantidad
void cargar_vector(float vec[], int cant);
float promediar_vector(float Vec[], int cant);
int contar_mayores_que(float vec[], int cant, float valor);


#endif // FUNCIONES_H_INCLUDED
