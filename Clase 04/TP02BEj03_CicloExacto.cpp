/**
3) Una granja dispone de 45 conejos blancos, 50 conejos negros, 40 marrones y 49 grises. Se pide hacer un programa donde se ingresen tres ventas. Cada venta está compuesta por:
Cantidad de conejos
Tipo de conejo (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)

Calcular e informar:
A) Cantidad total de conejos vendidos en total.
B) Cuántos conejos quedaron de cada tipo.
C) Los tipos de conejos que no se vendieron.

Quien tenga ganas:
D) Los porcentajes de conejos vendidos por color (se muestran cuatro porcentajes)
E) El color más vendido y el color menos vendido (se asume que no hay empates)
F) El número de venta con mayor cantidad de conejos vendidos (se asume que no hay empates)
G) El promedio de conejos vendidos por venta (se muestra un solo valor)

NOTA: Ninguna venta superará los 10 conejos.
*/
#include <iostream>
using namespace std;

int main() {
    int cantidadVentas;
    int cantidad;
    int color;
    // A
    int totalCantidad = 0;
    // B
    const int STOCK_BLANCOS = 45;
    const int STOCK_NEGROS = 50;
    const int STOCK_MARRONES = 40;
    const int STOCK_GRISES = 49;

    int blancos, negros, marrones, grises, i;
    blancos = negros = marrones = grises = 0;
    // C
    bool noVendiBlancos = true, noVendiNegros = true, noVendiMarrones = true, noVendiGrises = true;

    cout << "¿Cuántas ventas realizaste?";
    cin >> cantidadVentas;

    for(i=1; i<=cantidadVentas; i++) {
        cout << "Venta #" << i << endl;
        cout << "----------" << endl;
        cout << "Cantidad:";
        cin >> cantidad;
        cout << "Color: ";
        cin >> color;

        // A
        totalCantidad = totalCantidad + cantidad;

        // B y C
        switch (color) {
        case 1:
            blancos += cantidad;
            noVendiBlancos = false;
            break;
        case 2:
            negros += cantidad;
            noVendiNegros = false;
            break;
        case 3:
            marrones += cantidad;
            noVendiMarrones = false;
            break;
        case 4:
            grises += cantidad;
            noVendiGrises = false;
            break;
        }
        cout << endl;
    }

    cout << endl << endl;
    cout << "A) Total de conejos vendidos: " << totalCantidad << endl;
    cout << "B)" << endl;
    cout << "Blancos: " << STOCK_BLANCOS - blancos << endl;
    cout << "Negros : " << STOCK_NEGROS - negros << endl;
    cout << "Marrones: " << STOCK_MARRONES - marrones << endl;
    cout << "Grises  : " << STOCK_GRISES - grises << endl;
    cout << "C)" << endl;

    if (noVendiBlancos) {
        cout << "No se vendieron conejos blancos" << endl;
    }
    if (noVendiNegros) {
        cout << "No se vendieron conejos negros" << endl;
    }
    if (noVendiMarrones == true) {
        cout << "No se vendieron conejos marrones" << endl;
    }
    if (noVendiGrises == true) {
        cout << "No se vendieron conejos grises" << endl;
    }
    return 0;
}
