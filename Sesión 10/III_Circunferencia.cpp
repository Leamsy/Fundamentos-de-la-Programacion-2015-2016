/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 3
// EJERCICIO 34
/*	
   Programa para definir varias caracteríasticas de una circunferencia.
*/
/***************************************************************************/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


class Circunferencia{
	
	private:
		
		int radio;
		double longitud, area;
		bool contiene;
		CoordenadasPunto2D punto;
		
	public:
		
		
		Circunferencia(int abscisa_c, int ordenada_c, int abscisa_p, int ordenada_p, int radio){
			
			Longitud(radio);
			Area(radio);
			Contiene(abscisa_c, ordenada_c, abscisa_p, ordenada_p, radio);
		}

		void Longitud(int radio){
			longitud = 2 * M_PI * radio;
		}
		
		void Area(int radio){
			area = M_PI * pow(radio,2);
		}
		
		
		void Contiene(int abscisa_c, int ordenada_c, int abscisa_p, int ordenada_p, int radio){
			
			if (pow(abscisa_c - abscisa_p,2) + pow(ordenada_c - ordenada_p,2) <= pow(radio,2)){
				contiene = true;
			}
			else{
				contiene = false;
			}
		}
		
		double GetLongitud(){
			
			return longitud;
		}
		
		double GetArea(){
			
			return area;
		}
		
		int GetContiene(){
			
			return contiene;
		}
			
};
		



int main()
{
	
	int radio;
	
	
	struct CoordenadasPunto2D{
			int abscisa_c;
			int ordenada_c;
			int abscisa_p;
			int ordenada_p;
	};
	
	CoordenadasPunto2D punto;

		
	cout << "\nIntroduzca la abscisa del centro: ";
	cin >> punto.abscisa_c;
	

		
	cout << "\nIntroduzca la ordenada del centro: ";
	cin >> punto.ordenada_c;
	
	do {
			
		cout << "\nIntroduzca el radio: ";
		cin >> radio;
		
	} while (radio < 0);
	
	cout << "\nIntroduzca la abscisa de un punto: ";
	cin >> punto.abscisa_p;
	
	cout << "\nIntroduzca la ordenada de un punto: ";
	cin >> punto.ordenada_p;
	
	
	Circunferencia circunferencia(punto.abscisa_c, punto.ordenada_c, punto.abscisa_p, 
		punto.ordenada_p, radio);
	
	
	cout << "\nLongitud: " <<circunferencia.GetLongitud()<< "";
	cout << "\nÁrea: " <<circunferencia.GetArea()<< "";
	
	if(circunferencia.GetContiene() == true){
		cout << "\nEl punto pertenece a la circunferencia";
	}
	else{
		cout << "\nEl punto no pertenece a la circunferencia";
	}
	
	return(0);
	
}
