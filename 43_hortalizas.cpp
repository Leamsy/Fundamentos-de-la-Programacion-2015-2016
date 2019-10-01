/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 2
// EJERCICIO 22
/*	
   Programa que determina la sucursal que ha vendido m�s productos.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	char pais, espana, francia, alemania;
	char producto;
	int unidades;
	
	
	// Entrada de datos y c�lculos
	
	
	
	while (pais != '@'){
		
		cout << "\nIntroduzca el pa�s: ";
		
		cin >> pais;
		
		toupper(pais);
		
		if(pais == '@'){
			
			if(espana > francia && espana > alemania){
		
				cout << "\nEspa�a ha sido el pa�s que ha vendido m�s hortalizas con " <<espana<< " toneladas.";
		
			}
	
	
			if(francia > espana && francia > alemania){
		
				cout << "\nFrancia ha sido el pa�s que ha vendido m�s hortalizas con " <<francia<< " toneladas.";
		
			}
	
			if(alemania > espana && alemania > francia){
		
				cout << "\nAlemania ha sido el pa�s que ha vendido m�s hortalizas con " <<alemania<< " toneladas.";
		
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
