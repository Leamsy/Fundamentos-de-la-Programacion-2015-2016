/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACIÓN
// GRADO EN INGENIERÍA INFORMÁTICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1ºB - GRUPO 3
//
// RELACIÓN DE PROBLEMAS 3
// EJERCICIO 21
/*	
   Programa que calcula la nota final de un alumno.
*/
/***************************************************************************/

#include <iostream>
#include <string>
using namespace std;

		

class MenuOperaciones{
	
	public:
		
		int a, b, c, operaciones, pendiente, x, y;
		
		MenuOperaciones(int a, int b, int c, int x, int y){
			Pendiente(a, b);
			Abscisa(a, b, c, y);
			Ordenada(a, b, c, x);
		}
		
		void Pendiente(int a, int b){
			pendiente = (-a) / b;
		}
		
		void Abscisa(int a, int b, int c, int y){
			x = (-c - y*b) / a;
		}
		
		void Ordenada(int a, int b, int c, int x){
			y = (-c - x*a) / b;
		}
};
		



int main()
{
	
	int principal;
	int a, b, c;
	int operaciones;
	int x, y;

	
	
	do {
		
		cout << "¿Desea introducir los cálculos (1) o salir del programa (2)?: ";
		cin >> principal;
	
	} while (principal < 1 || principal > 2);
	
	
	if(principal == 1){
		
		cout << "\nA: ";
		cin >> a;
		
		cout << "\nB: ";
		cin >> b;
		
		cout << "\nC: ";
		cin >> c;
		
		
			do {
		
				cout << "\n\t¿Pendiente (1), abscisa (2) u ordenada (3)? ";
				cin >> operaciones;
			
			} while (operaciones < 1 || operaciones > 3);
		
			if(operaciones == 1){
				MenuOperaciones pendiente(a, b, c, x, y);
				cout << pendiente.pendiente;
			}
			
			if(operaciones == 2){
				MenuOperaciones abscisa(a, b, c, x, y);
				cout << abscisa.x;
			}
			
			if(operaciones == 3){
				MenuOperaciones ordenada(a, b, c, x, y);
				cout << ordenada.y;
			}
	}
	
	if(principal == 2){
		return(0);
	}
}
