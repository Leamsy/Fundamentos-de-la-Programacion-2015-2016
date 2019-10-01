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
#include <iomanip>
#include <cmath>
using namespace std;

Numero_Secuenciable(int numero){
	
	int k;
	int aux, suma, contador;
	
	
	contador = numero;
	
	
	while(contador > 0){
		
		suma = 0;
		aux = contador;
		
		while (aux > 0){
			
			suma = suma + numero - aux;
			
			
			if(suma == numero){
				
				k++;
				
			}
			
			aux --;
		
		}
		
		contador --;
	
	}
	
	
return(k);
}



int main()
{

	int numero, k;
	
	
	do {
		
		cout << "Introduce un n�mero: ";
		cin >> numero;
	
	} while (numero <= 0);
	
	
	k = Numero_Secuenciable(numero);
	
	
	cout << "\nEl n�mero " <<numero<< " tiene " <<k<< " descomposiciones posibles.";
	
	
	return(0);
}
