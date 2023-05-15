/**
 * Project Untitled
 //*/


#ifndef _EFARMACEUTICO_H
#define _EFARMACEUTICO_H

#include "VENDEDOR.h"
#include "CLIENTE.h"
#include "tipoEmpleado.h"
#include "pMedicamentos.h"


class eFarmaceutico : public VENDEDOR {
public:

    const tipoEmpleado f;

    eFarmaceutico(string na, string dni, tipoEmpleado f, string tel, string mail); //C
    ~eFarmaceutico(); //D

    bool vender(CLIENTE* cliente, vector <PRODUCTO> productos, vector <unsigned int> cant);
  

};

#endif //_EFARMACEUTICO_H
