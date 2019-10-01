/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 1
// EJERCICIO 2
/*	
   Programa que divide las ganancias de un producto entr su dise�ador y sus 3 fabricantes, ganando el dise�ador el doble que los otros.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "cmath", necesaria para realizar c�lculos matem�ticos
#include <cmath>			// Librer�a matem�tica
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	double ganancias; 	 		// Ganancias totales
	double ganancias_d;			// Ganancias del dise�ador
	double ganancias_f;    		// Ganancias de cada uno de los 3 fabricantes
	
	// Entrada de datos
	
	cout << "\nIntroduzca las ganancias a repartir: ";
	cin >> ganancias;

	//Operaciones

	ganancias_d = 2/5 * ganancias;
	ganancias_f = 1/5 * ganancias;  


	// Salida de datos

	cout << "\n\nEl dise�ador recibe " << ganancias_d << " �.";
	cout << "\n\nCada uno de los fabricantes recibe " << ganancias_f << " �.";

	return(0);
}
