/**
 * Project Untitled
 */


#include "CLIENTE.h"

 /**
  * CLIENTE implementation
  */


CLIENTE::CLIENTE(string na, string dni, unsigned int nro, necesidadCliente nec) : PERSONA(na, dni), nro(nro), nec(nec) { //primero ctor madre, desp los at de la hija y como son const los inicializo asi

}

CLIENTE::~CLIENTE() {

}

bool CLIENTE::pagar(double m, metodoPago metp) {
    return false;
}

bool CLIENTE::comprarGolosinas(pGolosinas g, unsigned int n) {
    return false;
}