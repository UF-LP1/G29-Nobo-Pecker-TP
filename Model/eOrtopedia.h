/**
 * Project Untitled
 */


#ifndef _EORTOPEDIA_H
#define _EORTOPEDIA_H

#include "EMPLEADO.h"
#include "tipoEmpleado.h"
#include "CLIENTE.h"
#include "pOrtopedia.h"


class eOrtopedia : public EMPLEADO {
public:

    const tipoEmpleado o;

    eOrtopedia(string na, string dni, tipoEmpleado o);
    ~eOrtopedia();

    bool venderProducto(CLIENTE c, pOrtopedia p);

};

#endif //_EORTOPEDIA_H