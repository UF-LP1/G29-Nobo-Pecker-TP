/**
 * Project Untitled
 */


#ifndef _EMOSTRADOR_H
#define _EMOSTRADOR_H

#include "EMPLEADO.h"
#include "CLIENTE.h"
#include "tipoEmpleado.h"




class eMostrador : public EMPLEADO {
public:

	eMostrador(string na, string dni, string tel, string mail);
	~eMostrador();

	tipoEmpleado atenderCliente(CLIENTE c);

};

#endif //_EMOSTRADOR_H