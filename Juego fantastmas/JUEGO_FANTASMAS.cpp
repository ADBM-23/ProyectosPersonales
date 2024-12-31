#include <iostream>
using namespace std;

string matrizz1 [6][6]={"v","v","f","v","v","v","f","v","v","f","v","v","v","v","f","v","v","f","v","v","v","f","v","v","f","v","v","f","v","f","v","v","v","v","v","v"};
string matrizz2 [6][6]={"*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*","*"};

int op, op2;
int f,c,pass,score=50, fan=0;
bool mseguir=true;

void cargar(int f, int c){
	
	if (matrizz1[f][c]==matrizz1[0][0],matrizz1[f][c]==matrizz1[0][2],matrizz1[f][c]==matrizz1[0][4],matrizz1[f][c]==matrizz1[5][2],matrizz1[f][c]==matrizz1[5][4]){
		matrizz2[f][c]="&";
		score +=3;
		
	}
	if (matrizz1[f][c]!=matrizz1[0][0],matrizz1[f][c]!=matrizz1[0][2],matrizz1[f][c]!=matrizz1[0][4],matrizz1[f][c]!=matrizz1[5][2],matrizz1[f][c]!=matrizz1[5][4]){
		cout<<"Has fallado"<<endl;
		matrizz2[f][c]="X";
		score -=5;
		fan+=1;
}

	if (score>=60){
		system("cls");
		cout<<" HAS GANADO EL JUEGO"<<endl;
		
	}
	if (fan>=3){
		system("cls");
		cout<<"GAME OVER"<<endl;
		
	}
	
}

void cheet(){
	
	for(f=0;f<=6;f++){
		cout<<endl;
		for(c=0;c<=6;c++){
			cout<<matrizz1[f][c]<<"\t";
		}	
		cout<<endl;
	}	
}
void show(){
	
	for(f=0;f<=6;f++){
		cout<<endl;
		for(c=0;c<=6;c++){
			cout<<matrizz2[f][c]<<"\t";
		}	
		cout<<endl;
	}
	
}

int main(){
	
	do{
		cout<<"------JUEGO FANTASMA------"<<endl;
		cout<<" 1.JUGAR            "<<endl;
		cout<<" 2.MOSTRAR TABLERO  "<<endl;
		cout<<" 3.SALIR            "<<endl;
		cin>>op;
		
		switch(op){
			case 1: system("cls");
			show();
			cout<<"Puntaje: "<<score<<endl;
			cout<<" "<<endl;
			cout<<"Fantasmas econtrados: "<<fan<<endl;
			cout<<""<<endl;
			cout<<"Ingrese la fila: (numero de 0 a 5)"<<endl;
			cin>>f;
			cout<<"Ingrese la columna: (numero de 0 a 5)"<<endl;
			cin>>c;
			
			if(matrizz2[f][c]=="0" or matrizz2[f][c]=="x"){
				cout<<"Ya has intentado con esta cordenada :("<<endl;
				system("pause");
				break;
			}
			if (f>=6 or c>=6 or f<0 or c<0){
				cout<<"Cordenadas incorrectas"<<endl;
				system("pause");
				break;
				
			}
			cargar(f,c);
			system("pause");
			break;
			
			case 2: system("cls");
			cout<<"Ingrese la contraseña "<<endl;
			cin>>pass;
			if (pass==123){
				cheet();
				system("pause");
				break;
			}else{
				cout<<"Contraseña erronea"<<endl;
				system("pause");
				break;
			}
			
			case 3: system("cls");
				mseguir=false;
		}
				
	}while(mseguir==true);
	
}