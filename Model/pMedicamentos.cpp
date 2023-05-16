/**
 * Project Untitled
 */


#include "pMedicamentos.h"

 /**
  * pMedicamentos implementation
  */

pMedicamentos::pMedicamentos(string n, string desc, bool vl) : PRODUCTO(n), ventaLibre(vl), descripcion(desc) {
	this->es_medicamento = true;
}

pMedicamentos::~pMedicamentos() {

}


unsigned int pMedicamentos:: descuento_total(CLIENTE* cliente) {
	
	for (int i = 0; i < size; i++) {
		unsigned int descuento;
		// el medicamento especifica cierto descuento que se aplica para personas con obra social, se duplica para personas con pami (solo si es menor al 50%) y se anula para farmacia particular
		switch (cliente->get_nec()[i]) {
		case farmaciaOS: {
			descuento = this->descuento;
			break;
		}
		case farmaciaP: {
			descuento = 0;
			break;
		}
		case PAMI: {
			if (this->descuento <= 50)
				descuento = this->descuento * 2;
			else
				descuento = this->descuento;
			break;
		}
		default:
			break;
		}
	}
	

}
//farmaciaOS, farmaciaP, PAMI, perfumeria, ortopedia





