/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 2
// EJERCICIO 13
/*	
   Programa que determina si 2 n�meros est�n ordenados y el c�mo lo est�n.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados



int main()
{
	// Definici�n de datos y variables
	
	double numero1, numero2, numero3;		// Los 3 n�meros a evaluar
	bool ascendente, descendente;				// Variables booleanas que ayudar�n con los c�lculos
	
	
	// Entrada de datos
	
	
	cout << "\nIntroduzca el primer n�mero: ";
	cin >> numero1;
	cout << "\nIntroduzca el segundo n�mero: ";
	cin >> numero2;
	cout << "\nIntroduzca el tercer n�mero: ";
	cin >> numero3;
	

	//Operaciones y salida de datos
	
	if (numero1 < numero2 && numero2 < numero3){
		
		cout << "\n\nLos n�meros est�n ordenados de forma ascendente.";
		
		ascendente = true;
		
		}
	
	if (numero3 < numero2 && numero2 < numero1){
		
		cout << "\n\nLos n�meros est�n ordenados de forma descendente.";
		
		descendente = true;
		
		}
		
		
		if (ascendente == false && descendente == false){
		
		cout << "\n\nLos n�meros no est�n ordenados de ninguna forma.";
		
		}
	
	return(0);
}
