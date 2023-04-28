/**
 * Project Untitled
 */


#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "PERSONA.h"


class CLIENTE: public PERSONA {
public: 
    const necesidadCliente nec;
    const unsigned int nro;
    
/**
 * @param na
 * @param dni
 * @param nro
 * @param nec
 */
void CLIENTE(string na, string dni, unsigned int nro, necesidadCliente nec);
    
/**
 * @param m
 * @param metp
 */
bool pagar(double m, metodoPago metp);
    
/**
 * @param g
 * @param n
 */
bool comprarGolosinas(pGolosinas g, unsigned int n);
protected: 
    
void CLIENTE();
};

#endif //_CLIENTE_H