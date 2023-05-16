/**
 * Project Untitled
 //*/


#ifndef _ECAJERO_H
#define _ECAJERO_H

#include "EMPLEADO.h"
#include "CLIENTE.h"
#include "FARMACIA.h"

class eCajero : public EMPLEADO {
public:

    eCajero(string na, string dni, string tel, string mail); //C
    ~eCajero(); //D

    float cobrar(CLIENTE *cliente, FARMACIA farmacia, bool ticketFisico);

};

#endif //_ECAJERO_H