/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H

#include "PERSONA.h"


class EMPLEADO : public PERSONA {
public:

    EMPLEADO(string na, string dni, double ef, double app, double deb, double cr, string tel, string mail);
    ~EMPLEADO();

    void set_sueldo(double s);
    void set_horariosTrabajo(string hT);
    double get_sueldo();
    string get_horariosTrabajo();
protected:
    double sueldo;
    string horariosTrabajo;

};

#endif //_EMPLEADO_H