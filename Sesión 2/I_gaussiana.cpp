/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 1
// EJERCICIO 2
/*	
   Programa que proporciona el valor de la función gaussiana conociendo la media, la desviación y x.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "cmath", necesaria para realizar cálculos matemáticos
#include <cmath>        // Librería matemática
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	double desviacion;		// Desviación típica
	double media;				// Media
	double x;					// Abscisa
	double valor_f;			// Valor que toma la función en x
	double exp_e;				// El exponente de e en la función
	
	// Entrada de datos
	
	cout << "\nIntroduzca la desviación típica: ";
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

	cout << "\n\nEl valor de la función gaussiana en x es: " << valor_f << "";

	return(0);
}
