/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 2
// EJERCICIO 19
/*	
   Programa que calcula cuantos años se tardará en doblar un capital según un interés determinado.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "cmath", necesaria para realizar cálculos matemáticos
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	double capital_i; 	 	// Capital inicial
	double capital_f;			// Capital final
	double interes;			// Interés generado por el capital depositado
	double ganancia_anual;	// Capital generado en un año
	double anos;    			// Años que pasarán hasta doblar el capital
	
	// Entrada de datos
	
	cout << "\nIntroduzca el capital: ";
	cin >> capital_i;
	
	cout << "\nIntroduzca el % de interés: ";
	cin >> interes;

	//Operaciones


	ganancia_anual = capital_i * interes / 100; 
	
	capital_f = capital_i;
	
	anos = 0;
	
	
	while (capital_f < (capital_i * 2)){
	
		capital_f = capital_f + ganancia_anual;
		
		anos = anos + 1;

	}

	// Salida de datos

	cout << "\n\nSe tardarán " << anos << " años en doblar el capital inicial.";

	return(0);
}
