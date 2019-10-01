/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 1
// EJERCICIO 2
/*	
   Programa que pide un n�mero de yardas para convertirlo a millas, pies y 
		pulgadas.
   Entradas: Yardas a convertir.
   Salidas: El n�mero de yardas introducido anteriormente convertido a millas,
		 pies y pulgadas.
*/
/***************************************************************************/

#include <iostream> 		// Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de variables
	
	double yarda; 	 		// Entrada: Yardas
	double milla;			// Salida: Millas
	double pie;    		// Salida: Pies
	double pulgada;		// Salida: Pulgadas
	
	// Entrada de datos
	
	cout << "\nIntroduzca las yardas a convertir:";
	cin >> yarda;

	//Operaciones

	milla = 0.000568182 * yarda;
	pie = 3 * yarda;
	pulgada = 36 * yarda;

	// Salida de datos

	cout << "\nMillas: " << milla << "\n\n";
	cout << "\nPies: " << pie << "\n\n";
	cout << "\nPulgadas: " << pulgada << "\n\n";

	return(0);
}
