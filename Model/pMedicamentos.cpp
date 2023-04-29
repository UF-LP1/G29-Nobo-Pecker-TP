/**
 * Project Untitled
 */


#include "pMedicamentos.h"

 /**
  * pMedicamentos implementation
  */

pMedicamentos::pMedicamentos(string n, string d, bool vl) : PRODUCTO(n), ventaLibre(vl), descripcion(d) {
	this->es_medicamento = true;
}

pMedicamentos::~pMedicamentos() {

}
