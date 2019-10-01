/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 3
// EJERCICIO 28 A
/*	
   Programa que reparte las ganancias entre el diseñador y los fabricantes.
*/
/***************************************************************************/

#include <iostream>
#include <string>
using namespace std;

		

class Nomina{
	
	public:
		
		double ganancias, ganancias_d, ganancias_f;

		
		Nomina(double ganancias){
			GananciasDisenador(ganancias);
			GananciasFabricante(ganancias);
		}

		double GananciasDisenador(double ganancias){
			
			ganancias_d = 0.4 * ganancias;
			
		return(ganancias_d); 
		}
		
		double GananciasFabricante(double ganancias){
			
			ganancias_f = 0.2 * ganancias; 
			
		return(ganancias_f); 
		}
};
		



int main()
{
	
	double ganancias;
	
	
	do {
		
		cout << "Introduzca las ganancias totales: ";
		cin >> ganancias;
	
	} while (ganancias < 0);
	
	
	Nomina nomina(ganancias);
	
	cout << "\nDiseñador: " <<nomina.ganancias_d<< "";
	cout << "\nFabricante: " <<nomina.ganancias_f<< "";

	

	return(0);
	
}
