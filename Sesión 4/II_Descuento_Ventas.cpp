/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 2
// EJERCICIO 9
/*	
   Programa que determina el descuanto aplicado a una compra seg�n las unidades adquiridas y el coste de �sta.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	double coste1, coste2;		// Coste de la compra inicial y final
	double unidades; 	 			// Unidades compradas
	
	
	// Entrada de datos
	
	
	cout << "\nIntroduzca el coste de su compra: ";
	cin >> coste1;
	
	cout << "\nIntroduzca el n�mero de unidades adquiridas: ";
	cin >> unidades;

	//Operaciones y salida de datos
	
	if (700 < coste1 && 100 < unidades){
		
		coste2 = coste1 - coste1 * 0.02 - coste1 * 0.03;
		
		}
		
	
	if (coste1 < 700 && 100 < unidades){
		
		coste2 = coste1 - coste1 * 0.03;
		
		}
	
	if (coste1 < 700 && unidades < 100){
	
		coste2 = coste1;
		
		}
		
	cout << "\n\nDeber� abonar un pago de " << coste2 << " �.";
		
	return(0);
}
