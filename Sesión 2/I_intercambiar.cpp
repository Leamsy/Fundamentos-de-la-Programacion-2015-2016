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
   Programa que intercambia 2 edades, la de Pedro y la de Juan.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "cmath", necesaria para realizar cálculos matemáticos
#include <cmath>        // Librería matemática
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	double edad_Pedro; 	 		// Edad de Pedro (futura edad de Juan)
	double edad_Juan;				// Edad de Juan (futura edad de Pedro)
	double edad_aux;           // Edad auxiliar necesaria para el intercambio
	
	// Entrada de datos
	
	cout << "\nIntroduzca la edad de Pedro: ";
	cin >> edad_Pedro;
	cout << "\nIntroduzca la edad de Juan: ";
	cin >> edad_Juan;
	
	//Operaciones

	edad_aux = edad_Pedro;
	edad_Pedro = edad_Juan;
	edad_Juan = edad_aux;


	// Salida de datos

	cout << "\n\nLa edad de Pedro es de " << edad_Pedro << " años.";
	cout << "\n\nLa edad de Juan es de " << edad_Juan << " años.";

	return(0);
}
