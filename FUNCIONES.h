#pragma once
#include "Model/ASIST_AUTOM.h"
#include "Model/eFarmaceutico.h"
#include "Model/eCajero.h"
#include "Model/eOrtopedia.h"
#include "Model/eMostrador.h"
#include "Model/ePerfumeria.h"
#include "Model/eLimpieza.h"
#include "Model/FARMACIA.h"
#include<queue>

unsigned int inventarCantidades();
array<necesidadCliente, 3> generarNecesidades();




inline array<necesidadCliente, 3> generarNecesidades() {
	srand(NULL);
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
inline unsigned int inventarCantidades() {
	return rand() % 5;
}






