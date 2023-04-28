/**
 * Project Untitled
 */


#ifndef _PORTOPEDIA_H
#define _PORTOPEDIA_H

#include "PRODUCTO.h"


class pOrtopedia: public PRODUCTO {
public: 
    const artOrtopedia articulo;
    
/**
 * @param n
 * @param art
 */
void pOrtopedia(string n, artOrtopedia art);
protected: 
    
void pOrtopedia();
};

#endif //_PORTOPEDIA_H