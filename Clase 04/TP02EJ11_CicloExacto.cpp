#include <iostream>
using namespace std;

int main(){
  int i, n, contador = 0;

  for(i=1; i<=5; i++){
    cout << "Ingresar número: ";
    cin >> n;
    if (n > 0){
      contador++;
    }
  }

  cout << "\n\nCantidad de positivos: " << contador;

  return 0;
}
