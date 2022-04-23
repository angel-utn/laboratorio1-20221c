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
#include <iomanip>
using namespace std;

int main(){
    int legajo, edad;
    float sueldo;
    // A
    int cantEmpleados = 0;
    // B
    float sumaSueldos = 0;
    float promedioGeneral;
    // C
    int cantEmpleados40 = 0;
    float sumaSueldos40 = 0;
    float promedioSueldo40;
    // D
    float maxSueldo = 0;
    int maxEdad, maxLegajo; // Edad del empleado con mayor sueldo y Legajo del empleado con mayor sueldo

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
        if (edad > 40){
            cantEmpleados40++;
            sumaSueldos40 += sueldo;
        }
        // D
        if (sueldo > maxSueldo){
            maxSueldo = sueldo;
            maxEdad = edad;
            maxLegajo = legajo;
        }

        cout << "---------------------------" << endl;
        cout << "Legajo: ";
        cin >> legajo;
    }
    cout << endl << "PUNTO A" << endl;
    cout << "Cantidad empleados: " << cantEmpleados << endl;

    cout << endl << "PUNTO B" << endl;
    if (cantEmpleados != 0){
        promedioGeneral = sumaSueldos / cantEmpleados;
        cout << "El promedio general de sueldos es: $ " << fixed << setprecision(2) << promedioGeneral << endl;
    }

    cout << endl << "PUNTO C" << endl;
    if (cantEmpleados40 != 0){
        promedioSueldo40 = sumaSueldos40 / cantEmpleados40;
        cout << "El promedio de sueldos de empleados >40 es: $" << promedioSueldo40 << endl;
    }

    cout << endl << "PUNTO D" << endl;
    cout << "Sueldo máximo: " << maxSueldo << endl;
    cout << "Edad: " << maxEdad << endl;
    cout << "Legajo: " << maxLegajo << endl;
    return 0;
}
