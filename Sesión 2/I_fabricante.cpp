/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 1
// EJERCICIO 2
/*	
   Programa que divide las ganancias de un producto entr su diseñador y sus 3 fabricantes, ganando el diseñador el doble que los otros.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "cmath", necesaria para realizar cálculos matemáticos
#include <cmath>			// Librería matemática
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	double ganancias; 	 		// Ganancias totales
	double ganancias_d;			// Ganancias del diseñador
	double ganancias_f;    		// Ganancias de cada uno de los 3 fabricantes
	
	// Entrada de datos
	
	cout << "\nIntroduzca las ganancias a repartir: ";
	cin >> ganancias;

	//Operaciones

	ganancias_d = 2/5 * ganancias;
	ganancias_f = 1/5 * ganancias;  


	// Salida de datos

	cout << "\n\nEl diseñador recibe " << ganancias_d << " €.";
	cout << "\n\nCada uno de los fabricantes recibe " << ganancias_f << " €.";

	return(0);
}
