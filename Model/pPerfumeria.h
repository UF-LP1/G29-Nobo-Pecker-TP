/**
 * Project Untitled
 */


#ifndef _PPERFUMERIA_H
#define _PPERFUMERIA_H

#include "PRODUCTO.h"
#include "artPerfumeria.h"


class pPerfumeria : public PRODUCTO {
public:

    const artPerfumeria articulo;

    pPerfumeria(string n, artPerfumeria art);
    ~pPerfumeria();

};

#endif //_PPERFUMERIA_H