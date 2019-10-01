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
   Programa que calcula la población china en 2 años.
   
   Salidas: Población china en 2 años.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definición de datos y variables
	
	double nacimiento_seg; 	 		// Nacimientos por segundo
	double muerte_seg;				// Muertes por segundo
	double emigracion_seg;    		// Emigraciones por segundo
	double tiempo; 					// Tiempo transcurrido en segundos
	double poblacion_futura;  		// Población en 2 años
	              
	
	//Operaciones
	nacimiento_seg = 0.534;
	muerte_seg = 0.305;
	emigracion_seg = 0.013;
	tiempo = 63072000;
	poblacion_futura = 1375570814 + tiempo * nacimiento_seg - tiempo * muerte_seg - tiempo * emigracion_seg ;


	// Salida de datos
	cout << "\nLa población china actual es de 1.375.570.814 personas.";
	cout << "\n\nLa población en China dentro de 2 años será de " << poblacion_futura << " personas.";

	return(0);
}
