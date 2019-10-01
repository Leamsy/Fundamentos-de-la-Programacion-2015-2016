/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 1
// EJERCICIO 15
/*	
   Programa que transforma horas, minutos y segundos a su rango correspondiente.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
#include <cmath>        // Librería matemática
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	int horas1, minutos1, segundos1;				// Variables temporales a convertir
	
	int horas2, minutos2;							// Variables auxiliares
	
	int horasf, minutosf, segundosf, dias;		// Variables ya convertidas
	
	
	
	// Entrada de datos
	
	cout << "\nIntroduzca las horas: ";
	cin >> horas1;
	
	cout << "\nIntroduzca los minutos: ";
	cin >> minutos1;
	
	cout << "\nIntroduzca los segundos: ";
	cin >> segundos1;
	

	//Operaciones
	
	segundosf = segundos1 % 60;
	
	minutos2 = segundos1 / 60 + minutos1;
	
	minutosf = minutos2 % 60;
	
	horas2 = minutos2 / 60 + horas1;
	
	horasf = horas2 % 24;
	
	dias = horas2 / 24;

	// Salida de datos

	cout << "\n\nDías: " << dias << "";
	
	cout << "\n\nHoras: " << horasf << "";
	
	cout << "\n\nMinutos: " << minutosf << "";
	
	cout << "\n\nSegundos: " << segundosf << "";

	return(0);
}
