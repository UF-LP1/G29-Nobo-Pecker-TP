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
