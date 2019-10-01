/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 2
// EJERCICIO 16
/*	
   Programa que proporciona los divisores de un n�mero
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
#include <cmath>			// Se incluye la librer�a matem�tica
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	double tope, divisor;			
	
	
	// Entrada de datos
	
	do{
		
		cout << "Introduzca un n�mero entero: ";
		cin >> tope;
	
	}while (fmod (tope, 1) != 0);		// Usamos fmod ya que el operador "%" solo es v�lido con enteros
	
	
	//C�lculos
	
	divisor = 1;
	
	while (divisor <= tope){
	
		if (fmod (tope, divisor) == 0){
			
			cout << "\n\n" <<divisor<< "";
			
		}
	
		divisor = divisor + 1;
	
	}
	
	
	// Salida de datos

	cout << "\n\nEstos son todos los divisores de " << tope << "";

	return(0);
}
