#include <iostream>
using namespace std;

int mayor (int num1,int num2,int num3,int num4,int num5){
	int ma;
	
	if(num1 >num2 && num1>num3 && num1 >num4 && num1>num5){
		ma= num1;
	 	cout<< "el mayor es num1 \n";	
	}else if (num2 >num1 && num2 >num3 && num2 >num4 & num2 >num5){
		ma = num2;
		cout <<"mayor es num 2 \n";
	}else if (num3>num1 && num3 >num2 && num3 >num4 && num3>num5){
			
	}else if (num4 >num1 && num4 >num2 && num4 >num3 && num4 >num5){
		ma= num4;
		cout << "el mayor es num4 \n";
	}else {
		ma= num5;
		cout << "el mayor es el num5 \n";
	}
	 
return ma;	
		
}


int main(){
	
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int ma;
	
	cout << "Rene Francisco Rauda Rivera RR105016";
	cout << "determinar numero mayor de 5 ingresados\n";
	cout << "ingrese numero 1 \n";
	cin >> num1;
	cout << "ingrese numero 2 \n";
	cin >>num2;
	cout << "ingrese numero 3 \n";
	cin >>num3;
	cout << "ingrese numero 4 \n";
	cin >>num4;
	cout << "ingrese numero 5 \n";
	cin >>num5;
	
	
	ma = mayor(num1,num2,num3,num4,num5);
	
	cout <<"el mayor es \n" <<  ma  << endl;
	
	
	return 0;
	
}
