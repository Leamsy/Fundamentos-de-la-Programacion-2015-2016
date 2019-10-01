/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 2
// EJERCICIO 12
/*	
   Programa que determina si 2 n�meros son divisibles entre s�.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	int numero1;		// Primer n�mero
	int numero2; 	 	// Segundo n�mero
	
	
	// Entrada de datos
	
	
	cout << "\nIntroduzca el primer n�mero: ";
	cin >> numero1;
	cout << "\nIntroduzca el segundo n�mero: ";
	cin >> numero2;
	

	//Operaciones y salida de datos
	
	if (numero1 % numero2 == 0){
		
		cout << "\n\n" << numero1 << " es divisible entre " << numero2 << ".";
		
		}
	
	if (numero2 % numero1 == 0){
		
		cout << "\n\n" << numero2 << " es divisible entre " << numero1 << ".";
		
		}
		
	
	if (numero1 % numero2 != 0 && numero2 % numero1 != 0){
		
		cout << "\n\nNing�n n�mero divide al otro.";
		
		}
		
		

	return(0);
}
