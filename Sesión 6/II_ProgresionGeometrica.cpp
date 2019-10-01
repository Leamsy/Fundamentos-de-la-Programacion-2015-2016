/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 2
// EJERCICIO 28
/*	
   Programa que proporciona los números de una progresión geométrica.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
#include <cmath>			// Se incluye la librería "cmath", necesaria para realizar cálculos matemáticos
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
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
