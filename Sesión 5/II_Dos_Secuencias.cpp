/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 2
// EJERCICIO 22
/*	
   Programa que declara la secuéncia con el mayor número.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	int dato, mayor1, mayor2;			
	
	
	// Entrada de datos y cálculos
	
	mayor1 = 0;
	mayor2 = 0;
	
	dato = 1;
	
	cout << "\nIntroduzca una primera secuencia de números (deténgase con el 0):";
	
	while (dato != 0){
		
		cout << "\n ";
		cin >> dato;
		
		if (dato > mayor1){
			
			mayor1 = dato;
		
		}
	
	}
	
	dato = 1;
	
	cout << "\nIntroduzca una segunda secuencia de números (deténgase con el 0):\n";
	
	while (dato != 0){
		
		cout << "\n ";
		cin >> dato;
		
		if (dato > mayor2){
			
			mayor2 = dato;
		
		}
	
	}
	
	if(mayor2 > mayor1){
		
		cout << "\nLos números de la segunda secuencia son mayores que los de la primera.";
		
	}
	
	
	if(mayor1 > mayor2){
		
		cout << "\nLos números de la primera secuencia son mayores que los de la segunda.";
		
	}
	
	if(mayor1 == mayor2){
		
		cout << "\nLos números de la primera y la segunda secuancia son igual de grandes.";
		
	}

	return(0);
}
