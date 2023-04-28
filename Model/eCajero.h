/**
 * Project Untitled
 */


#ifndef _ECAJERO_H
#define _ECAJERO_H

#include "EMPLEADO.h"


class eCajero: public EMPLEADO {
public: 
    
/**
 * @param na
 * @param dni
 */
void eCajero(string na, string dni);
    
/**
 * @param c
 */
double calcularMonto(CLIENTE c);
    
/**
 * @param c
 * @param m
 * @param ticketFisico
 */
bool cobrar(CLIENTE c, double m, bool ticketFisico);
protected: 
    
void eCajero();
};

#endif //_ECAJERO_H