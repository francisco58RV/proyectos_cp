#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int movJug;
	cout << "Alumno: Rene Francisco Rauda Rivera RR105016 \n";
	
	cout << "Juguemos a piedra, papel o tijeras, selecciona tu movimiento \n";
	cout << "1. piedra \n 2. papel \n 3. Tijera \n 4.spock \n 5.lagarto: ";
	
	cin >> movJug;//moviemiento jugado por el usuario
	srand(time(0));
	string movComp; //movimiento de la computadora definido en el switch?
	int numMov = rand() % 5 + 1 ; // numero de movimiento, rand sirve para generar numeros aleatorios
// en el switch estan definidos los movimientode la computadora segun el numero aleatorio
	switch (numMov){
		case 1:
			movComp = "piedra";
			break;
		case 2:
			movComp = "papel";
			break;
		case 3:
			movComp = "Tijera";
			break;
		case 4:
			movComp = "spock";
			break;
		case 5:
			movComp = "lagarto";
			break;		
	}
cout <<"la computadora escogio: "<< movComp << endl;

if (movJug == numMov){
	cout << "empate \n";
} 	else if ((movJug ==1) && (numMov==3)){
	cout << "ganaste \n" ;	
}	else if ((movJug ==1) && (numMov==5)){
	cout << "ganaste \n" ;	
}	else if ((movJug==2) && (numMov==1)){
	cout <<"ganaste \n";	
}	else if ((movJug==2) && (numMov==4)){
	cout << "ganaste \n";
}	else if ((movJug==3) && (numMov==2)){
	cout << "ganaste \n";
}	else if ((movJug==3) && (numMov==5)){
	cout << "ganaste \n";
}	else if ((movJug==3)&&(numMov==5)){
	cout <<"ganaste";	
}	else if ((movJug==5)&&(numMov==2)){
	cout << "ganste";
}	else if ((movJug==5)&&(numMov==4)){
	cout << "ganste";
}	else if ((movJug==4) && (numMov==3)){
	cout << "ganaste \n";
}	else if ((movJug==4) && (numMov==1)){
	cout << "ganaste \n";
}else {
	cout << "perdiste \n";
}
		return 0;
	
		
}

