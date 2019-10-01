/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 1
// EJERCICIO 20
/*	
   Programa que transforma un carácter en minúscula a mayúscula.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
#include <cmath>        // Librería matemática
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	char caracter_mayus; 		// El caracter a pasar a minúscula
	char caracter_minus;			// El carácter convertido
	
	// Entrada de datos
	
	cout << "\nIntroduzca el carácter en mayúscula: ";
	cin >> caracter_mayus;
	

	//Operaciones
	
	caracter_minus = caracter_mayus + 32; 	// Le sumamos 32 porque es la diferencia entre 
	                                       // mayúsculas y minúsculas en la codificación unicode
	

	// Salida de datos

	cout << "\n\nSu carácter en minúscula es: " << caracter_minus << "";

	return(0);
}
