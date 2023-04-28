/**
 * Project Untitled
 */


#ifndef _PORTOPEDIA_H
#define _PORTOPEDIA_H

#include "PRODUCTO.h"
#include "artOrtopedia.h"

class pOrtopedia : public PRODUCTO {
public:

    const artOrtopedia articulo;

    pOrtopedia(string n, artOrtopedia art);
    ~pOrtopedia();

};

#endif //_PORTOPEDIA_H
