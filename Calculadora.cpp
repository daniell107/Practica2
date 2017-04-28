/*
 * Nombre del archivo: Calculadora.cpp
 * Descripcion: Este programa realiza las operaciones
 * 				básica de una calculadora
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * Fecha de creacion: 26 / Marzo / 2017 
 * Ultima fecha de modificacion: 26 / Abril / 2017
 */

#include "Calculadora.h"
#include <iostream>

using namespace std;


Calculadora::Calculadora(int num1In, int num2In){
	
	numero1 = num1In;
	numero2 = num2In;
}


int Calculadora::getNum1(){
	
	return numero1;
	}


int Calculadora::getNum2(){
	return numero2;
	
	}



int Calculadora::suma(int num1In , int num2In){
	
	int sumar = num1In + num2In;

	cout <<"El resultado es: "<< sumar << endl;
	}

int Calculadora::resta(int num1In , int num2In){
	
	int restar = num1In - num2In;

	cout <<"El resultado es: "<< restar << endl;
	
	}
	
int Calculadora::multiplicacion(int num1In , int num2In){
	
	int multiplicar = num1In * num2In;
	
	cout <<"El resultado es: "<< multiplicar << endl;
	}
	
		
int Calculadora::division(int num1In , int num2In){
	
	int dividir;
		
		if(num2In==0){
			cout << "La división no existe" << endl;
			}
		else{
			dividir = num1In / num2In;
			}
		
	cout <<"El resultado es: "<< dividir << endl;
	}		


int Calculadora::modulo(int num1In){
	
	int modular = num1In % 2;
		
		if(num1In % 2 ==0){
			cout << "El numero es par" << endl;
			}
		else{
			cout << "El numero es impar" << endl;
			}
	}		


void Calculadora::menu(int n){
	cout << endl;
	cout <<"BIENVENIDO A LA SUPER CALCULADORA"<<endl;
	cout << "Operación que desear realizar" << endl;
	cout << "(1) Suma" << endl;
	cout << "(2) Resta" << endl;
	cout << "(3) Multiplicación" << endl;
	cout << "(4) División" << endl;
	cout << "(5) Módulo" << endl;
	cout << "(6) Salir" << endl;
	cout << endl;
	}	


Calculadora::~Calculadora(){
	
	cout<<"Gracias por visitarnos"<<endl;
	
	}
