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
   Programa que proporciona el valor de la funci�n gaussiana conociendo la media, la desviaci�n y x.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "cmath", necesaria para realizar c�lculos matem�ticos
#include <cmath>        // Librer�a matem�tica
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	double desviacion;		// Desviaci�n t�pica
	double media;				// Media
	double x;					// Abscisa
	double valor_f;			// Valor que toma la funci�n en x
	double exp_e;				// El exponente de e en la funci�n
	
	// Entrada de datos
	
	cout << "\nIntroduzca la desviaci�n t�pica: ";
	cin >> desviacion;
	cout << "\nIntroduzca la media: ";
	cin >> media;
	cout << "\nIntroduzca el valor de la abscisa (x): ";
	cin >> x;
	

	//Operaciones
	
	pi = 3.14159265358979323846;
	
	exp_e = pow((x - media) / desviacion, 2) * (-0.5);
	
	valor_f = 1 / (desviacion * sqrt(2 * M_PI)) * exp(exp_e);
	

	// Salida de datos

	cout << "\n\nEl valor de la funci�n gaussiana en x es: " << valor_f << "";

	return(0);
}
