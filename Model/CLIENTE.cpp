/**
 * Project Untitled
 */


#include "CLIENTE.h"

 /**
  * CLIENTE implementation
  */


CLIENTE::CLIENTE(string na, string dni, unsigned int nro, necesidadCliente nec, double ef, double app, double deb, double cr, string tel, string mail, bool ptf) : PERSONA(na, dni, ef, app, deb, cr, tel, mail), nro(nro), nec(nec) { 
    this->preferenciaTicketFisico = true;
}

CLIENTE::~CLIENTE() {

}

bool CLIENTE::pagar(double m, metodoPago metp) {
    //descuento m de la billetera de cliente segun el metp y sumo m a los fondos de la farmacia
    //devuelvo false si no le alcanza la plata en el metodo que eligio
    return false;
}

bool CLIENTE::comprarGolosinas(pGolosinas g, unsigned int n) {
    //me crea una lista de golosinas y una lista de n's donde cada golosina tiene su respectivo n y me lo agrega al carrito
    //devuelvo false si no tengo las golosinas que me piden, si hay nullptr, etc
    return false;
}