/**
 * Project Untitled
 */


#ifndef _ELIMPIEZA_H
#define _ELIMPIEZA_H

#include "EMPLEADO.h"
#include "CLIENTE.h"

class eLimpieza : public EMPLEADO {
public:

	eLimpieza(string na, string dni); //C
	~eLimpieza(); //D

};

#endif //_ELIMPIEZA_H