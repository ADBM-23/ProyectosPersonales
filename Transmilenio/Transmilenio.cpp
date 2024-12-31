#include <iostream>
#include <stack>
#include <queue>
#include <cstdlib>
using namespace std;

stack <int> pila;
queue <int> t1 ;
queue <int> t2 ;
queue <int> t3 ;
int op;
bool mseguir=true;


void menu(){
	do {
		system ("cls");
		cout<<"<--------Menu Transmilenio--------> "<<endl;
		cout<<"1. Ingresar pasajero "<<endl;
		cout<<"2. Mover pasajero a torniquete "<<endl;
		cout<<"3. Retirar pasajero de torniquete numero 1 "<<endl;
		cout<<"4. Retirar pasajero de torniquete numero 2 "<<endl;
		cout<<"5. Retirar pasajero de torniquete numero 3 "<<endl;
		cout<<"6. Mostrar cuantos pasajeros hay en el Bus "<<endl;
		cout<<"7. Mostrar cuantos pasajeros hay en los torniquetes "<<endl;
		cout<<"8. salir"<<endl;
		
		cout<<"Ingrese la opcion"<<endl;
		cin>>op;
		switch(op){
		
			case 1: system("cls");
					cout<< "El pasajero fue ingresado "<< endl;
					pila.push(1);
					cout<<"Hay "<<pila.size()<<" pasajeros en el bus"<<endl;
					system("pause");
					break;																										 
			case 2:	system("cls");
					if (pila.empty() != 0 ){
						pila.pop();	
						cout<<"EL bus esta vacio, por favor recoja gente.. "<<endl;
						system("pause");
						break;			
					}
					if (t1.size() < 3 ){
						t1.push(pila.top());
						pila.pop();
						cout<<"Se movio el pasajero "<<pila.size()<<" a torniquete numero 1"<<endl;
						system("pause");
					}else if (t2.size() < 3 ){
						t2.push(pila.top());
						pila.pop();
						cout<<"Se movio el pasajero "<<pila.size()<<" a torniquete numero 2"<<endl;
						system("pause");
					}else {
						t3.push(pila.top());
						pila.pop();
						cout<<"Se movio el pasajero "<<pila.size()<<" a torniquete numero 3"<<endl;
						system("pause");
				}
					break;

			case 3: system("cls");
					cout<< "El pasajero ha sido retirado del torniquete numero 1"<< endl;
					t1.pop();
					system("pause");
					break;
	        
			case 4: system("cls");
					cout<< "El pasajero ha sido retirado del torniquete numero 2"<< endl;
					t2.pop();
					system("pause");
					break;
					
			case 5: system("cls");
					cout<< "El pasajero ha sido retirado del torniquete numero 3"<< endl;
					t3.pop();
					system("pause");
					break; 
									
			case 6: system("cls");
					cout<<"Hay "<<pila.size()<<" en el bus "<<endl;
					break; 	
						
			case 7: system("cls");
					cout<<"Hay "<<t1.size()<<" en el torniquete numero 1 "<<endl;
					cout<<"Hay "<<t2.size()<<" en el torniquete numero 2 "<<endl;
					cout<<"Hay "<<t3.size()<<" en el torniquete numero 3 "<<endl;
					break; 					
																				
			case 8:	mseguir=false;
			        break; 
		}
	}while(mseguir==true);
}

int main()
{
menu();
}
