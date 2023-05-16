/**
 * Project Untitled
// */


#ifndef _ELIMPIEZA_H
#define _ELIMPIEZA_H

#include "EMPLEADO.h"
#include "FARMACIA.h"

class eLimpieza : public EMPLEADO {
public:

	eLimpieza(string na, string dni, string tel, string mail); //C
	~eLimpieza(); //D
	void limpiar(FARMACIA farmacia);
};

#endif //_ELIMPIEZA_H