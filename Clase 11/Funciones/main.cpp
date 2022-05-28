#include <iostream>
using namespace std;

/// Declaración de función
bool es_par(int numero);
bool es_primo(int numero);
int sumar(int num1, int num2);
int restar(int num1, int num2);
void mostrar_primos_entre(int inicio, int fin);
void intercambiar(int &a, int &b);


int main()
{
    int n1, n2;
    n1 = 500;
    n2 = 5;
    intercambiar(n1, n2);
    cout << n1 << endl;
    cout << n2 << endl;

    return 0;
}

/// Definición de función

/// Función que recibe un número entero y determina si es par o no lo es. Devolver true si es par o false si no.
bool es_par(int numero){
    if (numero % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

/// Función que recibe un número entero y determina si es primo o no lo es. Devolver true si es primo o false si no.
bool es_primo(int numero){
    int i, cdiv = 0;
    for(i=1; i<=numero; i++){
        if (numero % i == 0){
            cdiv++;
        }
    }
    if (cdiv == 2){
        return true;
    }
    else{
        return false;
    }
}

/// Suma dos números enteros y devuelve el resultado
int sumar(int num1, int num2){
    int resultado_suma;
    resultado_suma = num1 + num2;
    return resultado_suma;
}

/// Resta dos números enteros y devuelve el resultado
int restar(int num1, int num2){
    int resultado_resta;
    resultado_resta = num1 + num2;
    return resultado_resta;
}

/// Muestra los números primos comprendidos en el rango inicio,fin.
void mostrar_primos_entre(int inicio, int fin){
    int i;
    for(i=inicio; i<=fin; i++){
        if (es_primo(i) == true){
            cout << i << endl;
        }
    }
    return;
}

/// Intercambia los valores entre dos variables
void intercambiar(int &a, int &b){
    int c;
    c = a;
    a = b;
    b = c;
    return;
}






