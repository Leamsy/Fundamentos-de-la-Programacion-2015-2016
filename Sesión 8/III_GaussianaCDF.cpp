/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 3
// EJERCICIO 19
/*	
   Programa que determina un área según la función CDF.
*/
/***************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

Gaussiana(double x){
	
double resultado;
	
resultado = (exp(pow(x, 2) * (-0.5))) / (sqrt(2 * M_PI));

return(resultado);
}

CDF(double x){
	
	double b0, b1, b2, b3, b4, b5, t;
	double gaussiana;
	double resultado;
	
	
	b0 = 0.2316419;
	b1 = 0.319381530;
	b2 = -0.356563782;
	b3 = 1.781477937; 
	b4 = -1.821255978; 
	b5 = 1.330274429;
	
	t = 1 / (1 + (b0 * x));
	
	gaussiana = Gaussiana(x);
	
	resultado = 1 - (gaussiana * (b1 * t + b2 * pow(t,2) + b3 * pow(t,3) + b4 * pow(t,4) + b5 * pow(t,5)));
	
return(resultado);

}



int main()
{

	double x;
	double resultado;

	do {
		
		cout << "Introduce un número: ";
		cin >> x;
	
	} while (x <= 0);
	
	
	resultado = CDF(x);
	
	
		
	//Salida de datos
	
	cout << "\nÁrea hasta x = " <<resultado<< "";
	
	
	return(0);
}
