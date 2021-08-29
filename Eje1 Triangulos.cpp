#include <iostream>	
	
//René Francisco Rauda Rivera RR105016
using namespace std;

int triangulo (int lado1, int lado2,int base, int altura){
	int resultado = 0;
	
	if(base == lado2 & base == lado1){
		cout << "es equilatero \n";
		resultado = (base * altura) /2;
		
	}else if (lado1 == lado2 ){
			cout << "es isosceles \n";
			resultado = (base *altura)/2;	
		
	}else if(base != lado1 & base !=lado2){
		cout << "es escaleno \n";
		resultado = (base *altura)/2;
	}
	else{
		cout << "datos no validos \n";
	}	
	
	return resultado;	
}



int main(){
	
	int lado1;
	int lado2;
	int base;
	int altura;
	int resultado;
	
	cout << "Rene Francisco Rauda Rivera RR105016 Ejercicio 1 Triangulos \n";
	
	cout << "ingrese lado1 \n";
	cin >> lado1;
	
	cout << "ingrese lado2 \n";
	cin >> lado2;
	
	cout << "ingrese base \n";
	cin >> base;
	
	cout << "ingrese altura \n";
	cin >> altura;
	
	resultado = triangulo(lado1,lado2,base,altura);
	
	cout << "el area es \n" << resultado << endl;
	return 0;	
}
