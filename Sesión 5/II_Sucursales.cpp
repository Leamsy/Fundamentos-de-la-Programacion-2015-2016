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
	
	int sucursal, sucursal1, sucursal2, sucursal3, unidades;	
	char producto;
	
	
	// Entrada de datos y c�lculos
	
	
	
	while (sucursal != -1){
		
		cout << "\nintroduzca la sucursal: ";
		cin >> sucursal;
		
		if(sucursal == -1){
			
			if(sucursal1 > sucursal2 && sucursal1 > sucursal3){
		
				cout << "\nLa sucursal 1 ha sido la que ha vendido m�s unidades";
		
			}
	
	
			if(sucursal2 > sucursal1 && sucursal2 > sucursal3){
		
				cout << "\nLa sucursal 2 ha sido la que ha vendido m�s unidades";
		
			}
	
			if(sucursal3 > sucursal1 && sucursal3 > sucursal2){
		
				cout << "\nLa sucursal 3 ha sido la que ha vendido m�s unidades";
		
			}

		return(0);
		
		}
		
			
		
		cout << "\nintroduzca el producto: ";
		cin >> producto;
		
		cout << "\nintroduzca las unidades: ";
		cin >> unidades;
		
		if (sucursal == 1){
			
			sucursal1 = sucursal1 + unidades;
		
		}
		
		if (sucursal == 2){
			
			sucursal2 = sucursal2 + unidades;
		
		}
		
		if (sucursal == 3){
			
			sucursal3 = sucursal3 + unidades;
		
		}
	
	}
}
