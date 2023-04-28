/**
 * Project Untitled
 */


#include "eFarmaceutico.h"

 /**
  * eFarmaceutico implementation
  */


eFarmaceutico::eFarmaceutico(string na, string dni, tipoEmpleado f, double ef, double app, double deb, double cr, string tel, string mail) :EMPLEADO(na, dni, ef, app, deb, cr, tel, mail), f(f) {

}

eFarmaceutico::~eFarmaceutico() {

}

bool eFarmaceutico::venderMedicamento(CLIENTE c, pMedicamentos m, unsigned int cant, unsigned int n) {
    //es lo mismo que comprar golosinas, genera la lista de medicamentos y me la suma al carrito
    //devuelvo false si nullptr, no hay stock, no existe, etc.
    return false;
}