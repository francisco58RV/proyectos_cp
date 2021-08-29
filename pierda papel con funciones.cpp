#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
//RENE FRANCISCO RAUDA RIVERA RR105016
//usar prototipos es obligatorio Un prototipo es una declaración de una función
//Consiste en una presentación de la función, exactamente con la misma
//estructura que la definición, pero sin cuerpo y terminada con un “;”. 
std::string generarMovimientoComputadora();
std::string obtenerMovimientoJugador();

void determinarGanador (std::string computadora,std::string jugador);
void procesarEntradaJugadorPiedra(std::string computadora);
void procesarEntradaJugadorPapel(std::string computadora);
void procesarEntradaJugadorTijera(std::string computadora);

int main(){
	
	using namespace std;
	cout <<"RENE FRANCISCO RAUDA RIVERA \n";
 	string movimientoComputadora; //declaradas
	string movimientoJugador;	//declaradas
	
	movimientoJugador = obtenerMovimientoJugador(); //asingo valor de la funcion
	movimientoComputadora = generarMovimientoComputadora();//asingo valor de la funcion
//luego de obtener valores de las funciones se lo envio al procedimiento
	determinarGanador(movimientoComputadora, movimientoJugador); 
	
	return 0;				
}
// funcion para generar el movimiento de la compu que es un string

	std::string generarMovimientoComputadora(){
		std::string movimiento; //seria la variable del moviento por ejemplo papel
		int numeroAleatorio;
		
		//genero numero aleatroio
		
		srand(time(0));
		numeroAleatorio = rand() % 3 + 1;
		
		switch (numeroAleatorio)
		{
			case 1:
			movimiento = "piedra";
			break;
			case 2:
			movimiento	= "papel";
			break;
			case 3:
			movimiento	= "tijera";
			break;		
		}
		std::cout <<"computadora: " << movimiento << "\n";	
		return movimiento;	
}
//funcion obtener movimiento jugador
 	std::string obtenerMovimientoJugador(){
 		using namespace std;
 		string movimiento;
 		
 		cout << "piedra, papel o tijera (para terminar, escriba salir) ";
 		cin >> movimiento;
 		
 		return movimiento;
	 }

//procedimiento determinar ganador
//recibo el estring enviado en el main a las variables computadora y jugador

	void determinarGanador(std::string computadora, std::string jugador){
		
		if (computadora == jugador){
			std::cout << "empate \n";
		}else if (jugador == "piedra"){
			procesarEntradaJugadorPiedra(computadora);
		}else if (jugador == "papel"){
			procesarEntradaJugadorPapel(computadora);
		}else if (jugador == "tijera"){
			procesarEntradaJugadorTijera(computadora);
		}else{
			std::cout << "entrada no valida. Ingrese piedra, papel o tijera \n";		
		}	
		
	}

	 void procesarEntradaJugadorPiedra(std::string computadora){
	 	if (computadora == "papel"){
	 		std::cout  << "usted gana. papel cubre piedra \n";
	 		
		 }else if (computadora == "tijera"){
		 	std:: cout << "usted pierde piedra rompre tijera ";
		 }
	 }	
	void procesarEntradaJugadorPapel(std::string computadora){
		if(computadora =="tijera"){
			std::cout << "yo gano tijera corta papel\n";
		}else if (computadora == "piedra" ) {
			std::cout << "usted pierde el papel envuelve piedra. \n";
			
		}		
	
	}
	void procesarEntradaJugadorTijera(std::string computadora){
		if(computadora =="papel"){
			std::cout << "pierdo tijera corta papel. \n";
		}else if (computadora == "piedra" ) {
			std::cout << " yo gano piedra aplasta tijera. \n";;
			
		}		
	
	}
