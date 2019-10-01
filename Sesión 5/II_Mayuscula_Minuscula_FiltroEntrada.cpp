/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 2
// EJERCICIO 14
/*	
   Programa que transforma una letra may�scula en min�scula, filtrando la entrada de datos.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	char letra_M, letra_m;		// Letras may�scula y min�scula

	
	// Entrada de datos
	
	
	do{
		
		cout << "Introduzca una letra may�scula: ";
		cin >> letra_M;
		
	}while (letra_M < 65 || 90 < letra_M);

	
	//Operaciones y salida de datos
	
	letra_m = letra_M + 32;
		
	
	cout << "\n\nLa min�scula correspondiente es: " <<letra_m<< "";
		
	return(0);
}
