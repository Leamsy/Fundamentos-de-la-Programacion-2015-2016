/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 4
// EJERCICIO 2
/*	
   Programa que recibe las notas de distintos alumnos para después mostrar las medias
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

struct RegAlumno {
		double nota1, nota2, nota3, nota4;
		string apellido_nombre;
	};

int main()
{
	
	double pesos[4] = {0};
	RegAlumno alumnos[100] = {0};
	double calificacion_media[100] = {0};
	int aux;
	

	cout << "\nIntroduce el peso de la primera nota (%): ";
	cin >> pesos[0];
	cout << "\nSegunda: ";
	cin >> pesos[1];
	cout << "\nTercera: ";
	cin >> pesos[2];
	cout << "\nCuarta: ";
	cin >> pesos[3];
	
	aux = 0;
	
	do{
		
		cout << "\nNombre y apellido del alumno: ";
		cin >> alumnos[aux].apellido_nombre;
		
		if(alumnos[aux].apellido_nombre != "*"){
			cout << "\n\tIntroduce la primera nota: ";
			cin >> alumnos[aux].nota1;
			cout << "\n\tSegunda: ";
			cin >> alumnos[aux].nota2;
			cout << "\n\tTercera: ";
			cin >> alumnos[aux].nota3;
			cout << "\n\tCuarta: ";
			cin >> alumnos[aux].nota4;
			
			calificacion_media[aux] = alumnos[aux].nota1 * pesos[0] * 0.01 + 
				alumnos[aux].nota2 * pesos[1] * 0.01 + alumnos[aux].nota3 * pesos[2] 
				* 0.01 + alumnos[aux].nota4 * pesos[3] * 0.01 ;
			
			aux++;
		}
		
	}while(alumnos[aux].apellido_nombre != "*");
	
	
	// Lista de alumnos
	
	for(aux = 0; aux < 100; aux++){
		if(calificacion_media[aux] != 0){
			cout << "\n" <<alumnos[aux].apellido_nombre<< "";
			cout << " - " <<calificacion_media[aux]<< "";
		}
	}
	
return(0);	
}
