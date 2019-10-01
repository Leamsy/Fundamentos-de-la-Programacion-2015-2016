/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 3
// EJERCICIO 24
/*	
   Programa que calcula el resultado de la gaussiana y el CDF.
*/
/***************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Gaussiana{
	
	public:
		
		double x, esperanza, desviacion, resultado_gaussiana, cdf;
		
	
		Gaussiana(double x, double esperanza, double desviacion){
			Gauss(x, esperanza, desviacion);
			CDF(x);
		}
		
		void Gauss (double x, double esperanza, double desviacion){
			const double PI = 3.141592; 
		
			resultado_gaussiana = (exp (-0.5 * pow ((x - esperanza)/desviacion, 2))
			 / (desviacion * sqrt(2*PI)));
		}
		
		void CDF (double x){
			
			const double B0 =  0.231641900;
			const double B1 =  0.319381530;
			const double B2 = -0.356563782;
			const double B3 =  1.781477937;
			const double B4 = -1.821255978;
			const double B5 =  1.330274429;
		
			double t = 1.0 / (1 + B0*x);
			double t2 = t*t;
			double t3 = t2*t; // t*t*t
			double t4 = t3*t; // t*t*t*t
			double t5 = t4*t; // t*t*t*t*t
				
			double gauss_x =  resultado_gaussiana;
		
			cdf = 1 - gauss_x * (B1*t + B2*t2 + B3*t3 + B4*t4 + B5*t5);
		}

};
		
		



int main()
{
	
	double x, esperanza, desviacion;

	
	cout << "Valor de la abscisa: ";
	cin >> x;
	
	cout << "\nEsperanza = ";
	cin >> esperanza;
	
	do {
		cout << "\nDesviacion tipica = ";
		cin >> desviacion;
	} while (desviacion < 0);

	
	
	Gaussiana gauss(x, esperanza, desviacion);
	
	

	cout << "\nEl valor de la funcion gaussiana en " << x << " es " << gauss.resultado_gaussiana<< ".";
	
	cout << "\nEl valor de CDF(" <<x<< ") es " <<gauss.cdf<< ".";
	
	
	
	return(0);
}
