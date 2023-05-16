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

    void set_sueldo(double sueldo);
    void set_horariosTrabajo(string horarioT);
    double get_sueldo();
    string get_horariosTrabajo();
protected:
    double sueldo;
    string horariosTrabajo;

};

#endif //_EMPLEADO_H