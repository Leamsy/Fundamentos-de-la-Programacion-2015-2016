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
   Programa que intercambia 2 edades, la de Pedro y la de Juan.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "cmath", necesaria para realizar c�lculos matem�ticos
#include <cmath>        // Librer�a matem�tica
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
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

	cout << "\n\nLa edad de Pedro es de " << edad_Pedro << " a�os.";
	cout << "\n\nLa edad de Juan es de " << edad_Juan << " a�os.";

	return(0);
}
