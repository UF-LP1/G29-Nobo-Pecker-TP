/**
 * Project Untitled
 */


#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "PERSONA.h"
#include "necesidadCliente.h"
#include "metodoPago.h"
#include "pGolosinas.h"


class CLIENTE : public PERSONA { //ME FALTA EL ATRIBUTO CARRITO QUE ES DE TEMPPLATE
public:

    const necesidadCliente nec;
    const unsigned int nro;
    bool preferenciaTicketFisico;
    //lista de productos

    CLIENTE(string na, string dni, unsigned int nro, necesidadCliente nec, double ef, double app, double deb, double cr, string tel, string mail, bool ptf);//C
    ~CLIENTE(); //D

    bool pagar(double m, metodoPago metp);
    bool comprarGolosinas(pGolosinas g, unsigned int n);
   

};

#endif //_CLIENTE_H