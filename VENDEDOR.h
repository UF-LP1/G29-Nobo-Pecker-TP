#pragma once
#include "Model/EMPLEADO.h"
#include "Model/CLIENTE.h"

class VENDEDOR : public EMPLEADO{
public:
	virtual bool vender(CLIENTE* cliente, vector<PRODUCTO> productos, vector<unsigned int>cant) = 0;
};

