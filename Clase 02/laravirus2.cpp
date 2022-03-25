#include <iostream>
using namespace std;

int main() {
    float temp;
    char dc;
    cout << "AUTODIAGNÓSTICO LARAVIRUS 2022" << endl;
    cout << "---------------------------------" << endl;
    cout << "Temperatura: ";
    cin >> temp;
    cout << "Dolor de cabeza (S/N): ";
    cin >> dc;

    if (temp > 37.5 && dc == 'S') {
        cout << "Posible Laravirus";
    } else {
        cout << "Todo ok";
    }
    return 0;
}
