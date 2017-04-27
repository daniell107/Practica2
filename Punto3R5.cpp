/*
 * Nombre del archivo: Punto3R5.cpp 
 * 
 * Descripcion: A esta funcion le entra un puntero de
 * punteros de string y se inicializa con tres filas, y en cada fila dos columnas.
 * Despues se solicita los nombres y apellidos de tres personas para cada fila, 
 * la primera columna contiene nombres y la segunda los apellidos, y despues a
 * cada persona se le coloca su salario respectivo.
 * 
 * Autor: Carlos Daniel Marin 1663787 
 * 		  Javier Alexiz Orozco 1663928
 * 		  Daniel Mejia 1663916
 * Fecha de creacion: 26 / Abril / 2017 
 * Ultima fecha de modificacion: 27 / Abril / 2017
 */

#include <iostream>
using namespace std;

void recolectarDatos(string** &datos){
	
	datos = new string*[3];
	for(int i=0; i<3; i++){
		datos[i] = new string[2];	
	}
	
	for(int i=0; i<3; i++){
		cout<<"Nombre:"<<endl;
		cin>>datos[i][0];
		cout<<"Apellido"<<endl;
		cin>>datos[i][1];
	}
}
	
void recolectarSalariosPersona(double* &salarios, string** &datos){
	
	salarios = new double[3];
	/*for(int i=0; i<3 ; i++){
		datos[i];
	}*/
	
	for(int i=0; i<3; i++){
		cout<<"Ingrese el salario de la persona "<<datos[i][0]<<" "<<datos[i][1]<<endl;
		cin>>salarios[i];
	}
	
}

void imprimirResultados(double* &salarios, string** &datos){
	 for(int i=0; i<3; i++){
		cout<<"La persona "<<datos[i][0]<<" "<<datos[i][1]<<" devenga "<<salarios[i]<<endl;
		
	}
}	

int main(){
	
	string** arrayDatosPersona;
	double* salario;
	recolectarDatos(arrayDatosPersona);	
	recolectarSalariosPersona( salario, arrayDatosPersona);
	imprimirResultados(salario, arrayDatosPersona);
	
						 	
	
}
