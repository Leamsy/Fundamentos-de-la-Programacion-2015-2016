/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 2
// EJERCICIO 34
/*	
   Programa que determina si un número es narcisista
*/
/***************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int numero;

	// Entrada

	do {
		cout << "Introduce un número entero: ";
		cin >> numero;
	} while (numero <= 0);



	// Calcular el número de dígitos de "numero"	

	int numero_actual = numero;	
	
	int num_digitos = 0;
	
	while (numero_actual > 0) {
		
		numero_actual = numero_actual / 10;
		
		num_digitos++;
	}   
   
   
   // Extraer cada uno de los dígitos y sumarlos a "suma_narcisista"
   	
	numero_actual = numero;
	
	int suma_narcisista;
	
	
	int exponente = num_digitos-1;
	
	int potencia_10_actual;
	
   	int digito;
   	
	while (exponente >= 0 ) {

		
		potencia_10_actual = pow (10, exponente);	
		
		
		digito = numero_actual / potencia_10_actual;
		
		suma_narcisista = suma_narcisista + pow(digito,num_digitos); //Los dígitos se van sumando en la variable "narcisista".
		  
		numero_actual = numero_actual % potencia_10_actual;	

	
		exponente--;		
	}  	
	
	
	//Comprobar si el número es narcisista
	
	
	if(suma_narcisista == numero){
	
		cout << "\nEl número " <<numero<< " es narcisista";
		
	}
	
	if(suma_narcisista != numero){
	
		cout << "\nEl número " <<numero<< " no es narcisista";
		
	}

	return(0);
}
