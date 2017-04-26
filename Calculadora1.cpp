#include <iostream>

using namespace std;


int main(){
	
	int* prtVariable = 0;
	
	int entero1 = 100;
	
	//modificar
	
	int entero2 = 300;
	
	prtVariable = &entero2;  
	
	//modificar 
	
	cout<<"valor numero 1: "<<entero1<<endl;
	cout<<"valor numero 2: "<<entero2<<endl;
	

	return 0;
}
