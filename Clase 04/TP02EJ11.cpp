#include <iostream>
using namespace std;

int main(){
  int n, contador = 0;

  cout << "Ingresar número: ";
  cin >> n;
  if (n > 0){
    contador++;
  }

  cout << "Ingresar número: ";
  cin >> n;
  if (n > 0){
    contador++;
  }

  cout << "Ingresar número: ";
  cin >> n;
  if (n > 0){
    contador++;
  }

  cout << "Ingresar número: ";
  cin >> n;
  if (n > 0){
    contador++;
  }

  cout << "Ingresar número: ";
  cin >> n;
  if (n > 0){
    contador++;
  }

  cout << "\n\nCantidad de positivos: " << contador;

  return 0;
}
