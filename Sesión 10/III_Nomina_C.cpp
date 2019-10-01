/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 3
// EJERCICIO 28 C
/*	
   Programa que reparte las ganancias entre el diseñador y los fabricantes.
*/
/***************************************************************************/

#include <iostream>
#include <string>
using namespace std;

		

class Nomina{
	
	public:
		
		
		double ganancias, fabricantes, dinero_disenador;
		double ganancias_d, ganancias_f;
		double ganancias_d_netas, ganancias_f_netas;
		double retencion_disenador, retencion_fabricantes;

		
		Nomina(double ganancias, double fabricantes, 
			double dinero_disenador, double retencion_disenador, double retencion_fabricantes){
			
			GananciasDisenador(ganancias, dinero_disenador, retencion_disenador);
			GananciasFabricante(ganancias, fabricantes, retencion_fabricantes);
		}

		void GananciasDisenador(double ganancias, double dinero_disenador, 
			double retencion_disenador){
			
			ganancias_d = (1 / dinero_disenador) * ganancias;
			ganancias_d_netas = ganancias_d - (ganancias_d * retencion_disenador / 100);
		}
		
		void GananciasFabricante(double ganancias, double fabricantes, 
			double retencion_fabricantes){
			
			ganancias_f = ((ganancias - ganancias_d) / fabricantes);
			ganancias_f_netas = ganancias_f - (ganancias_f * retencion_fabricantes / 100);
		}
};
		



int main()
{
	
	int sucursales;
	double ganancias, fabricantes, dinero_disenador;
	double retencion_disenador, retencion_fabricantes;
	int contador;
	
	
	cin >> sucursales;
	
	for(contador = 0; contador < sucursales; contador++){
	
		cin >> ganancias;
		cin >> fabricantes;
		cin >> dinero_disenador;
		cin >> retencion_disenador;
		cin >> retencion_fabricantes;
		
	
		
		Nomina nomina(ganancias, fabricantes, dinero_disenador, 
			retencion_disenador, retencion_fabricantes);
		
		cout << "\nSucursal " <<contador + 1<< ":";
		cout << "\nDiseñador (neto): " <<nomina.ganancias_d_netas<< "";
		cout << "\nFabricante (neto): " <<nomina.ganancias_f_netas<< "\n";
	}

	return(0);
	
}
