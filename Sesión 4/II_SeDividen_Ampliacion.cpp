/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 2
// EJERCICIO 12
/*	
   Programa que determina si 2 números son divisibles entre sí.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	int numero1;		// Primer número
	int numero2; 	 	// Segundo número
	
	
	// Entrada de datos
	
	
	cout << "\nIntroduzca el primer número: ";
	cin >> numero1;
	cout << "\nIntroduzca el segundo número: ";
	cin >> numero2;
	

	//Operaciones y salida de datos
	
	if (numero1 % numero2 == 0){
		
		cout << "\n\n" << numero1 << " es divisible entre " << numero2 << ".";
		
		}
	
	if (numero2 % numero1 == 0){
		
		cout << "\n\n" << numero2 << " es divisible entre " << numero1 << ".";
		
		}
		
	
	if (numero1 % numero2 != 0 && numero2 % numero1 != 0){
		
		cout << "\n\nNingún número divide al otro.";
		
		}
		
		

	return(0);
}
