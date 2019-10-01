/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 2
// EJERCICIO 15
/*	
   Programa que proporciona los segundos entre 2 instantes, no importa si son 
		de días distintos, incluyendo además filtro y orden de parada.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
#include <cmath>        // Librería matemática
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	int hora1;				// Hora del primer instante
	int minuto1; 	 		// Minutos del primer instante
	int segundo1;			// Segundo del primer instante
	int total1;				// Tiempo del primer instante en segundos
	
	int hora2;				// Hora del segundo instante
	int minuto2;			// Minuto del segundo instante
	int segundo2;			// Segundo del segundo instante
	int total2;				// Tiempo del segundo instante en segundos
	
	int tiempo;				// Tiempo transcurrido entre los 2 instantes
	
	
	
	// Entrada de datos
	
	
	do{
	
		cout << "\nIntroduzca la hora del primer instante: ";
		cin >> hora1;
		
	}while (hora1 < -1 || 23 < hora1);
	
	if (hora1 == -1){
		
		return(0);
		
		}
	
		
	do{
	
		cout << "\nIntroduzca el minuto del primer instante: ";
		cin >> minuto1;
	
	}while (minuto1 < 0 || 59 < minuto1);
	
	do{
	
		cout << "\nIntroduzca el segundo del primer instante: ";
		cin >> segundo1;
		
	}while (segundo1 < 0 || 59 < segundo1);
	
	
	
	do{
	
		cout << "\nIntroduzca la hora del segundo instante: ";
		cin >> hora2;
		
	}while (hora2 < 0 || 23 < hora2);
	
	do{
	
		cout << "\nIntroduzca el minuto del segundo instante: ";
		cin >> minuto2;
	
	}while (minuto2 < 0 || 59 < minuto2);
	
	do{
	
		cout << "\nIntroduzca el segundo del segundo instante: ";
		cin >> segundo2;
		
	}while (segundo2 < 0 || 59 < segundo2);
	

	//Operaciones
	
	if (hora1 < hora2){
	
		total1 = hora1 * 3600 + minuto1 * 60 + segundo1;
	
		total2 = hora2 * 3600 + minuto2 * 60 + segundo2;
	
		tiempo = total2 - total1;
	
		}
		
	
	if (hora2 < hora1){
		
		total1 = hora1 * 3600 + minuto1 * 60 + segundo1;
	
		total2 = hora2 * 3600 + minuto2 * 60 + segundo2;
	
		tiempo = total1 - total2;
		
		}
	
	
	// Salida de datos

	cout << "\n\nEl tiempo entre los 2 instantes es de " << tiempo << " segundos.";

	return(0);
}
