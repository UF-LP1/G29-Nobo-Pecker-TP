/**
 * Project Untitled
 */


#include "ePerfumeria.h"

 /**
  * ePerfumeria implementation
  */


ePerfumeria::ePerfumeria(string na, string dni, tipoEmpleado p) : EMPLEADO(na, dni), p(p) {

}

ePerfumeria::~ePerfumeria() {

}

bool ePerfumeria::venderProducto(CLIENTE c, pPerfumeria p) {
    return false;
}