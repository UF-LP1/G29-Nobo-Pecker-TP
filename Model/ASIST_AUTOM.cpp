/**
 * Project Untitled
 */


#include "ASIST_AUTOM.h"
#include "CLIENTE.h"

 /**
  * ASIST_AUTOM implementation
  */


ASIST_AUTOM::ASIST_AUTOM() { //inicializo cantclientes en 0
    this->cantclientes = 0;
}

ASIST_AUTOM::~ASIST_AUTOM() { 

}

int ASIST_AUTOM::entregarTicket() { //incremento la cantidad de clientes en uno y devuelvo el numero anterior para asignarselo al cliente nuevo
    this->cantclientes++;
    return (cantclientes-1) ;
}
