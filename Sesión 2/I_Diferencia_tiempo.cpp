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
   Programa que proporciona los segundos entre 2 instantes del mismo día.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "cmath", necesaria para realizar cálculos matemáticos
#include <cmath>        // Librería matemática
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	double hora1;				// Hora del primer instante
	double minuto1; 	 		// Minutos del primer instante
	double segundo1;			// Segundo del primer instante
	double total1;				// Tiempo del primer instante en segundos
	
	double hora2;				// Hora del segundo instante
	double minuto2;			// Minuto del segundo instante
	double segundo2;			// Segundo del segundo instante
	double total2;				// Tiempo del segundo instante en segundos
	
	double tiempo;				// Tiempo transcurrido entre los 2 instantes
	
	
	
	// Entrada de datos
	
	cout << "\nIntroduzca la hora del primer instante: ";
	cin >> hora1;
	cout << "\nIntroduzca el minuto del primer instante: ";
	cin >> minuto1;
	cout << "\nIntroduzca el segundo del primer instante: ";
	cin >> segundo1;
	cout << "\nIntroduzca la hora del segundo instante: ";
	cin >> hora2;
	cout << "\nIntroduzca el minuto del segundo instante: ";
	cin >> minuto2;
	cout << "\nIntroduzca el segundo del segundo instante: ";
	cin >> segundo2;
	

	//Operaciones
	
	total1 = hora1 * 3600 + minuto1 * 60 + segundo1;
	
	total2 = hora2 * 3600 + minuto2 * 60 + segundo2;
	
	tiempo = total2 - total1;
	
	
	
	// Salida de datos

	cout << "\n\nEl tiempo entre los 2 instantes es de " << tiempo << " segundos.";

	return(0);
}
