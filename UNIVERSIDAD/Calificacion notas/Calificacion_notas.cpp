#include <iostream>
#include <vector>

	float def = 0;
	float reg = 0;
	float bue = 0; 
	float exce = 0;
int main (){
	int vector[5];
	int i;
	float suma = 0;

	for (i=0; i<=4; i++ ){
			
			std :: cout<<"Ingrese nota del estudiante "<<i+ 1 << " Anotar de 0 a 20 "<< std :: endl;
			std :: cin>>vector[i];
			suma += vector[i];
		}
	
	for (i=0; i<=4; i++)
	{	
		if(vector[i] >= 0 && vector[i] <= 5) def++;
	}
	
	for (i=0; i<=4; i++)
	{	
		if(vector[i] >= 6 && vector[i] <= 10) reg++;
	}
	
	for (i=0; i<=4; i++)
	{	
		if(vector[i] >= 11 && vector[i] <= 15) bue++;
	}

	for (i=0; i<=4; i++)
	{	
		if(vector[i] >= 16 && vector[i] <= 20) exce++;
	}
		
		std :: cout<<"Estudiantes en calificacion deficiente: "<<def << std :: endl;;	
		std :: cout<<"Estudiantes en calificacion regular: "<<reg << std :: endl;;
		std :: cout<<"Estudiantes en calificacion buena: "<<bue << std :: endl;;
		std :: cout<<"Estudiantes en calificacion excelente: "<<exce << std :: endl;;
	
	float promedio = suma / 5;
    std::cout << "El promedio de notas de la materia es: " << promedio << std::endl;
	
	return 0;
}