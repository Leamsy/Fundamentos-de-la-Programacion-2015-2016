/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 2
// EJERCICIO 17
/*	
   Programa que proporciona los d�gitos de un n�mero por separado.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
#include <cmath>
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	int numero, numero_aux1, numero_aux2, n_digitos, contador;			
	
	
	// Entrada de datos
	
	do{
		
		cout << "Introduzca un n�mero entero: ";
		cin >> numero;
	
	}while (numero % 1 != 0);
	
	
	//C�lculos
	
	numero_aux1 = numero;
	
	numero_aux2 = numero;
	
	n_digitos = 1;
	
	while (numero_aux1 > 9){
		
		numero_aux1 = numero_aux1 / 10;
		
		n_digitos = n_digitos + 1;
	
	}
	
	
	contador = n_digitos - 1;
	
	while (contador >= 0){
	
		numero_aux2 = numero / pow(10, contador);
	
		cout << " " <<numero_aux2<< " ";
	
		contador = contador - 1;
		
		
		// EJERCICIO INCOMPLETO, NO SE SEGUIR A PARTIR DE AQU�
	
	
	}

	return(0);
}
