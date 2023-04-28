/**
 * Project Untitled
 */


#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "PERSONA.h"
#include "necesidadCliente.h"
#include "metodoPago.h"
#include "pGolosinas.h"
#include <iostream>
#include <string>

using namespace std;


class CLIENTE : public PERSONA {
public:

    const necesidadCliente nec;
    const unsigned int nro;

    CLIENTE(string na, string dni, unsigned int nro, necesidadCliente nec);//C
    ~CLIENTE(); //D

    bool pagar(double m, metodoPago metp);
    bool comprarGolosinas(pGolosinas g, unsigned int n);

};

#endif //_CLIENTE_H