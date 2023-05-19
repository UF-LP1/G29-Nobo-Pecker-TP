/**
 * Project Untitled
 */


#include "ASIST_AUTOM.h"
#include "CLIENTE.h"

 /**
  * ASIST_AUTOM implementation
  */


ASIST_AUTOM::ASIST_AUTOM() { 
    this->cantclientes = 0;
}

ASIST_AUTOM::~ASIST_AUTOM() { 

}

int ASIST_AUTOM::entregarTicket() { //este metodo se encarga de incrementar la cantidad total de clientes en uno y devolver el numero anterior a ese para asignarselo al cliente nuevo

    this->cantclientes++;
    return cantclientes ;
}
