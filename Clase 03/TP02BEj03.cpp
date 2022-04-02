#include <iostream>
using namespace std;

int main(){
    int cantidad;
    int color;
    // A
    int totalCantidad = 0;
    // B
    const int STOCK_BLANCOS = 45;
    const int STOCK_NEGROS = 50;
    const int STOCK_MARRONES = 40;
    const int STOCK_GRISES = 49;

    int blancos, negros, marrones, grises;
    blancos = negros = marrones = grises = 0;
    // C

    cout << "Venta #1" << endl;
    cout << "----------" << endl;
    cout << "Cantidad:";
    cin >> cantidad;
    cout << "Color: ";
    cin >> color;

    totalCantidad = totalCantidad + cantidad;

    switch (color){
      case 1:
        blancos += cantidad;
      break;
      case 2:
        negros += cantidad;
      break;
      case 3:
        marrones += cantidad;
      break;
      case 4:
        grises += cantidad;
      break;
    }


    cout << "Venta #2" << endl;
    cout << "----------" << endl;
    cout << "Cantidad:";
    cin >> cantidad;
    cout << "Color: ";
    cin >> color;

    totalCantidad = totalCantidad + cantidad;
    switch (color){
      case 1:
        blancos += cantidad;
      break;
      case 2:
        negros += cantidad;
      break;
      case 3:
        marrones += cantidad;
      break;
      case 4:
        grises += cantidad;
      break;
    }


    cout << "Venta #3" << endl;
    cout << "----------" << endl;
    cout << "Cantidad:";
    cin >> cantidad;
    cout << "Color: ";
    cin >> color;

    totalCantidad = totalCantidad + cantidad;
    switch (color){
      case 1:
        blancos += cantidad;
      break;
      case 2:
        negros += cantidad;
      break;
      case 3:
        marrones += cantidad;
      break;
      case 4:
        grises += cantidad;
      break;
    }



    cout << endl << endl;
    cout << "A) Total de conejos vendidos: " << totalCantidad << endl;
    cout << "B)" << endl;
    cout << "Blancos: " << STOCK_BLANCOS - blancos << endl;
    cout << "Negros : " << STOCK_NEGROS - negros << endl;
    cout << "Marrones: " << STOCK_MARRONES - marrones << endl;
    cout << "Grises  : " << STOCK_GRISES - grises << endl;
    cout << "C)" << endl;
    if (blancos == 0){
      cout << "No se vendieron conejos blancos" << endl;
    }
    if (negros == 0){
      cout << "No se vendieron conejos negros" << endl;
    }
    if (marrones == 0){
      cout << "No se vendieron conejos marrones" << endl;
    }
    if (grises == 0){
      cout << "No se vendieron conejos grises" << endl;
    }

    return 0;
}
