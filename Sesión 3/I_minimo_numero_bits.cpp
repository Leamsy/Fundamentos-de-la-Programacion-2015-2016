/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3log (entero) / log (2)) + (1 - (log (entero) / log(2) - floor(log(entero) / log (2))));
//
// RELACI�N DE PROBLEMAS 1
// EJERCICIO 33
/*	
   Programa que determina el m�nimo n�mero de bits para representar un entero.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
#include <cmath>        // Librer�a matem�tica
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	int entero;		// N�mero entero a analizar
	int bits; 	 	// Bits necesarios para representar el entero
	
	
	// Entrada de datos
	
	
	cout << "\nIntroduzca un n�mero entero: ";
	cin >> entero;
	

	//Operaciones y salida de datos
	
	
	bits = ceil(log (entero) / log (2)) + (1 - (log (entero) / log(2) - floor(log(entero) / log (2))));
	
	
	cout << "\nSe necesitan un m�nimo de " << bits << " bits.";
		
	return(0);
}
