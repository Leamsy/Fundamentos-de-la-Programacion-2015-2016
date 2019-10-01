/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 4
// EJERCICIO 1
/*	
   Programa que recibe las ventas de distintas sucursales y las clasifica de 
		distintas formas.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librería "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	
	int codigo = 100, unidades, aux;	
	char producto;
	int sucursal[codigo] = {0};
	int contador_operaciones = 0, contador_vendido = 0;
	int aux_mayor, unidades_total, mayor_resultado;
	bool mayor;
	
	
	do{
		
		cout << "\nIntroduzca la sucursal: ";
		cin >> aux;
		
		if(aux != -1){
			cout << "\n\tIntroduzca el producto: ";
			cin >> producto;
			
			cout << "\n\tIntroduzca las unidades: ";
			cin >> unidades;
			
			sucursal[aux] = sucursal[aux] + unidades;
			
			contador_operaciones++;
		}
		
	}while(aux != -1);
	
	//Cálculo de la sucursal con más ventas
	
	for(aux = 0; aux < codigo; aux++){
		
		mayor = true;
		for(aux_mayor = 0; aux_mayor < codigo; aux_mayor++){
			if(sucursal[aux] < sucursal[aux_mayor]){
				mayor = false;
			}
		}
		
		if(mayor == true){
			mayor_resultado = aux;
		}
	}
	
	cout << "\n\nLa sucursal con más ventas ha sido la " <<mayor_resultado<<
			" con " <<sucursal[mayor_resultado]<< " unidades.";
	
	// Lista de sucursales con ventas
	
	cout << "\n\nSucursal - Unidades";
	for(aux = 0; aux < codigo; aux++){
		if(sucursal[aux] != 0){
			cout << "\n" <<aux<< "";
			cout << " - " <<sucursal[aux]<< "";
			contador_vendido++;
		}
	}
	
	//Unidades vendidas en total
	
	unidades_total = 0;
	for(aux = 0; aux < codigo; aux++){
		unidades_total = unidades_total + sucursal[aux];
	}
	
	//Presentación de resultados
	
	cout << "\n\nNúmero de operaciones: " <<contador_operaciones<< "";
	cout << "\nNúmero de sucursales con ventas: " <<contador_vendido<< "";
	cout << "\nUnidades totales: " <<unidades_total<< "";
	
return(0);	
}
