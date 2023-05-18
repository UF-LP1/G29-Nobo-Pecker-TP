/**
 * Project Untitled
 */


#include "RECETA.h"

 /**
  * RECETA implementation
  */

RECETA::RECETA(string medico, string fecha, string diagnostico, string dniCliente, pMedicamentos medicamento) : medico(medico), fecha(fecha), diagnostico(diagnostico), dniCliente(dniCliente), pMedicamentos(medicamento) {

}

RECETA::~RECETA() {

}

string RECETA::get_dni() {
	return this->dniCliente;
}

pMedicamentos RECETA::get_medicamento() {
	return this->medicamennto;
}