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
   Programa que transforma el ritmo en velocidad.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "cmath", necesaria para realizar cálculos matemáticos
#include <cmath>        // Librería matemática
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	double minutos; 	 		// Minutos que tarda el atleta en recorrer un kilómetro, estando los segundos en una variable separada
	double segundos;			// Segundos
	double horas;				// Minutos y segundos convertidos a horas
	double velocidad;			// Velocidad en km/h
	
	// Entrada de datos
	
	cout << "\nIntroduzca los minutos: ";
	cin >> minutos;
	cout << "\nIntroduzca los segundos: ";
	cin >> segundos;
	
	//Operaciones
	
	horas = minutos / 60 + segundos / 3600;
	
	velocidad = 1 / horas;
	

	// Salida de datos

	cout << "\n\nLa velocidad del atleta es " << velocidad << " km/h";

	return(0);
}
