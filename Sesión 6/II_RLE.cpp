/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 2
// EJERCICIO 30
/*	
   Programa que codifica una secuencia mediante el m�todo RLE.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{

	// Definici�n de datos y variables
	
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
