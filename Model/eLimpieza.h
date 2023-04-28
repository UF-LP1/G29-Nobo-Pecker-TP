/**
 * Project Untitled
 */


#ifndef _ELIMPIEZA_H
#define _ELIMPIEZA_H

#include "EMPLEADO.h"


class eLimpieza: public EMPLEADO {
public: 
    
/**
 * @param na
 * @param dni
 */
void eLimpieza(string na, string dni);
protected: 
    
void eLimpieza();
};

#endif //_ELIMPIEZA_H