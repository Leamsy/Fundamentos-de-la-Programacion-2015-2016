/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 3
// EJERCICIO 18
/*	
   Programa que determina una aproximación al número áureo según un valor dado.
*/
/***************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;


int main()
{

	const int TAM = 100;
	char cadena[TAM];
	char *posicion, *posicion2 = &cadena[0];
	int resultado;
	

	cout << "Cadena: ";
	
	cin.getline (cadena, TAM);
	
	posicion = strchr (cadena, ' ');
	
	resultado = posicion - posicion2 +1;

	cout << resultado;
	
	return(0);
}
