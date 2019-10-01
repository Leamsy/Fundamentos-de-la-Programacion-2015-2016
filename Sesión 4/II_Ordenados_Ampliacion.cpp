/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 2
// EJERCICIO 13
/*	
   Programa que determina si 2 números están ordenados y el cómo lo están.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados



int main()
{
	// Definición de datos y variables
	
	double numero1, numero2, numero3;		// Los 3 números a evaluar
	bool ascendente, descendente;				// Variables booleanas que ayudarán con los cálculos
	
	
	// Entrada de datos
	
	
	cout << "\nIntroduzca el primer número: ";
	cin >> numero1;
	cout << "\nIntroduzca el segundo número: ";
	cin >> numero2;
	cout << "\nIntroduzca el tercer número: ";
	cin >> numero3;
	

	//Operaciones y salida de datos
	
	if (numero1 < numero2 && numero2 < numero3){
		
		cout << "\n\nLos números están ordenados de forma ascendente.";
		
		ascendente = true;
		
		}
	
	if (numero3 < numero2 && numero2 < numero1){
		
		cout << "\n\nLos números están ordenados de forma descendente.";
		
		descendente = true;
		
		}
		
		
		if (ascendente == false && descendente == false){
		
		cout << "\n\nLos números no están ordenados de ninguna forma.";
		
		}
	
	return(0);
}
