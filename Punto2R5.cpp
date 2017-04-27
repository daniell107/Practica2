/*
 * Nombre del archivo: Punto2R5.cpp 
 * Descripcion: A este programa se le ingresa un puntero, que apunta a 
 * un entero y lo eleva al cuadrado y despues debe retornar el entero.  
 * Autor: Carlos Daniel Marin 1663787 
 * 		  Javier Alexiz Orozco 1663928
 * 		  Daniel Mejia 1663916
 * Fecha de creacion: 26 / Abril / 2017 
 * Ultima fecha de modificacion: 27 / Abril / 2017
 */


#include <iostream>
#include "math.h"
using namespace std;

void modificar(int* ptr ){
	
	*ptr = (double(pow(*ptr, 2)));
	
	}


int main(){
	
	int* ptrVariable = 0;
	int entero1 = 100;
	ptrVariable = &entero1;
	
	modificar(ptrVariable);
	
	int entero2 = 300;
	ptrVariable = &entero2;  
	
	modificar(ptrVariable);
	
	cout<<"valor numero 1: "<<entero1<<endl;
	cout<<"valor numero 2: "<<entero2<<endl;
	

	return 0;
}
