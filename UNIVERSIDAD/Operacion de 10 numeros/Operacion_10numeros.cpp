#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> numeros;
  int numero;

  for (int i = 0; i < 10; i++) {
    cout << "Ingrese su numero: " <<i+ 1 << endl;
    cin >> numero;
    numeros.push_back(numero);
  }

  int sum = 0;
  int product = 1;
  for (int i = 0; i < numeros.size(); i++) {
    sum += numeros[i];
    product *= numeros[i];
  }

  int difference = numeros[0];
  for (int i = 1; i < numeros.size(); i++) {
    difference -= numeros[i];
  }

  int quotient = numeros[0];
  for (int i = 1; i < numeros.size(); i++) {
    quotient /= numeros[i];
  }

  cout << "La suma de los numeros es: " << sum << endl;
  cout << "La diferencia de los numeros es: " << difference << endl;
  cout << "El producto de los números es: " << product << endl;
  cout << "El cociente de los números es: " << quotient << endl;

  return 0;
}