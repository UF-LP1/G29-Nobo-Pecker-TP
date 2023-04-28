/**
 * Project Untitled
 */


#include "eOrtopedia.h"

 /**
  * eOrtopedia implementation
  */


eOrtopedia::eOrtopedia(string na, string dni, tipoEmpleado o, double ef, double app, double deb, double cr, string tel, string mail) : EMPLEADO(na, dni, ef, app, deb, cr, tel, mail), o(o) {

}

eOrtopedia::~eOrtopedia() {

}

bool eOrtopedia::venderProducto(CLIENTE c, pOrtopedia** p, unsigned int** cant, unsigned int* n) {
    //idem farm
    return false;
}