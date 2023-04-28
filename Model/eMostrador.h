/**
 * Project Untitled
 */


#ifndef _EMOSTRADOR_H
#define _EMOSTRADOR_H

#include "EMPLEADO.h"


class eMostrador: public EMPLEADO {
public: 
    
/**
 * @param na
 * @param dni
 */
void eMostrador(string na, string dni);
    
/**
 * @param c
 */
tipoEmpleado atenderCliente(CLIENTE c);
protected: 
    
void eMostrador();
};

#endif //_EMOSTRADOR_H