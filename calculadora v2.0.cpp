#include <iostream>

using namespace std;

//crando funcion operar tipo float que recibe los parametros del usuario
float operar (float x, float y , char op){
	float r = 0; 
	
	switch(op){
		case '+':
			r = x + y;
			break;
		case '-':
			r = x-y;
			break;
		case '*':
			r = x * y;
			break;
		case '/':
			r = x / y;
			break;
		default:
			cout << "operador no valido" << endl;
			
	}
	return r;
}

int main (){
	float x;
	float y; 
	float r; 
	char op;  
	
	cout << "calculadora con funciones" << endl;
	cout << "inserte primer numero: ";
	cin >> x;
	cout <<"inserte segundo numero: ";
	cin >> y;
	cout << "operacion a realizar: +|-|*|/";
	cin >> op;
	
//invocar la funcion operar que esta arriba
	r = operar(x,y,op);
	
	cout << "x" <<op << "y= " << r << endl;
	
	return 0;		
}
