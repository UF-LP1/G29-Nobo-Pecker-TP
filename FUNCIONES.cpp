
#include "FUNCIONES.h"

 array<necesidadCliente, 3> generarNecesidades() {
	srand(time(NULL));
	int cantidad = (rand() % 3) + 1;// me devuelve 1, 2 o 3 para ver cuantas necesidades va a tener (no puedo tener más de una obra social, etc)
	array<necesidadCliente, 3> necesidades{};
	switch (cantidad) {
	case 1: {
		necesidades[0] = necesidadCliente(rand() % 5);
		necesidades[1] = necesidades[2] = necesidadCliente(5); //unspecifiedNC
		break;
	}
	case 2: {
		necesidades[0] = necesidadCliente(rand() % 5);
		if (necesidades[0] == farmaciaOS || necesidades[0] == farmaciaP || necesidades[0] == PAMI) {
			necesidades[1] = necesidadCliente(rand() % 2 + 3);//si ya tengo una obra social agrego uno de los otros dos 
		}
		else do {
			necesidades[1] = necesidadCliente(rand() % 5);
		} while (necesidades[1] == necesidades[0]);
		necesidades[2] = necesidadCliente(5);
		break;
	}
	case 3: {
		necesidades[0] = ortopedia;
		necesidades[1] = perfumeria;
		necesidades[2] = necesidadCliente(rand() % 3);
	}

	}
	return necesidades;
}

//funcion que me devuelve una cantidad random del 0 al 5 (llega al 5 por un ejemplo, este valor podría variar) para ver cuantos items de cada producto se llevan los clientes
 unsigned int inventarCantidades() {
	return rand() % 5;
}

 string to_string_metPago(metodoPago metP) {
	 string metPago;
	 switch (metP){
	 case 0: {
		 metPago = "efectivo";
		 break;
	 }
	 case 1: {
		 metPago = "credito";
		 break;
	 }
	 case 2: {
		 metPago = "debito";
		 break;
	 }
	 case 3: {
		 metPago = "app";
		 break;
	 }
	 default: {
		 metPago = "Metodo de pago no especificado";
		 break;
	 }
	 }
	 return metPago;
 }

