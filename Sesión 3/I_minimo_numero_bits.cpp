/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3log (entero) / log (2)) + (1 - (log (entero) / log(2) - floor(log(entero) / log (2))));
//
// RELACIÓN DE PROBLEMAS 1
// EJERCICIO 33
/*	
   Programa que determina el mínimo número de bits para representar un entero.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
#include <cmath>        // Librería matemática
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	int entero;		// Número entero a analizar
	int bits; 	 	// Bits necesarios para representar el entero
	
	
	// Entrada de datos
	
	
	cout << "\nIntroduzca un número entero: ";
	cin >> entero;
	

	//Operaciones y salida de datos
	
	
	bits = ceil(log (entero) / log (2)) + (1 - (log (entero) / log(2) - floor(log(entero) / log (2))));
	
	
	cout << "\nSe necesitan un mínimo de " << bits << " bits.";
		
	return(0);
}
