#include <iostream>
using namespace std;

float promedio(int num1, int num2, int num3, int num4, int num5){
	int pro;
	
	pro = (num1+num2+num3+num4+num5)/5;
	
	return pro;
}


int main(){
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	float pro;
	
cout << "Rene Francisco Rauda Rivera \n";
cout << "sacar promedio de 3 ingresados\n";
cout << "ingresa primero numero \n";
cin >>num1;
cout << "ingresa segundo numero \n";
cin >>num2;
cout << "ingresa tercero numero \n";
cin >> num3;
cout << "ingresa cuarto numero \n";
cin >> num4;
cout << "ingresa quinto numero \n";
cin >> num5;
	
	
	
pro = promedio (num1,num2,num3,num4, num5);

cout << "el promedio de esos 3 numeros es \n"<< pro<< endl;
	
	
	return 0;
	
}
