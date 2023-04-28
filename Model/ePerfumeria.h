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

    const tipoEmpleado p;

    ePerfumeria(string na, string dni, tipoEmpleado p);
    ~ePerfumeria();

    bool venderProducto(CLIENTE c, pPerfumeria p);

};

#endif //_EPERFUMERIA_H
