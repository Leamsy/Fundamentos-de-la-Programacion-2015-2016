/***************************************************************************/
// FUNDAMENTOS DE PROGRAMACI�N
// GRADO EN INGENIER�A INFORM�TICA
//
// CURSO 2015-2016
// (C) ISMAEL MOYANO ROMERO
// 1�B - GRUPO 3
//
// PR�CTICAS SESI�N 5
// EJERCICIO 44
/*	
   Juego sobre adivinar un n�mero dado.
*/
/***************************************************************************/

#include <iostream>     // Se incluye la librer�a "iostream", necesaria para los decursos de entrada y salida
using namespace std;		// Declara un espacio que contiene un conjunto de objetos relacionados

int main()
{
	// Definici�n de datos y variables
	
	int numero_i, numero_f;
	int modo_juego;
	int contador;
	bool volver_jugar, ganador;
	
	
	
	// Juego
	
	
	do{
	
		cout << "\n�Vas a jugar solo o con un amigo (1 o 2 jugadores)? ";
		cin >> modo_juego;
		
	}while (modo_juego != 1 && modo_juego != 2);
	
	
	if (modo_juego == 1){
		
		
		do{
		
		cout << "\n�Bienvenido a Adivinan�meros 3000!"
					"\nHe elegido un n�mero entre 1 y 10. �Intenta adivinarlo!: ";
					
		numero_i = rand() % 10 + 1;
		
		do{
			
			cin >> numero_f;
			
			if(numero_f == numero_i){
				cout << "\nEnhorabuena, " <<numero_i<< " era el n�mero!";
				ganador = true;
				
			}
				
			if(numero_f != numero_i){
				cout << "\nInt�ntalo otra vez: ";
				ganador = false;
				
			}
			
		}while(ganador == false);
		
		cout << "�Quieres volver a jugar? �S� (1) o no (0): ";
		
		do{
			cin >> volver_jugar;
		
		}while(volver_jugar != 1 && volver_jugar != 0);
		
		if(volver_jugar == false){
			
			return(0);
		}
		
		cout << "\n\n\n\n\n\n";	
		
		}while (volver_jugar == true);
		
	};
	
	
	if (modo_juego == 2){
		
		do{
		
		ganador = false;
		
		cout << "\n�Bienvenidos a Adivinan�meros 3000!"
					"\nJugador 1: Introduce un n�mero entre 1 y 10: ";
					
		cin >> numero_i;
		
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";	
		
		contador = 3;
		
		cout << "\nJugador 2: �Intenta adivinar el n�mero! Tienes " <<contador<< " intentos: ";
		
		do{
			
			cin >> numero_f;
			
			if(numero_f == numero_i){
				ganador = true;
				
				
			}
				
			if(numero_f != numero_i){
				
				contador--;
				cout << "\nTe quedan " <<contador<< " intentos: ";
				
			}
			
		}while(ganador == false && contador > 0);
		
		
		if(ganador == true){
			
			cout << "\n�Enhorabuena jugador 2, has ganado!";
			
		}
		
		if(contador == 0){
			
			cout << "\nSe te han acabado los intentos, el n�mero era " <<numero_i<< " . �El jugador 2 gana!";
			
		};
		
		
		
		cout << "\n�Quereis volver a jugar? �S� (1) o no (0): ";
		
		do{
			cin >> volver_jugar;
		
		}while(volver_jugar != 1 && volver_jugar != 0);
		
		
		if(volver_jugar == false){
			
			return(0);
		
		}
		
		cout << "\n\n\n\n\n\n";	
		
		}while (volver_jugar == true);
		
	}
		


	return(0);
}
