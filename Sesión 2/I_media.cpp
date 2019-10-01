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
   Programa que calcula la media aritm�tica y la desviaci�n estandar de 3 alturas.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "cmath", necesaria para realizar c�lculos matem�ticos
#include <cmath>        // Librer�a matem�tica
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	double altura1; 	 		// Primera altura
	double altura2;			// Segunda altura
	double altura3;         // Tercera altura
	double media;				// Media de las 3 alturas
	double desviacion;		// Desviaci�n
	
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
	cout << "\n\nLa desviaci�n estandar es " << desviacion << "\n";

	return(0);
}
