/**
 * Project Untitled
 */


#ifndef _PGOLOSINAS_H
#define _PGOLOSINAS_H

#include "PRODUCTO.h"


class pGolosinas: public PRODUCTO {
public: 
    const golosinas articulo;
    
/**
 * @param n
 * @param art
 */
void pGolosinas(string n, golosinas art);
protected: 
    
void pGolosinas();
};

#endif //_PGOLOSINAS_H