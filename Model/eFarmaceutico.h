/**
 * Project Untitled
 */


#ifndef _EFARMACEUTICO_H
#define _EFARMACEUTICO_H

#include "EMPLEADO.h"
#include "CLIENTE.h"
#include "tipoEmpleado.h"
#include "pMedicamentos.h"


class eFarmaceutico : public EMPLEADO {
public:

    const tipoEmpleado farmaceutico_;

    eFarmaceutico(string na, string dni, tipoEmpleado f, double ef, double app, double deb, double cr, string tel, string mail); //C
    ~eFarmaceutico(); //D

    bool venderMedicamento(CLIENTE c, pMedicamentos** m, unsigned int** cant, unsigned int* n);

};

#endif //_EFARMACEUTICO_H
