/**
 * Project Untitled
 //*/


#ifndef _EFARMACEUTICO_H
#define _EFARMACEUTICO_H

#include "EMPLEADO.h"
#include "CLIENTE.h"
#include "tipoEmpleado.h"
#include "pMedicamentos.h"


class eFarmaceutico : public EMPLEADO {
public:

    const tipoEmpleado f;

    eFarmaceutico(string na, string dni, tipoEmpleado f, string tel, string mail); //C
    ~eFarmaceutico(); //D

    bool venderMedicamento(CLIENTE *c, vector<pMedicamentos> m, vector<unsigned int> cant);

};

#endif //_EFARMACEUTICO_H
