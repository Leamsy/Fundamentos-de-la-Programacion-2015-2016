/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 2
// EJERCICIO 14
/*	
   Programa que transforma una letra mayúscula en minúscula, filtrando la entrada de datos.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	char letra_M, letra_m;		// Letras mayúscula y minúscula

	
	// Entrada de datos
	
	
	do{
		
		cout << "Introduzca una letra mayúscula: ";
		cin >> letra_M;
		
	}while (letra_M < 65 || 90 < letra_M);

	
	//Operaciones y salida de datos
	
	letra_m = letra_M + 32;
		
	
	cout << "\n\nLa minúscula correspondiente es: " <<letra_m<< "";
		
	return(0);
}
