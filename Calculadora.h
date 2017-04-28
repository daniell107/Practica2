
/*
 * Nombre del archivo: Calculadora.h
 * Descripcion: Este programa realiza las operaciones
 * 				básica de una calculadora
 * 
 * Autores: Carlos Daniel Marin -1663787;
 * 		    Javier Alexis Orozco - 1663928
 * 		    Daniel Mejia - 1663916
 * Fecha de creacion: 26 / Marzo / 2017 
 * Ultima fecha de modificacion: 26 / Abril / 2017
 */

#ifndef CALCULADORA_H
#define CALCULADORA_H


class Calculadora{
	
	private:
	
	int numero1;
	int numero2;
	
	
	public:
	
	Calculadora(int num1In, int num2In);
	
	int getNum1();
	int getNum2();
	
	
	int suma(int num1In, int num2In);
	int resta(int num1In, int num2In);
	int multiplicacion(int num1In, int num2In);
	int division(int num1In, int num2In);
	int modulo(int num1In);
	
	void menu(int n);
	
	~Calculadora();
};
#endif
