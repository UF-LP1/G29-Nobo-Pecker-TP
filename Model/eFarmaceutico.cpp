/**
 * Project Untitled
 //*/


#include "eFarmaceutico.h"

 /**
  * eFarmaceutico implementation
  */


eFarmaceutico::eFarmaceutico(string na, string dni, tipoEmpleado f, string tel, string mail) :VENDEDOR(na, dni, tel, mail), f(f) {

}

eFarmaceutico::~eFarmaceutico() {

}

bool vender(CLIENTE* cliente, vector <PRODUCTO> productos, vector <unsigned int> cant) {

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
