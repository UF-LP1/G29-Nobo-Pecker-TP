/**
 * Project Untitled
 */


#ifndef _EMOSTRADOR_H
#define _EMOSTRADOR_H

#include "EMPLEADO.h"
#include "tipoEmpleado.h"
#include "CLIENTE.h"



class eMostrador : public EMPLEADO {
public:

	eMostrador(string na, string dni);
	~eMostrador();

	tipoEmpleado atenderCliente(CLIENTE c);

};

#endif //_EMOSTRADOR_H