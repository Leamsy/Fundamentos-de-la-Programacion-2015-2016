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

class AlumnoFP{
	
	public:
		
		string nombre, apellido, dni;
		int teoria, examen1, examen2, ev_continua;
		double final;
		
		AlumnoFP(int teoria, int examen1, int examen2, int ev_continua){
			Nota_Final(teoria, examen1, examen2, ev_continua);
		}
		
		void Nota_Final(int teoria, int examen1, int examen2, int ev_continua) {
			final = teoria * 0.7 + examen1 * 0.05 + examen2 * 0.15 + ev_continua * 0.1;
		}
};
		
		



int main()
{
	
	string nombre, apellido, dni;
	int teoria, examen1, examen2, ev_continua;

	
	
	
	cout << "Introduce el nombre del alumno: ";
	cin >> nombre;
	
	
		
	cout << "Introduce el apellido del alumno: ";
	cin >> apellido;
	
	
	
		
	cout << "Introduce el DNI del alumno: ";
	cin >> dni;
	
	
	do {
		
		cout << "Introduce la nota de teoría: ";
		cin >> teoria;
	
	} while (teoria <= 0 || teoria > 10);
	
	do {
		
		cout << "Introduce la nota del primer examen práctico: ";
		cin >> examen1;
	
	} while (examen1 <= 0 || examen1 > 10);
	
	do {
		
		cout << "Introduce la nota del segundo examen práctico: ";
		cin >> examen2;
	
	} while (examen2 <= 0 || examen2 > 10);
	
	do {
		
		cout << "Introduce la nota de evaluación continua: ";
		cin >> ev_continua;
	
	} while (ev_continua <= 0 || ev_continua > 10);
	
	AlumnoFP alumno(teoria, examen1, examen2, ev_continua);
	
	
	if(teoria < 5){
		cout << "\n\n" <<nombre<< " ha suspendido el examen de teoría con un " <<teoria<< ".";
	}
	
	if(examen1 < 5){
		cout << "\n\n" <<nombre<< " ha suspendido el primer examen práctico con un " <<examen1<< ".";
	}
	
	if(examen2 < 5){
		cout << "\n\n" <<nombre<< " ha suspendido el segundo examen práctico con un " <<examen2<< ".";
	}
	
	if(ev_continua < 5){
		cout << "\n\n" <<nombre<< " ha suspendido la evaluación continua con un " <<ev_continua<< ".";
	}
	
	
	
	cout << "\n\n\nLa nota final de " <<alumno.nombre<< " es de " <<alumno.final<< ".";
	
	
	
	return(0);
}
