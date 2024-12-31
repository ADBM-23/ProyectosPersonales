#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
  vector<int> numeros(5);
  stack<int> pila;
  int op,nume;
  
  do {
    // Mostrar menú de opciones
    cout << "Seleccione una opción:" << endl;
    cout << "1. Insertar valores " << endl;
    cout << "2. Guardar impares" << endl;
    cout << "3. Cantidad de elementos en la pila" << endl;
    cout << "4. Cima de la pila" << endl;
    cout << "5. Retirar elemento de la pila" << endl;
    cout << "6. Salir" << endl;
    cin >> op;
    
    switch(op) {
      case 1:
        // Ingreso de valores en el vector
        for(int i = 0; i <=4; i++) {
          cout << "Ingrese el valor " << i+1 << ": ";
          cin >> nume;
          numeros[i] = nume;
        }
        break;
        
      case 2:
        // Guardar los impares en la pila
        for(int i = 0; i <=4; i++) {
          if(numeros[i] % 2 != 0) {
            pila.push(numeros[i]);
          }
        }
        break;
        
      case 3:
        // Mostrar la cantidad de elementos en la pila
        cout << "La cantidad de elementos en la pila es: " << pila.size() << endl;
        break;
        
      case 4:
        // Mostrar la cima de la pila
        if(!pila.empty()) {
          cout << "La cima de la pila es: " << pila.top() << endl;
        } else {
          cout << "La pila está vacía" << endl;
        }
        break;
        
      case 5:
        // Retirar el elemento de la pila
        if(!pila.empty()) {
          int valor_retirado = pila.top();
          pila.pop();
          cout << "Se ha retirado de la pila el valor: " << valor_retirado << endl;
        } else {
          cout << "La pila está vacía" << endl;
        }
        break;
        
      case 6:
        // Salir del programa
        cout << "Saliendo del programa" << endl;
        break;
        
      default:
        cout << "Opción inválida" << endl;
    }
  } while(op != 6);
  
  return 0;
}