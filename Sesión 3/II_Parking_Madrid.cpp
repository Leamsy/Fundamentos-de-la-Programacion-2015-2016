/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 2
// EJERCICIO 6
/*	
   Programa que determina la cantidad a pagar según el tiempo de estacionamiento en un párking.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
#include <cmath>        // Librería matemática
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	double tiempo;		// Tiempo de estacionamiento
	double pago; 	 	// Dinero a pagar
	
	
	// Entrada de datos
	
	
	cout << "\nIntroduzca el tiempo de estacionamiento: ";
	cin >> tiempo;
	

	//Operaciones y salida de datos
	
	if (tiempo <= 30){
		
		pago = tiempo * 0.0412;
		
		cout << "\n\nDeberá abonar un pago de " << pago << " €.";
		
		}
	
	
	if (31 < tiempo && tiempo <= 90){
		
		pago = 30 * 0.0412 + (tiempo - 30) * 0.0370;
		
		cout << "\n\nDeberá abonar un pago de " << pago << " €.";
		
		}
		
	
	if (91 < tiempo && tiempo <= 660){
		
		pago = 30 * 0.0412 + 59 * 0.0370 + (tiempo - 89) * 0.0493;
		
		cout << "\n\nDeberá abonar un pago de " << pago << " €.";
		
		}
		
	
	if (661 < tiempo && tiempo <= 1440){
		
		
		cout << "\n\nDeberá abonar un pago de 31.55 €.";
		
		}


	if (1440 < tiempo){
		
		cout << "\n\nHa excedido el tiempo máximo de estacionamiento, por lo que "
					"su coche \nha sido retirado. Deberá recogerlo en la grúa municipal.";
		
		}
		
	return(0);
}
