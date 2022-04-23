/**
 Listar los números primos entre el 1 y el 100. El usuario no ingresa nada.
*/
#include <iostream>
using namespace std;

int main(){
    int num, i, cdiv;
    for(num=1; num<=100; num++){
        cdiv = 0;
        for(i=1; i<=num; i++){
            if (num % i == 0){
                cdiv++;
            }
        }

        if (cdiv == 2){
            cout << num << " <-- es primo" << endl;
        }
    }
    return 0;
}
