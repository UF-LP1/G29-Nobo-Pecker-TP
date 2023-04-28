/**
 * Project Untitled
 */


#ifndef _EFARMACEUTICO_H
#define _EFARMACEUTICO_H

#include "EMPLEADO.h"
#include "tipoEmpleado.h"
#include "CLIENTE.h"
#include "pMedicamentos.h"


class eFarmaceutico : public EMPLEADO {
public:

    const tipoEmpleado f;

    eFarmaceutico(string na, string dni, tipoEmpleado f, double ef, double app, double deb, double cr, string tel, string mail); //C
    ~eFarmaceutico(); //D

    bool venderMedicamento(CLIENTE c, pMedicamentos m, unsigned int cant);

};

#endif //_EFARMACEUTICO_H
