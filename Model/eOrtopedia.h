/**
 * Project Untitled
 //*/


#ifndef _EORTOPEDIA_H
#define _EORTOPEDIA_H

#include "VENDEDOR.h"
#include "CLIENTE.h"
#include "tipoEmpleado.h"
#include "pOrtopedia.h"


class eOrtopedia : public VENDEDOR {
public:

    const tipoEmpleado o;

    eOrtopedia(string na, string dni, tipoEmpleado o, string tel, string mail);
    ~eOrtopedia();

    bool vender(CLIENTE* cliente, vector <PRODUCTO> productos, vector <unsigned int> cant);

};

#endif //_EORTOPEDIA_H