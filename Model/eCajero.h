/**
 * Project Untitled
 */


#ifndef _ECAJERO_H
#define _ECAJERO_H

#include "EMPLEADO.h"
#include "CLIENTE.h"
#include "FARMACIA.h"

class eCajero : public EMPLEADO {
public:

    eCajero(string na, string dni, double ef, double app, double deb, double cr, string tel, string mail); //C
    ~eCajero(); //D

    double cobrar(CLIENTE c, FARMACIA f, bool ticketFisico);

};

#endif //_ECAJERO_H