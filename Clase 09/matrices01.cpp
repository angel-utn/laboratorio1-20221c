#include <iostream>
using namespace std;

int main(){
    const int ALUMNOS = 3;
    const int MATERIAS = 3;
    int i, j;

    float mNotas[ALUMNOS][MATERIAS];

    cout << "Carga de notas " << endl << endl;
    for(i=0; i<ALUMNOS; i++){
        cout << "Alumno #" << i+1 << endl;
        cout << "--------------" << endl;
        for(j=0; j<MATERIAS; j++){
            cout << "Materia #" << j+1 << ": ";
            cin >> mNotas[i][j];
        }
        cout << endl;
    }
    cout << endl << endl;
    for(i=0; i<ALUMNOS; i++){
        cout << "Alumno #" << i+1 << endl;
        for(j=0; j<MATERIAS; j++){
            cout << mNotas[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
