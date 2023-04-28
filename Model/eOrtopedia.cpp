/**
 * Project Untitled
 */


#include "eOrtopedia.h"

 /**
  * eOrtopedia implementation
  */


eOrtopedia::eOrtopedia(string na, string dni, tipoEmpleado o) : EMPLEADO(na, dni), o(o) {

}

eOrtopedia::~eOrtopedia() {

}

bool eOrtopedia::venderProducto(CLIENTE c, pOrtopedia p) {
    return false;
}