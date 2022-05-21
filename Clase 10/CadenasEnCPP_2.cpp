#include <iostream>
using namespace std;
#include <string>

int main(){
    string paises[5];
    int i;
    for(i=0; i<5; i++){
        getline(cin, paises[i]);
    }
    cout << endl;
    for(i=0; i<5; i++){
        cout << paises[i] << endl;
    }



    return 0;
}
