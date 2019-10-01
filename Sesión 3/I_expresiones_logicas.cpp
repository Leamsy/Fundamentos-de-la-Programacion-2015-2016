/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 1
// EJERCICIO 25
/*	
   Varios programas para practicar con las variables booleanas.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
#include <cmath>        // Librer�a matem�tica
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	char letra; 				// El caracter a evaluar
	bool mayor1, menor1;		// Variables booleanas
	
	
	// Entrada de datos
	
	cout << "\nIntroduzca una letra min�scula: ";
	cin >> letra;
	

	//Operaciones
	
	mayor1 = 96 < letra;
	
	menor1 = letra < 123;

	// Salida de datos

	cout << "\n\n�Verdadero (1) o falso (0)?: " << (mayor1 && menor1) << "";
	
	
	
	//----------------------------------------------------------------------------------------------------------------------------
	//----------------------------------------------------------------------------------------------------------------------------
	
	
	
	// Definici�n de datos y variables
	
	int edad; 					// La edad a evaluar
	bool mayor2, menor2;		// Variables booleanas
	
	
	// Entrada de datos
	
	cout << "\n\n-----------------------------------------------------"
				"\n\nIntroduzca una edad menor de 18 o mayor de 65: ";
	cin >> edad;
	

	//Operaciones
	
	mayor2 = 65 < edad;
	
	menor2 = edad < 18;

	// Salida de datos

	cout << "\n\n�Verdadero (1) o falso (0)?: " << (mayor2 || menor2) << "";
	
	

	//----------------------------------------------------------------------------------------------------------------------------
	//----------------------------------------------------------------------------------------------------------------------------
	
	
	
	// Definici�n de datos y variables
	
	int ano; 												// El a�o a evaluar
	bool condicion1, condicion2, condicion3;		// Variables booleanas
	
	
	// Entrada de datos
	
	cout << "\n\n-----------------------------------------------------"
				"\n\nIntroduzca un a�o: ";
	cin >> ano;
	

	//Operaciones
	
	condicion1 = ano % 4 < 1;
	
	condicion2 = ano % 100 > 0;
	
	condicion3 = ano % 400 < 1;

	// Salida de datos

	cout << "\n\n�Bisiesto (1) o no bisiesto (0)?: " << ((condicion1 && condicion2) || condicion3) << "";

	return(0);
}
