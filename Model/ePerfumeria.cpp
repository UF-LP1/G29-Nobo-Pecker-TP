/**
 * Project Untitled
 */


#include "ePerfumeria.h"

 /**
  * ePerfumeria implementation
  */


ePerfumeria::ePerfumeria(string na, string dni, tipoEmpleado p, string tel, string mail) : EMPLEADO(na, dni, tel, mail), p(p) {

}

ePerfumeria::~ePerfumeria() {

}

bool ePerfumeria::venderProducto(CLIENTE c, vector<pPerfumeria> p, vector<unsigned int>, unsigned int *n) {
    //idem farm
    return false;
}