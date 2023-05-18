/**
 * Project Untitled
 */


#include "RECETA.h"

 /**
  * RECETA implementation
  */

RECETA::RECETA(string medico, string fecha, string diagnostico, string dniCliente, string medicamento) : medico(medico), fecha(fecha), diagnostico(diagnostico), dniCliente(dniCliente), medicamento(medicamento){
}

RECETA::~RECETA() {

}

string RECETA::get_dni() {
	return this->dniCliente;
}

string RECETA::get_medicamento() {
	return this->medicamento;
}