/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 3
// EJERCICIO 18
/*	
   Programa que determina una aproximaci�n al n�mero �ureo seg�n un valor dado.
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
