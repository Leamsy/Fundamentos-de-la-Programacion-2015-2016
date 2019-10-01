/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 2
// EJERCICIO 19
/*	
   Programa que calcula cuantos a�os se tardar� en doblar un capital seg�n un inter�s determinado.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "cmath", necesaria para realizar c�lculos matem�ticos
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	double capital_i; 	 	// Capital inicial
	double capital_f;			// Capital final
	double interes;			// Inter�s generado por el capital depositado
	double ganancia_anual;	// Capital generado en un a�o
	double anos;    			// A�os que pasar�n hasta doblar el capital
	
	// Entrada de datos
	
	cout << "\nIntroduzca el capital: ";
	cin >> capital_i;
	
	cout << "\nIntroduzca el % de inter�s: ";
	cin >> interes;

	//Operaciones


	ganancia_anual = capital_i * interes / 100; 
	
	capital_f = capital_i;
	
	anos = 0;
	
	
	while (capital_f < (capital_i * 2)){
	
		capital_f = capital_f + ganancia_anual;
		
		anos = anos + 1;

	}

	// Salida de datos

	cout << "\n\nSe tardar�n " << anos << " a�os en doblar el capital inicial.";

	return(0);
}
