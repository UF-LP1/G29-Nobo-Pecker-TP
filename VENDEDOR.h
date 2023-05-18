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

inline VENDEDOR::VENDEDOR(string na, string dni, string tel, string mail) : EMPLEADO(na, dni, tel, mail) {}

inline VENDEDOR::~VENDEDOR() {}

inline void VENDEDOR::vender(CLIENTE* cliente, vector<PRODUCTO> productos, vector<unsigned int>cant) {
	//recorro el vector de productos y de cantidades y lo agrego al carrito del cliente
	int i = 0;
	try {
	for (i = 0; i < productos.size(); i++) {
		if (productos[i].get_stock() >= cant[i]) {
			cliente->carrito.push_back(productos[i]);
			cliente->cantidades.push_back(cant[i]);
			productos[i].set_stock(productos[i].get_stock() - cant[i]);
		}
		else {
			throw exception();
		}
	}
	}
	catch (exception& NoHayStock) {
		cout << "No hay stock suficiente de " << productos[i].nombre << endl;
	}

	return ;
}