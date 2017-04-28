/*
 * Nombre del archivo: mainPersona.cpp
 * Descripcion: Este programa describe datos que posee una persona
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * Fecha de creacion: 28 / Marzo / 2017 
 * Ultima fecha de modificacion: 28 / Abril / 2017
 */



#include <iostream>
#include "Persona.h"
#include <vector>

using namespace std;

int main(){
	
	Persona persona1("administrador", "001", 0);
	
	cout<<persona1.getNombre()<<endl;

	
	vector<Persona> personas; 
	
	
	
	//
	persona1.recolectarDatos(personas);
	
	persona1.imprimirResultados(personas);
		

	return 0;

}
