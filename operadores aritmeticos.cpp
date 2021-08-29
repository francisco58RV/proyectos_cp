#include <iostream>
//operadores aritmeticos
using namespace std;

int main()
{
int x = 5;
int y = 2;
cout << x + y << endl; //suma dos valores 
cout << x - y << endl; //resta dos valores 
cout << x * y << endl; // multiplica dos valores 

x = 12;
y = 3;
cout << x / y << endl; // division dos valores

x = 5;
y = 2;
cout << x % y << endl;	//devuelve el residuo de la division 

++x;				//aumenta el valor de una variable en 1 
cout << x << endl;

x = 5; 
--x; 
cout << x << endl;

return 0;
}
