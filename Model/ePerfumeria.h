/**
 * Project Untitled
 //*/


#ifndef _EPERFUMERIA_H
#define _EPERFUMERIA_H

#include "VENDEDOR.h"
#include "CLIENTE.h"
#include "tipoEmpleado.h"
#include "pPerfumeria.h"


class ePerfumeria : public VENDEDOR {
public:

    const tipoEmpleado p;

    ePerfumeria(string na, string dni, tipoEmpleado p, string tel, string mail);
    ~ePerfumeria();

    bool vender(CLIENTE* cliente, vector <PRODUCTO> productos, vector <unsigned int> cant);

};

#endif //_EPERFUMERIA_H
