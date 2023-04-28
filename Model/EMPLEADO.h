/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "PERSONA.h"


class EMPLEADO: public PERSONA {
public: 
    
/**
 * @param na
 * @param dni
 */
void EMPLEADO(string na, string dni);
    
/**
 * @param s
 */
void set_sueldo(double s);
    
/**
 * @param hT
 */
void set_horariosTrabajo(string hT);
    
double get_sueldo();
    
string get_horariosTrabajo();
protected: 
    double sueldo;
    string horariosTrabajo;
    
void EMPLEADO();
};

#endif //_EMPLEADO_H