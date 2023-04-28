/**
 * Project Untitled
 */


#include "ePerfumeria.h"

 /**
  * ePerfumeria implementation
  */


ePerfumeria::ePerfumeria(string na, string dni, tipoEmpleado p, double ef, double app, double deb, double cr, string tel, string mail) : EMPLEADO(na, dni, ef, app, deb, cr, tel, mail), p(p) {

}

ePerfumeria::~ePerfumeria() {

}

bool ePerfumeria::venderProducto(CLIENTE c, pPerfumeria p) {
    //idem farm
    return false;
}