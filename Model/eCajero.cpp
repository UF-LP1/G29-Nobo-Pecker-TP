/**
 * Project Untitled
 */


#include "eCajero.h"

 /**
  * eCajero implementation
  */


eCajero::eCajero(string na, string dni, double ef, double app, double deb, double cr, string tel, string mail) : EMPLEADO(na, dni, ef, app, deb, cr, tel, mail) {

}

eCajero::~eCajero() {

}

double eCajero::calcularMonto(CLIENTE c) {
    double monto=0.0;
    //multiplico las n's de cada producto del carrito por su precio y los acumulo
    //devuelvo el monto negativo si (error) hay nullptr, etc
    return monto;
}

bool eCajero::cobrar(CLIENTE c, double m, bool ticketFisico) {
    //me llama al metodo pagar del cliente que mueve la plata y me genera el ticket segun el booleano de ptf del cliente
    //si la funcion pagar me devuelve false no genero ningun ticket y devuelvo false
    //tmb devuelvo false si no tengo el mail y me lo piden digital 
    return false;
}