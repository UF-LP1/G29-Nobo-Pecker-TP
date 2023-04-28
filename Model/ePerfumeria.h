/**
 * Project Untitled
 */


#ifndef _EPERFUMERIA_H
#define _EPERFUMERIA_H

#include "EMPLEADO.h"
#include "CLIENTE.h"
#include "tipoEmpleado.h"
#include "pPerfumeria.h"


class ePerfumeria : public EMPLEADO {
public:

    const tipoEmpleado p;

    ePerfumeria(string na, string dni, tipoEmpleado p, string tel, string mail);
    ~ePerfumeria();

    bool venderProducto(CLIENTE c, vector<pPerfumeria> p, vector<unsigned int> cant, unsigned int* n);

};

#endif //_EPERFUMERIA_H
