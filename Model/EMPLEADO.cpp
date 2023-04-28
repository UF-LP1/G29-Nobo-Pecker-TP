/**
 * Project Untitled
 */


#include "EMPLEADO.h"

 /**
  * EMPLEADO implementation
  */


EMPLEADO::EMPLEADO(string na, string dni, double ef, double app, double deb, double cr, string tel, string mail) : PERSONA(na, dni, ef, app, deb, cr, tel, mail) {
    this->sueldo = 0.0;
    this->horariosTrabajo = "0";
}

EMPLEADO::~EMPLEADO() {

}

void EMPLEADO::set_sueldo(double s) {
    this->sueldo = s;
    return;
}

void EMPLEADO::set_horariosTrabajo(string hT) {
    this->horariosTrabajo = hT;
    return;
}

double EMPLEADO::get_sueldo() {
    return this->sueldo;
}

string EMPLEADO::get_horariosTrabajo() {
    return this->horariosTrabajo;
}