/**
 * Project Untitled
 */


#ifndef _PGOLOSINAS_H
#define _PGOLOSINAS_H

#include "PRODUCTO.h"
#include "golosinas.h"


class pGolosinas : public PRODUCTO {
public:

    const golosinas articulo;

    pGolosinas(string n, golosinas art);
    ~pGolosinas();

};

#endif //_PGOLOSINAS_H