/**
El Ministerio de Trabajo desea registrar la información de los empleados contratados por una empresa. Por cada empleado registró:
- Legajo
- Edad
- Sueldo actual

Para determinar el fin de la carga de datos de empleados se ingresa un número de legajo igual a cero. Calcular e informar:
- La cantidad total de empleados
- El sueldo promedio
- El sueldo promedio de los empleados mayores a 40 años
- El legajo, la edad y el sueldo de la persona que mayor sueldo haya registrado.

Nota: No habrá más de una persona con el mayor sueldo.
*/
#include <iostream>
using namespace std;

int main(){
    int legajo, edad;
    float sueldo;
    // A
    int cantEmpleados = 0;
    // B
    float sumaSueldos = 0;
    float promedioGeneral;

    cout << "Legajo: ";
    cin >> legajo;

    while (legajo != 0){
        cout << "Edad: ";
        cin >> edad;
        cout << "Sueldo: $";
        cin >> sueldo;
        // A
        cantEmpleados++;
        // B
        sumaSueldos += sueldo;
        // C
        // D
        cout << "---------------------------" << endl;
        cout << "Legajo: ";
        cin >> legajo;
    }
    cout << endl << "PUNTO A" << endl;
    cout << "Cantidad empleados: " << cantEmpleados << endl;

    cout << endl << "PUNTO B" << endl;
    if (cantEmpleados != 0){
        promedioGeneral = sumaSueldos / cantEmpleados;
        cout << "El promedio general de sueldos es: $ " << promedioGeneral << endl;
    }

    cout << endl << "PUNTO C" << endl;
    cout << endl << "PUNTO D" << endl;
    return 0;
}
