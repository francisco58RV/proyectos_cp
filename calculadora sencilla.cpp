#include <iostream>
using namespace std;

int main(){
	float x;
	float y;
	float r;
	char op;
	cout <<"calculadora sencilla " <<endl;
	
	cout << "numero 1 :";
	cin >> x;
	cout <<"numero 2: ";
	cin >> y;
	cout << "operacion (+|-|*|/): ";
	cin >> op;
	
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
	cout << "x" << op << "y = " << r << endl;
	return 0;
		
}
