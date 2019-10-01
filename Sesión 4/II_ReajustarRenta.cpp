/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 2
// EJERCICIO 11
/*	
   Programa que determina la renta neta de un trabajador según varios factores que alteran su retención.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	
	double renta_bruta, renta_neta, retencion; 	 	// Rentas bruta y neta y retención del asalariado
	bool autonomo, pensionista, casado;					// Diferentes condiciones para alterar la retencion
	
	
	// Entrada de datos
	
	
	cout << "\nIntroduzca su renta bruta: ";
	cin >> renta_bruta;
	
	cout << "\nIntroduzca su retención actual: ";
	cin >> retencion;
	
	cout << "\n¿Es usted autónomo?¿Sí (1) o no (0)?: ";
	cin >> autonomo;

	cout << "\n¿Es usted pensionista?¿Sí (1) o no (0)?: ";
	cin >> pensionista;
	
	cout << "\n¿Está usted casado?¿Sí (1) o no (0)?: ";
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
		
	cout << "\n\nSu renta neta es de " << renta_neta << " €.";
		
	return(0);
}
