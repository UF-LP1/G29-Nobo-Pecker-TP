/**
 * Project Untitled
 */


#include "eOrtopedia.h"

 /**
  * eOrtopedia implementation
  */


eOrtopedia::eOrtopedia(string na, string dni, tipoEmpleado o, string tel, string mail) : EMPLEADO(na, dni, tel, mail), o(o) {

}

eOrtopedia::~eOrtopedia() {

}

bool eOrtopedia::venderProducto(CLIENTE c, vector<pOrtopedia> p, vector<unsigned int> cant) {
    
    return false;
}