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
   Programa que calcula la media aritmética y la desviación estandar de 3 alturas.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "cmath", necesaria para realizar cálculos matemáticos
#include <cmath>        // Librería matemática
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	double altura1; 	 		// Primera altura
	double altura2;			// Segunda altura
	double altura3;         // Tercera altura
	double media;				// Media de las 3 alturas
	double desviacion;		// Desviación
	
	// Entrada de datos
	
	cout << "\nIntroduzca la primera altura: ";
	cin >> altura1;
	cout << "\nIntroduzca la segunda altura: ";
	cin >> altura2;
	cout << "\nIntroduzca la tercera altura: ";
	cin >> altura3;
	
	//Operaciones

	media = (altura1 + altura2 + altura3) / 3 ;
	
	desviacion = sqrt ((pow (altura1 - media, 2) + pow(altura2 - media, 2) + pow (altura3 - media, 2)) / 3);


	// Salida de datos

	cout << "\n\nLa media de las 3 alturas es " << media << "\n";
	cout << "\n\nLa desviación estandar es " << desviacion << "\n";

	return(0);
}
