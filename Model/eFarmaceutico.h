/**
 * Project Untitled
 //*/


#ifndef _EFARMACEUTICO_H
#define _EFARMACEUTICO_H

#include "CLIENTE.h"
#include "tipoEmpleado.h"
#include "pMedicamentos.h"
#include "../VENDEDOR.h"


class eFarmaceutico : public VENDEDOR {
public:

    const tipoEmpleado f;

    eFarmaceutico(string na, string dni, tipoEmpleado f, string tel, string mail); //C
    ~eFarmaceutico(); //D

   
  

};

#endif //_EFARMACEUTICO_H
