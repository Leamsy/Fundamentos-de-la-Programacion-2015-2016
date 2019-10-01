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
   Programa que determina la sucursal que ha vendido más productos.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	char pais, espana, francia, alemania;
	char producto;
	int unidades;
	
	
	// Entrada de datos y cálculos
	
	
	
	while (pais != '@'){
		
		cout << "\nIntroduzca el país: ";
		
		cin >> pais;
		
		toupper(pais);
		
		if(pais == '@'){
			
			if(espana > francia && espana > alemania){
		
				cout << "\nEspaña ha sido el país que ha vendido más hortalizas con " <<espana<< " toneladas.";
		
			}
	
	
			if(francia > espana && francia > alemania){
		
				cout << "\nFrancia ha sido el país que ha vendido más hortalizas con " <<francia<< " toneladas.";
		
			}
	
			if(alemania > espana && alemania > francia){
		
				cout << "\nAlemania ha sido el país que ha vendido más hortalizas con " <<alemania<< " toneladas.";
		
			}

		return(0);
		
		}
		
			
		
		cout << "\nintroduzca la hortaliza: ";
		cin >> producto;
		
		cout << "\nintroduzca las toneladas: ";
		cin >> unidades;
		
		if (pais == 'E'){
			
			espana = espana + unidades;
		
		}
		
		if (pais == 'F'){
			
			francia = francia + unidades;
		
		}
		
		if (pais == 'A'){
			
			alemania = alemania + unidades;
		
		}
	
	}
}
