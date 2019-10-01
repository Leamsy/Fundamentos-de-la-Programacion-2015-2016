/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 2
// EJERCICIO 31
/*	
   Programa que proporciona unas ganancias segun inter�s y a�o.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	double capital_i, capital_aux;
	double ganancia_anual;
	double total_ano;
	double anos, ano_aux;
	int interes, interes_aux;
	
	// Entrada de datos
	
	cout << "\nIntroduzca el capital: ";
	cin >> capital_i;
	
	cout << "\nIntroduzca el % de inter�s: ";
	cin >> interes;
	
	cout << "\nIntroduzca los a�os: ";
	cin >> anos;

	
	//Operaciones



	for(interes_aux = 1; interes_aux <= interes; interes_aux++){
	
		
		cout << "\n\n\n\nC�lculos realizados al " <<interes_aux<< " %:";
		
		capital_aux = capital_i;
		
		for(ano_aux = 1; ano_aux <= anos; ano_aux++){
			
			
			ganancia_anual = capital_aux * interes_aux / 100; 
	
			total_ano = capital_aux + ganancia_anual;
	
		
			capital_aux = total_ano;
	
			cout << "\n\n\nTotal en el a�o n�mero " << ano_aux << ": " << total_ano << "";
	
			
		}
	}

	return(0);
}
