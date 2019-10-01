/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 3
// EJERCICIO 23
/*	
   Programa que calcula varios resultados de una progresión geométrica.
*/
/***************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

TerminoF (int i, double termino_primero, double razon) 
{
	return (termino_primero * pow (razon, i-1));
}


class Geometrica{
	
	public:
		
		double termino_primero, razon, suma_total, producto_total, suma_infinito;
		int tope, i, termino_i;
		
		
		Geometrica(double termino_primero, double razon, int tope){
			SumaHasta(termino_primero, razon, tope);
			MultiplicaHasta(termino_primero, razon, tope);
			SumaHastaInfinito(termino_primero, razon);
			Termino(termino_primero, razon, tope);
		}
		
		void SumaHasta(double termino_primero, double razon, int tope){
			
			suma_total = termino_primero;
	
			for (int i=2; i <= tope; i++) { 
				suma_total += TerminoF(i, termino_primero, razon);		
			}
		}
		
		void MultiplicaHasta (double termino_primero, double razon, int tope){
		
			producto_total = termino_primero;


			for (int i=2; i <= tope; i++) {
			producto_total *= TerminoF(i, termino_primero, razon);
			}
		}
		
		void SumaHastaInfinito (double termino_primero, double razon){
			suma_infinito = (termino_primero / (1 - razon));
		}
		
		void Termino (double termino_primero, double razon, int tope){
			
			termino_i = termino_primero * pow (razon, tope-1);
		}
		
};
		
		



int main()
{
	
	double termino_primero, razon; 

	int tope;
	
	
	cout << "Primer termino de la progresion: ";
	cin >> termino_primero;
	
	cout << "Razon de la progresion: ";
	cin >> razon;

	do {
		cout << "Indice (debe ser >=1) del ultimo termino a sumar: ";
		cin >> tope;
	} while (tope < 1);
	
	
	
	Geometrica progresion(termino_primero, razon, tope);
	
	
	
	cout << "\n\n\nLa suma total es " <<progresion.suma_total<< ".";
	cout << "\n\n\nEl producto total es " <<progresion.producto_total<< ".";
	cout << "\n\n\nLa suma total hasta infinito (sólo si 0 < razon < 1) es " <<progresion.suma_infinito<< ".";
	cout << "\n\n\nEl término i es " <<progresion.termino_i<< ".";
	
	
	
	return(0);
}
