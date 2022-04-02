#include <iostream>
using namespace std;

int main(){
    int horas;
    char tipo;
    bool urgencia;
    float valorHora;
    float tarifa;

    cout << "Cantidad de horas: ";
    cin >> horas;
    cout << "Tipo de lenguaje: ";
    cin >> tipo;
    cout << "Es urgente (1-Sí/0-No): ";
    cin >> urgencia;

    switch(tipo){

      case 'C':
      case 'c':
        valorHora = 2500;
      break;

      case '#':
        valorHora = 2100;
      break;

      case 'P':
      case 'p':
        valorHora = 1400;
      break;

      case 'G':
      case 'g':
        valorHora = 2000;
      break;

      default:
        cout << "Tipo de lenguaje no trabajado. Fin.";
        return 0;
      break;
    }

    tarifa = horas * valorHora;

    if (urgencia == 1){
      tarifa = tarifa * 2.2;
    }

    cout << "La tarifa es $ " << tarifa << endl;

    return 0;
}
