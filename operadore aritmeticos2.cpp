#include <iostream>
using namespace std;

int main (){
	
	double x;
	double y;
	
	cout <<"*** calcula operaciones aritmeticas de dos numeros ***\n";
	
	cout << "inserte un numero: ";
	cin >> x;
	
	cout <<"inserte el otro numero";
	cin >> y;
	
	cout <<"suma :" << x + y << endl; //suma de x +y }
	cout << "resta:" << x - y << endl; // resta
	cout <<"multiplicacion: " << x*y << endl; //multiplicacion 
	cout <<"division: "<<x / y << endl; //division 
	
	int z = x;
	int w = y;
	cout << "Residuo de division: " << " x: "<< x << "y: " << y << endl;
	
	++x;
	++y;
	cout << "incremento en uno: " <<" x: " << x << "y: "<< y << endl;
	
	--x;
	--y;
	cout << "Decremento en uno: " << " x: " << x << "y: " << y << endl;
	
	return 0; 
	
}
