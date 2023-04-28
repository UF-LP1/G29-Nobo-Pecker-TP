/**
 * Project Untitled
 */


#ifndef _ELIMPIEZA_H
#define _ELIMPIEZA_H

#include "EMPLEADO.h"
#include "CLIENTE.h"

class eLimpieza : public EMPLEADO {
public:

	eLimpieza(string na, string dni, double ef, double app, double deb, double cr, string tel, string mail); //C
	~eLimpieza(); //D

};

#endif //_ELIMPIEZA_H