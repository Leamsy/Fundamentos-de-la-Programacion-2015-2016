/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 2
// EJERCICIO 28
/*	
   Programa que proporciona los n�meros de una progresi�n geom�trica.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
#include <cmath>			// Se incluye la librer�a "cmath", necesaria para realizar c�lculos matem�ticos
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	int a1, r, k;
	int contador;
	int resultado;
	
	
	
	// Operaciones
	
	cout << "\nIntroduzca a1: ";
	cin >> a1;
	
	cout << "\nIntroduzca r: ";
	cin >> r;
	
	cout << "\nIntroduzca k: ";
	cin >> k;
	
	cout << "\n\n" << a1 << "";
	
	
	
	for(contador = 2; contador <= k; contador++){
		
		
		resultado = a1 * pow(r, contador-1);
		
		cout << ", " << resultado << "";
		
	
	}

	return(0);
}
