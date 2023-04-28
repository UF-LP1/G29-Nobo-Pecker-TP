/**
 * Project Untitled
 */


#include "eFarmaceutico.h"

 /**
  * eFarmaceutico implementation
  */


eFarmaceutico::eFarmaceutico(string na, string dni, tipoEmpleado f) :EMPLEADO(na, dni), f(f) {

}

eFarmaceutico::~eFarmaceutico() {

}

bool eFarmaceutico::venderMedicamento(CLIENTE c, pMedicamentos m, unsigned int cant) {
    return false;
}