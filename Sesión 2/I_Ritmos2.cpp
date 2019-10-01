/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 1
// EJERCICIO 2
/*	
   Programa que transforma la velocidad en ritmo.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "cmath", necesaria para realizar c�lculos matem�ticos
#include <cmath>        // Librer�a matem�tica
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	double minutos; 	 		// Minutos que tarda el atleta en recorrer un kil�metro, estando los segundos en una variable separada
	double segundos;			// Segundos
	double horas;				// Minutos y segundos convertidos a horas
	double velocidad;			// Velocidad en km/h
	
	// Entrada de datos
	
	cout << "\nIntroduzca la velocidad: ";
	cin >> velocidad;
	

	//Operaciones
	
	horas = 1 / velocidad;
	
	minutos = horas * 60;
	
	segundos = minutos * 60;
	
	
	// Salida de datos

	cout << "\n\nEl ritmo del atleta es " << minutos << " minutos, o " << segundos << " segundos.";

	return(0);
}
