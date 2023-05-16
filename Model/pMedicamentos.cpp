/**
 * Project Untitled
 */


#include "pMedicamentos.h"

 /**
  * pMedicamentos implementation
  */

pMedicamentos::pMedicamentos(string n, string desc, bool vl) : PRODUCTO(n), ventaLibre(vl), descripcion(desc) {
}

pMedicamentos::~pMedicamentos() {

}


unsigned int pMedicamentos:: descuento_total(CLIENTE* cliente) {
	bool halleFarmacia = false;
	unsigned int descuento;
	for (int i = 0; i < 3; i++) {
// el medicamento especifica cierto descuento que se aplica para personas con obra social, se duplica para personas con pami (solo si es menor al 50%) y se anula para farmacia particular
		switch (cliente->get_nec()[i]) {
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
			if (this->descuento <= 50)
				descuento = this->descuento * 2;
			else
				descuento = this->descuento;
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






