/**
 * Project Untitled
 //*/


#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "PERSONA.h"
#include "pPerfumeria.h"

class EMPLEADO : public PERSONA {
public:

    EMPLEADO(string na, string dni, string tel, string mail);
    ~EMPLEADO();

    void set_sueldo(float sueldo);
    void set_horariosTrabajo(string horarioT);
    float get_sueldo();
    string get_horariosTrabajo();
protected:
    float sueldo;
    string horariosTrabajo;

};

#endif //_EMPLEADO_H