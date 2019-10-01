/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 2
// EJERCICIO 11
/*	
   Programa que determina la renta neta de un trabajador seg�n varios factores que alteran su retenci�n.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	
	double renta_bruta, renta_neta, retencion; 	 	// Rentas bruta y neta y retenci�n del asalariado
	bool autonomo, pensionista, casado;					// Diferentes condiciones para alterar la retencion
	
	
	// Entrada de datos
	
	
	cout << "\nIntroduzca su renta bruta: ";
	cin >> renta_bruta;
	
	cout << "\nIntroduzca su retenci�n actual: ";
	cin >> retencion;
	
	cout << "\n�Es usted aut�nomo?�S� (1) o no (0)?: ";
	cin >> autonomo;

	cout << "\n�Es usted pensionista?�S� (1) o no (0)?: ";
	cin >> pensionista;
	
	cout << "\n�Est� usted casado?�S� (1) o no (0)?: ";
	cin >> casado;
	
	
	//Operaciones y salida de datos
	
	retencion = retencion / 100;
	
	if (autonomo == true){
		
		retencion = retencion - 0.03;
		
		}
		
	else{
		
		if (pensionista == true){
		
			retencion = retencion + 0.01;
		
			}
		
		else{
			
			retencion = retencion + 0.02;
			
			if (renta_bruta < 20000){
		
			retencion = retencion + 0.02;
		
			}
			
			if (20000 < renta_bruta && casado == true){
		
			retencion = retencion + 0.025;
		
			}
			
			if (20000 < renta_bruta && casado == false){
		
			retencion = retencion + 0.03;
		
			}
			
			}
		}
	
	renta_neta = renta_bruta - renta_bruta * retencion;
		
	cout << "\n\nSu renta neta es de " << renta_neta << " �.";
		
	return(0);
}
