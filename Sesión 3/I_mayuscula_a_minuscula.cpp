/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 1
// EJERCICIO 20
/*	
   Programa que transforma un car�cter en min�scula a may�scula.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
#include <cmath>        // Librer�a matem�tica
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	char caracter_mayus; 		// El caracter a pasar a min�scula
	char caracter_minus;			// El car�cter convertido
	
	// Entrada de datos
	
	cout << "\nIntroduzca el car�cter en may�scula: ";
	cin >> caracter_mayus;
	

	//Operaciones
	
	caracter_minus = caracter_mayus + 32; 	// Le sumamos 32 porque es la diferencia entre 
	                                       // may�sculas y min�sculas en la codificaci�n unicode
	

	// Salida de datos

	cout << "\n\nSu car�cter en min�scula es: " << caracter_minus << "";

	return(0);
}
