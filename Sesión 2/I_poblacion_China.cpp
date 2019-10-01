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
   Programa que calcula la poblaci�n china en 2 a�os.
   
   Salidas: Poblaci�n china en 2 a�os.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	double nacimiento_seg; 	 		// Nacimientos por segundo
	double muerte_seg;				// Muertes por segundo
	double emigracion_seg;    		// Emigraciones por segundo
	double tiempo; 					// Tiempo transcurrido en segundos
	double poblacion_futura;  		// Poblaci�n en 2 a�os
	              
	
	//Operaciones
	nacimiento_seg = 0.534;
	muerte_seg = 0.305;
	emigracion_seg = 0.013;
	tiempo = 63072000;
	poblacion_futura = 1375570814 + tiempo * nacimiento_seg - tiempo * muerte_seg - tiempo * emigracion_seg ;


	// Salida de datos
	cout << "\nLa poblaci�n china actual es de 1.375.570.814 personas.";
	cout << "\n\nLa poblaci�n en China dentro de 2 a�os ser� de " << poblacion_futura << " personas.";

	return(0);
}
