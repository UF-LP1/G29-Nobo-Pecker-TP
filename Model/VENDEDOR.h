#pragma once
#include "EMPLEADO.h"
#include "CLIENTE.h"

class VENDEDOR : public EMPLEADO{
public:
	VENDEDOR(string na, string dni, string tel, string mail);
	~VENDEDOR();

	virtual bool vender(CLIENTE* cliente, vector<PRODUCTO> productos, vector<unsigned int>cant) = 0;
};

