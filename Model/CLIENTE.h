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

    necesidadCliente nec;
    const unsigned int nro;
    bool preferenciaTicketFisico;
    vector<PRODUCTO> carrito;
    vector<unsigned int> cantidades;
    metodoPago metP;

    CLIENTE(string na, string dni, unsigned int nro, necesidadCliente nec, double ef, double app, double deb, double cr, string tel, string mail, bool ptf, metodoPago metP);//C
    ~CLIENTE(); //D

    bool pagar(double m, metodoPago metp);
    bool comprarGolosinas(pGolosinas g, unsigned int n);
    void set_nec(necesidadCliente n);
    necesidadCliente get_nec();
    void set_metP(metodoPago MP);
    metodoPago get_metP();
   

};

#endif //_CLIENTE_H