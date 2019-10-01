/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// RELACI�N DE PROBLEMAS 3
// EJERCICIO 22
/*	
   Programa que calcula la pertenecia de un n�mero a dicho intervalo y si �ste
		 es vac�o.
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
	
	cout << "Introduce el primer n�mero del intervalo: ";
	cin >> numero1;
	
	cout << "Introduce el segundo n�mero del intervalo: ";
	cin >> numero2;
	
	cout << "Introduce el n�mero a comprobar: ";
	cin >> numerox;
	
	
	
	Intervalo intervalo(tipo, numero1, numero2, numerox);
	
	
	
	if(intervalo.contiene == true){
		
		cout << "\n\nEl intervalo contiene al n�mero " <<numerox<< ".";
	
	}
	
	if(intervalo.contiene == false){
		
		cout << "\n\nEl intervalo no contiene al n�mero " <<numerox<< ".";
	
	}
	
	if(intervalo.vacio == true){
		
		cout << "\n\nEl intervalo (" <<numero1<< ", " <<numero2<< ") es un "
			"intervalo vac�o.";
	
	}
	
	
	return(0);
}
