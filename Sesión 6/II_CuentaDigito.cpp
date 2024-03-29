/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 2
// EJERCICIO 33
/*	
   Programa que determina las veces que aparece un n�mero en un intervalo.
*/
/***************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int numero_clave, min, max;
	int contador;
	int numero_contador;
	int numero_actual;
	int numero_digitos;

	// Entradas

	do {
		
		cout << "Introduce un n�mero entero: ";
		cin >> numero_clave;
	
	} while (numero_clave <= 0);
	
	do {
		
		cout << "Introduce el m�nimo: ";
		cin >> min;
	
	} while (min <= 0);
	
	do {
		
		cout << "Introduce el m�ximo: ";
		cin >> max;
	
	} while (max <= 0);

	
	contador = 0;
	
	for (numero_contador = min; numero_contador <= max; numero_contador++){
		
	numero_actual = numero_contador;
	
	numero_digitos = 0;
	
	while (numero_actual > 0) {
		
		numero_actual = numero_actual / 10;
		
		numero_digitos++;
	}   
   
   
   // Extraer cada uno de los d�gitos
   
	
	int exponente = numero_digitos-1;
	
	int potencia_10_actual;
	
   int digito;
   
   numero_actual = numero_contador;
   	
	while (exponente >= 0 ) {

		
		potencia_10_actual = pow (10, exponente);	
		
		
		digito = numero_actual / potencia_10_actual;
		
		
		numero_actual = numero_actual % potencia_10_actual;	

	
		exponente--;	
		
			
		if(digito == numero_clave){
		
			contador++;
			
		}
	}  	
	
	
	}

	//Salida de datos
	
	cout << "\nEl n�mero " <<numero_clave<< " aparece " <<contador<< " veces.";
	
	
	return(0);
}
