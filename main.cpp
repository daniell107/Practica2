/*
 * Nombre del archivo: main.cpp
 * Descripcion: Este programa realiza las operaciones
 * 				básica de una calculadora
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * Fecha de creacion: 26 / Marzo / 2017 
 * Ultima fecha de modificacion: 26 / Abril / 2017
 */


#include <iostream>
#include "Calculadora.h"
using namespace std;


int main(){
	
	Calculadora calculadora(3, 2);
	
	//cout<<calculadora.getNum1()<<endl;
	
	int opcion;
	
	do{
		
		calculadora.menu(opcion);
		cout << "Ingrese su elección" << endl;
		cin >> opcion;
		
		
		switch (opcion){
			
				case 1:
				calculadora.suma(3, 2);
				break;
			
				case 2:
				calculadora.resta(6, 2);
				break;
			
				case 3:
				calculadora.multiplicacion(2, 2);
				break;
				
				case 4:
				calculadora.division(8, 0);
				break;
				
				case 5:
				calculadora.modulo(100);
				break;
				
			}
		
		
		}while(opcion < 6);
	
	}
