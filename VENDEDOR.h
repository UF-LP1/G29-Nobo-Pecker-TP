#pragma once
#include "Model/EMPLEADO.h"
#include "Model/CLIENTE.h"

class VENDEDOR : public EMPLEADO{
public:
	VENDEDOR(string na, string dni, string tel, string mail);
	~VENDEDOR();

  bool vender(CLIENTE* cliente, vector<PRODUCTO> productos, vector<unsigned int>cant);
};

inline VENDEDOR::VENDEDOR(string na, string dni, string tel, string mail): EMPLEADO(na, dni, tel, mail) {}

inline VENDEDOR::~VENDEDOR() {}

inline bool VENDEDOR::vender(CLIENTE* cliente, vector<PRODUCTO> productos, vector<unsigned int>cant) {
	//recorro el vector de productos y de cantidades y lo agrego al carrito del cliente

	for (int i = 0; i < productos.size(); i++) {
		if (productos[i].get_stock() >= cant[i]) {
			cliente->carrito.push_back(productos[i]);
			cliente->cantidades.push_back(cant[i]);
			productos[i].set_stock(productos[i].get_stock() - cant[i]);
		}
		else
			return false;
	}

	return true;
}