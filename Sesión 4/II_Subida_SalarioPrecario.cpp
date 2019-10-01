/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 2
// EJERCICIO 10
/*	
   Programa que determina si procede la variación de salario de una persona según su edad y sueldo.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	int edad;								// Edad de la persona
	double salario1, salario2; 	 	// Salario de la persona, inicial y final
	bool condicion1;						// Condición para determinar si la persona consigue la segunda subida de salario.
	
	
	// Entrada de datos
	
	
	cout << "\nIntroduzca su edad: ";
	cin >> edad;
	
	cout << "\nIntroduzca su salario: ";
	cin >> salario1;

	//Operaciones y salida de datos
	
	if (edad < 35 || 65 < edad){
		
		salario2 = salario1 + salario1 * 0.04;
		
		condicion1 = true;
		
		}
		
	else{
		
		salario2 = salario1;
		
		}
	if (condicion1 == true && salario1 < 300){
		
		salario2 = salario2 + salario1 * 0.03;
		
		}
	
		
	cout << "\n\nSu salario ahora es de " << salario2 << " €.";
		
	return(0);
}
