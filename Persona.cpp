/*
 * Nombre del archivo: Persona.cpp
 * Descripcion: Este programa describe datos que posee una persona
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * Fecha de creacion: 27 / Marzo / 2017 
 * Ultima fecha de modificacion: 28 / Abril / 2017
 */


#include "Persona.h"
#include <iostream>
#include <string>
using namespace std; 

Persona::Persona(string nom, string ape, double sa){
	nombre=nom;
	apellido=ape;
	salario=sa;
}

string Persona::getNombre(){
	return nombre;
}
string Persona::getApellido(){
	return apellido;
}
double Persona::getSalario(){
	return salario;
}



void Persona::setNombre(string n){
	nombre=n;
}
void Persona::setApellido(string a){
	apellido=a;
}
void Persona::setSalario(double s){
	salario=s;
}

Persona::~Persona(){
}


void Persona::recolectarDatos(vector<Persona> &personas){
	int n=0;
	cout<<"numero de personas que desea registrar: "<<endl;
	cin>>n;
	for(int i=0; i<n; i++){
		
		string acumNombre =" ";
		string acumApellido=" ";
		double acumSalario=0;
		cout<<"ingrese nombre de la persona "<<i+1<<": "<<endl;
		cin>>acumNombre;
		cout<<"ingrese apellido de la persona "<<i+1<<": "<<endl;
		cin>>acumApellido;		
		cout<<"ingrese salario de la persona "<<i+1<<": "<<endl;
		cin>>acumSalario;	
		
		Persona acumPersona(acumNombre, acumApellido, acumSalario);
		
		personas.push_back(acumPersona);
		
		} 
	
}

void Persona::imprimirResultados(vector<Persona> p){
	
	cout<<"------------------------------"<<endl;
	cout<<"datos de las personas: "<<endl;
	cout<<"------------------------------"<<endl;
	for(int i=0; i<p.size(); i++){
		
		cout<<"nombre: "<<p[i].getNombre()<<endl;
		cout<<"apellido: "<<p[i].getApellido()<<endl;
		cout<<"salario: "<<p[i].getSalario()<<endl;
	}
}














