/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 4
// EJERCICIO 4
/*	
   Programa que analiza las veces que se repite un caracter.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados


int main()
{

	string caracteres[100] = {0};
	int aux, aux_igual, contador;
	
	aux = 0;
	
	do{
		
		cout << "Introduce un caracter: ";
		caracteres[aux] = cin.get();
		
	}while (caracteres[aux] != "*");
	
	
	
	
	for(aux = 0; aux < 100; aux++){
		
		contador = 0;
		
		for(aux_igual = 0; aux_igual < 100; aux_igual++){
			if(caracteres[aux] == caracteres[aux_igual] && caracteres[aux_igual] != "0"){
				contador++;
			}
		}
		
		if(contador != 0){
				cout << "\n" <<caracteres[aux]<< " - " <<contador<< "";
		}
	}
	
	
return(0);	
}
