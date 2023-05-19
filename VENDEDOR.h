#pragma once
#include "Model/EMPLEADO.h"
#include "Model/CLIENTE.h"
#include <exception>

class VENDEDOR : public EMPLEADO{
public:
	VENDEDOR(string na, string dni, string tel, string mail);
	~VENDEDOR();

  void vender(CLIENTE* cliente, vector<PRODUCTO> productos, vector<unsigned int>cant);
};
