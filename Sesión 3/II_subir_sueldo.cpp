/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 2
// EJERCICIO 2
/*	
   Programa que modifica el salario de un trabajador seg�n unas condiciones determinadas.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
#include <cmath>        // Librer�a matem�tica
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	int edad;				// Edad de la persona
	double salario1; 	 	// Salario de la persona
	double salario2;		// Salario tras evaluarse la subida
	
	
	// Entrada de datos
	
	
	cout << "\nIntroduzca su edad: ";
	cin >> edad;
	cout << "\nIntroduzca su salario: ";
	cin >> salario1;
	

	//Operaciones y salida de datos
	
	if (edad > 55 && salario1 < 750){
	
		salario2 = salario1 + salario1 * 0.05;
		
		cout << "\n\nTras aplicarse una subida de un 5%, su nuevo salario es de " << salario2 << " �.";
		
		}
		
	
	else {
		
		cout << "\n\nNo es aplicable la subida, su salario seguir� siendo de " << salario1 << " �.";
		
		}
		
		

	return(0);
}
