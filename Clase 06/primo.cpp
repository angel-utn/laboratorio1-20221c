#include <iostream>
using namespace std;

int main(){
    int num, i, cdiv=0;
    cout << "Número: ";
    cin >> num;

    for(i=1; i<=num/2; i++){
        if (num % i == 0){
            cdiv++;
        }
    }

    if (cdiv == 1){
        cout << "Es primo";
    }
    else{
        cout << "No es primo";
    }
    return 0;
}
