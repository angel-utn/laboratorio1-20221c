#include <iostream>
using namespace std;

int main(){
  int n1, n2, n3, n4, n5, contador = 0;
  cout << "Ingresar número: ";
  cin >> n1;
  cout << "Ingresar número: ";
  cin >> n2;
  cout << "Ingresar número: ";
  cin >> n3;
  cout << "Ingresar número: ";
  cin >> n4;
  cout << "Ingresar número: ";
  cin >> n5;

  if (n1 > 0){
    contador++;
  }
  if (n2 > 0){
    contador++;
  }
  if (n3 > 0){
    contador++;
  }
  if (n4 > 0){
    contador++;
  }
  if (n5 > 0){
    contador++;
  }

  cout << "\n\nCantidad de positivos: " << contador;


  return 0;
}
