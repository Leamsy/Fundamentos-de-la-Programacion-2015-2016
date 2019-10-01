/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 2
// EJERCICIO 16
/*	
   Programa que proporciona los divisores de un número
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
#include <cmath>			// Se incluye la librería matemática
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	double tope, divisor;			
	
	
	// Entrada de datos
	
	do{
		
		cout << "Introduzca un número entero: ";
		cin >> tope;
	
	}while (fmod (tope, 1) != 0);		// Usamos fmod ya que el operador "%" solo es válido con enteros
	
	
	//Cálculos
	
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
