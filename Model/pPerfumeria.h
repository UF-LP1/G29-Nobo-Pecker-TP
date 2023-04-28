/**
 * Project Untitled
 */


#ifndef _PPERFUMERIA_H
#define _PPERFUMERIA_H

#include "PRODUCTO.h"


class pPerfumeria: public PRODUCTO {
public: 
    const artPerfumeria articulo;
    
/**
 * @param n
 * @param art
 */
void pPerfumeria(string n, artPerfumeria art);
protected: 
    
void pPerfumeria();
};

#endif //_PPERFUMERIA_H