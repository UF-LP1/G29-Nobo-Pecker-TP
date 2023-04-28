/**
 * Project Untitled
 */


#ifndef _EPERFUMERIA_H
#define _EPERFUMERIA_H

#include "EMPLEADO.h"
#include "tipoEmpleado.h"
#include "CLIENTE.h"
#include "pPerfumeria.h"


class ePerfumeria : public EMPLEADO {
public:

    const tipoEmpleado perfumeria_;

    ePerfumeria(string na, string dni, tipoEmpleado p, double ef, double app, double deb, double cr, string tel, string mail);
    ~ePerfumeria();

    bool venderProducto(CLIENTE c, pPerfumeria** p, unsigned int** cant, unsigned int* n);

};

#endif //_EPERFUMERIA_H
