/**
 * Project Untitled
 */


#include "pMedicamentos.h"
#include <exception>

 /**
  * pMedicamentos implementation
  */

pMedicamentos::pMedicamentos(string n, string desc, bool vl) : PRODUCTO(n), ventaLibre(vl), descripcion(desc) {
}

pMedicamentos::~pMedicamentos() {

}


unsigned int pMedicamentos:: descuento_total(array<necesidadCliente,3> necesidades) {
	bool halleFarmacia = false;
	unsigned int descuento;
	for (int i = 0; i < 3; i++) {
// el medicamento especifica cierto descuento que se aplica para personas con obra social, se duplica para personas con pami (solo si es menor al 50%) y se anula para farmacia particular
		switch (necesidades[i]) {
		case farmaciaOS: {
			descuento = this->descuento;
			halleFarmacia = true;
			break;
		}
		case farmaciaP: {
			descuento = 0;
			halleFarmacia = true;
			break;
		}
		case PAMI: {
			try {
			if (this->descuento <= 50)
				descuento = this->descuento * 2;
			else 
				throw exception();
			}
			catch(exception& descuentoMayorAl50){ //si el descuento ya es mayor al 50% lanza una excepcion y se mantiene el descuento original
				descuento = this->descuento;
				break;
			}
			halleFarmacia = true;
			break;
		}
		default:
			break;
		}
		if (halleFarmacia)
			break;
	}
	return descuento;

}






