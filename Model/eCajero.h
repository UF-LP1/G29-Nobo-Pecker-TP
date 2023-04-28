/**
 * Project Untitled
 */


#ifndef _ECAJERO_H
#define _ECAJERO_H

#include "EMPLEADO.h"
#include "CLIENTE.h"

class eCajero : public EMPLEADO {
public:

    eCajero(string na, string dni); //C
    ~eCajero(); //D

    double calcularMonto(CLIENTE c);
    bool cobrar(CLIENTE c, double m, bool ticketFisico);

};

#endif //_ECAJERO_H