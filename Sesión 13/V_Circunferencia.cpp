/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 5
// EJERCICIO 3
/*	
   Programa para definir varias caracteríasticas de una circunferencia.
*/
/***************************************************************************/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Punto2D{
	
	private:
	
		int abscisa_p;
		int ordenada_p;
		
	public:
	
		
	
		Punto2D(){
			
			GetAbscisa_P();
			GetOrdenada_P();
		}
		
		int GetAbscisa_P(){
			return abscisa_p;
		}
		
		int GetOrdenada_P(){
			return ordenada_p;
		}
};

class Circunferencia{
	
	private:
		
		int abscisa_c;
		int ordenada_c;
		int abscisa_p;
		int ordenada_p;
		int radio;
		double longitud, area, diametro;
		bool contiene;
		Punto2D punto;
		
	public:
		
		
		Circunferencia(int abscisa_c, int ordenada_c, int radio){
			
			Longitud(radio);
			Area(radio);
			Diametro(radio);
			Contiene(abscisa_c, ordenada_c, radio);
		}

		void Longitud(int radio){
			longitud = 2 * M_PI * radio;
		}
		
		void Area(int radio){
			area = M_PI * pow(radio,2);
		}
		
		void Diametro(int radio){
			diametro = 2 * radio;
		}
		
		void Contiene(int abscisa_c, int ordenada_c, int radio){
			
			if (pow(abscisa_c - punto.GetAbscisa_P(),2) + pow(ordenada_c - punto.GetOrdenada_P(),2) <= pow(radio,2)){
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
		
		double GetDiametro(){
			
			return diametro;
		}
		
		int GetContiene(){
			
			return contiene;
		}
			
};
		



int main()
{
	
	int radio;
	int abscisa_c;
	int ordenada_c;
	int abscisa_p;
	int ordenada_p;
	
	

		
	cout << "\nIntroduzca la abscisa del centro: ";
	cin >> abscisa_c;
	

		
	cout << "\nIntroduzca la ordenada del centro: ";
	cin >> ordenada_c;
	
	do {
			
		cout << "\nIntroduzca el radio: ";
		cin >> radio;
		
	} while (radio < 0);
	
	cout << "\nIntroduzca la abscisa de un punto: ";
	cin >> abscisa_p;
	
	cout << "\nIntroduzca la ordenada de un punto: ";
	cin >> ordenada_p;
	
	
	Punto2D punto();
	
	Circunferencia circunferencia(abscisa_c, ordenada_c, radio);
	
	
	cout << "\nLongitud: " <<circunferencia.GetLongitud()<< "";
	cout << "\nÁrea: " <<circunferencia.GetArea()<< "";
	cout << "\nDiámetro: " <<circunferencia.GetDiametro()<< "";
	
	if(circunferencia.GetContiene() == true){
		cout << "\nEl punto pertenece a la circunferencia";
	}
	else{
		cout << "\nEl punto no pertenece a la circunferencia";
	}
	
	return(0);
	
}
