
/*
 * Nombre del archivo: Persona.h
 * Descripcion: Este programa describe datos que posee una persona
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * Fecha de creacion: 27 / Marzo / 2017 
 * Ultima fecha de modificacion: 28 / Abril / 2017
 */






#ifndef PERSONA_H
#define PERSONA_H

#include <vector>
#include <string>

using std::string;
using std::vector;
class Persona{
	private:
		string nombre;
		string apellido;
		double salario;
		
	public:
		Persona(string nom, string ape, double sa);
		
		string getNombre();
		string getApellido();
		double getSalario();
		
		void setNombre(string n);
		void setApellido(string a);
		void setSalario(double s);

		
		void imprimirResultados(vector<Persona> p);
		
		void recolectarDatos(vector<Persona> &personas);
		
		~Persona();
		
};


#endif
