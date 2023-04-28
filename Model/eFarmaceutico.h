/**
 * Project Untitled
 */


#ifndef _EFARMACEUTICO_H
#define _EFARMACEUTICO_H

#include "EMPLEADO.h"


class eFarmaceutico: public EMPLEADO {
public: 
    const tipoEmpleado f;
    
/**
 * @param na
 * @param dni
 * @param f
 */
void eFarmaceutico(string na, string dni, tipoEmpleado f);
    
/**
 * @param c
 * @param m
 * @param cant
 */
bool venderMedicamento(CLIENTE c, pMedicamento m, unsigned int cant);
protected: 
    
void eFarmaceutico();
};

#endif //_EFARMACEUTICO_H