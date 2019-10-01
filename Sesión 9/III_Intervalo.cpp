/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 3
// EJERCICIO 22
/*	
   Programa que calcula la pertenecia de un número a dicho intervalo y si éste
		 es vacío.
*/
/***************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Intervalo{
	
	public:
		
		int numero1, numero2, numerox, tipo;
		bool contiene, vacio;
		
		Intervalo(int tipo, int numero1, int numero2, int numerox){
			Contiene(tipo, numero1, numero2, numerox);
			Vacio(numero1, numero2);
		}
		
		void Contiene(int tipo, int numero1, int numero2, int numerox) {
		
			if(tipo == 1){
				
				if(numerox >= numero1 && numerox <= numero2){
					contiene = true;
				}
			
				else{
					contiene = false;
				}
			}
			
			if(tipo == 2){
				
				if(numerox >= numero1 && numerox < numero2){
					contiene = true;
				}
			
				else{
					contiene = false;
				}
			}
			
			if(tipo == 3){
				
				if(numerox > numero1 && numerox <= numero2){
					contiene = true;
				}
			
				else{
					contiene = false;
				}
			}
			
			
			
			if(tipo == 4){
				
				if(numerox > numero1 && numerox < numero2){
					contiene = true;
				}
			
				else{
					contiene = false;
				}
			}
			
		}
		
		void Vacio(int numero1, int numero2) {
			vacio = false;
			if(numero1 >= numero2){
				vacio = true;
			}
		}
};
		
		



int main()
{
	int tipo, numero1, numero2, numerox;

	do{
		
		cout << "Introduce un tipo de intervalo () = 1, (] = 2, [) = 3, [] = 4: ";
		cin >> tipo;
	}while(tipo < 1 || tipo > 4);
	
	cout << "Introduce el primer número del intervalo: ";
	cin >> numero1;
	
	cout << "Introduce el segundo número del intervalo: ";
	cin >> numero2;
	
	cout << "Introduce el número a comprobar: ";
	cin >> numerox;
	
	
	
	Intervalo intervalo(tipo, numero1, numero2, numerox);
	
	
	
	if(intervalo.contiene == true){
		
		cout << "\n\nEl intervalo contiene al número " <<numerox<< ".";
	
	}
	
	if(intervalo.contiene == false){
		
		cout << "\n\nEl intervalo no contiene al número " <<numerox<< ".";
	
	}
	
	if(intervalo.vacio == true){
		
		cout << "\n\nEl intervalo (" <<numero1<< ", " <<numero2<< ") es un "
			"intervalo vacío.";
	
	}
	
	
	return(0);
}
