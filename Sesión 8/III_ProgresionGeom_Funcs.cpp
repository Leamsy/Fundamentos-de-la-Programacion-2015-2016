/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 3
// EJERCICIO 8
/*	
   Programa que proporciona los números de una progresión geométrica, ampliado 
		con funciones
*/
/***************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


long long SumaHasta(double termino_primero, double razon, int tope){
	
	cout.setf(ios::fixed);	
	cout.setf(ios::showpoint);
	
	
	double suma_total; 


	suma_total = termino_primero * ((pow(razon,tope) - 1) / (razon - 1));

	

return(suma_total);
}

long long SumaHastaInfinito(double termino_primero, double razon){
	
	cout.setf(ios::fixed);	
	cout.setf(ios::showpoint);
	
	
	if (razon > 0 && razon < 1){
	
	double suma_total; 


	suma_total = termino_primero / (1 - razon);

	return(suma_total);
	
	}
	
	else{
		
	return(-1);
	
	}
}

long long MultiplicaHasta(double termino_primero, double razon, int tope){
	
	
	cout.setf(ios::fixed);	
	cout.setf(ios::showpoint);
	
	
	double multi_total, termino_k; 

	termino_k = termino_primero * ((pow(razon,tope) - 1) / (razon - 1));

	multi_total = sqrt(pow((termino_primero * termino_k), tope));

	

return(multi_total);
}


int main()
{

	cout.setf(ios::fixed);	
	cout.setf(ios::showpoint);

	double termino_primero;
	double razon;
	double resultado, resultado_inf, resultado_multi;
	
	int tope;
	
	cout << "Primer termino: ";
	cin >> termino_primero;
	
	cout << "Razon: ";
	cin >> razon;

	do {
		
		cout << "Tope: ";
		cin >> tope;
	
	} while (tope < 1);

	
	resultado = SumaHasta(termino_primero, razon, tope);
	
	resultado_inf = SumaHastaInfinito(termino_primero, razon);
	
	resultado_multi = MultiplicaHasta(termino_primero, razon, tope);
	
	
	
	cout << "\nSuma hasta " << tope << " = " << setprecision (2) << resultado;
	
	cout << "\n\nSuma hasta infinito = " << setprecision (2) << resultado_inf;
	
	cout << "\n\nMultiplicación hasta " << tope << " = " << setprecision (2) << resultado_multi;
	
	

	return (0);
}
