/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 2
// EJERCICIO 30
/*	
   Programa que codifica una secuencia mediante el método RLE.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{

	// Definición de datos y variables
	
	int numero_nuevo, numero_antiguo;
	int contador;
	bool final;
	
	
	
	// Entrada de datos y operaciones
	
	
	numero_antiguo = -1;
	contador = 1;
	
	cin >> numero_nuevo;
	
	numero_antiguo = numero_nuevo;
	
	do{
	
	
		cin >> numero_nuevo;
		
		if(numero_nuevo == -1){
			
			final = true;
			
		}
		
		if(numero_nuevo == numero_antiguo){
			
			contador++;
			
			numero_antiguo = numero_nuevo;
			
			}
			
		if(numero_nuevo != numero_antiguo){
			
			cout << " " <<contador<< " " <<numero_antiguo<< " ";
			
			numero_antiguo = numero_nuevo;
			contador = 1;
			
			}
			
			
	}while(final == false);
	
	

	return(0);
}
