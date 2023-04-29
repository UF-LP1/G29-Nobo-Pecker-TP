/**
 * Project Untitled
 //*/


#ifndef _EORTOPEDIA_H
#define _EORTOPEDIA_H

#include "EMPLEADO.h"
#include "CLIENTE.h"
#include "tipoEmpleado.h"
#include "pOrtopedia.h"


class eOrtopedia : public EMPLEADO {
public:

    const tipoEmpleado o;

    eOrtopedia(string na, string dni, tipoEmpleado o, string tel, string mail);
    ~eOrtopedia();

    bool venderProducto(CLIENTE c, vector<pOrtopedia> o, vector<unsigned int> cant);

};

#endif //_EORTOPEDIA_H