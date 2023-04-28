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

    eOrtopedia(string na, string dni, tipoEmpleado o, double ef, double app, double deb, double cr, string tel, string mail);
    ~eOrtopedia();

    bool venderProducto(CLIENTE c, pOrtopedia** p, unsigned int** cant, unsigned int* n);

};

#endif //_EORTOPEDIA_H