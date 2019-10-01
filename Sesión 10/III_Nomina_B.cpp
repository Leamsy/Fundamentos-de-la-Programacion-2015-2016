/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 3
// EJERCICIO 28 B
/*	
   Programa que reparte las ganancias entre el diseñador y los fabricantes.
*/
/***************************************************************************/

#include <iostream>
#include <string>
using namespace std;

		

class Nomina{
	
	public:
		
		double ganancias;
		double ganancias_d, ganancias_f;
		double retencion, ganancias_d_netas, ganancias_f_netas;

		
		Nomina(double ganancias, double retencion){
			GananciasDisenador(ganancias, retencion);
			GananciasFabricante(ganancias, retencion);
		}

		void GananciasDisenador(double ganancias, double retencion){
			
			ganancias_d = 0.4 * ganancias;
			ganancias_d_netas = ganancias_d - (ganancias_d * retencion / 100);
		}
		
		void GananciasFabricante(double ganancias, double retencion){
			
			ganancias_f = 0.2 * ganancias;
			ganancias_f_netas = ganancias_f - (ganancias_f * retencion / 100);
		}
};
		



int main()
{
	
	double ganancias, retencion;
	
	
	do {
		
		cout << "Introduzca las ganancias totales: ";
		cin >> ganancias;
	
	} while (ganancias < 0);
	
	do {
		
		cout << "Introduzca la retención fiscal: ";
		cin >> retencion;
	
	} while (retencion < 0);
	
	
	Nomina nomina(ganancias, retencion);
	
	cout << "\nDiseñador (bruto): " <<nomina.ganancias_d<< "";
	cout << "\nDiseñador (neto): " <<nomina.ganancias_d_netas<< "";
	cout << "\n\nFabricante (bruto): " <<nomina.ganancias_f<< "";
	cout << "\nFabricante (neto): " <<nomina.ganancias_f_netas<< "";

	

	return(0);
	
}
