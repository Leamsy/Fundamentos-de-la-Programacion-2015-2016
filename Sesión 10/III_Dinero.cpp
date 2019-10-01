/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 3
// EJERCICIO 29
/*	
   Programa que expresa euros y centimos en su rango correspondiente.
*/
/***************************************************************************/

#include <iostream>
#include <string>
using namespace std;

		

class Dinero{
	
	private:
		
		
		int euros, centimos;

	public:
		
		Dinero(int eur, int cent){
			
			CentimosAEuros(eur, cent);
		}

		void CentimosAEuros(int eur, int cent){
		
			
			
			while(cent > 100){
				cent = cent - 100;
				eur = eur + 1;
			}
			
			euros = eur;
			centimos = cent;
			
		}
		
		
		int GetCentimos(){
			
			return centimos;
		}
		
		int GetEuros(){
			
			return euros;
		
		}
			
			
};
		



int main()
{
	
	int euros, centimos;
	
	
	do {
		
		cout << "Introduzca los euros: ";
		cin >> euros;
	
	} while (euros < 0);
	
	do {
		
		cout << "Introduzca los centimos: ";
		cin >> centimos;
	
	} while (centimos < 0);
	
	
	Dinero dinero(euros, centimos);
	
	
	cout << "\n" <<dinero.GetEuros()<< "�";
	cout << "\n" <<dinero.GetCentimos()<< "c";
	
	
	return(0);
	
}
