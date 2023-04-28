/**
 * Project Untitled
 */


#ifndef _EPERFUMERIA_H
#define _EPERFUMERIA_H

#include "EMPLEADO.h"


class ePerfumeria: public EMPLEADO {
public: 
    const tipoEmpleado p;
    
/**
 * @param na
 * @param dni
 * @param p
 */
void ePerfumeria(string na, string dni, tipoEmpleado p);
    
/**
 * @param c
 * @param p
 */
bool venderProducto(CLIENTE c, pPerfumeria p);
protected: 
    
void ePerfumeria();
};

#endif //_EPERFUMERIA_H