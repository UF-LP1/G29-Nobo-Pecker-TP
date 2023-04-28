/**
 * Project Untitled
 */


#ifndef _EORTOPEDIA_H
#define _EORTOPEDIA_H

#include "EMPLEADO.h"


class eOrtopedia: public EMPLEADO {
public: 
    const tipoEmpleado o;
    
/**
 * @param na
 * @param dni
 * @param o
 */
void eOrtopedia(string na, string dni, tipoEmpleado o);
    
/**
 * @param c
 * @param p
 */
bool venderProducto(CLIENTE c, pOrtopedia p);
protected: 
    
void eOrtopedia();
};

#endif //_EORTOPEDIA_H