/**
 * Project Untitled
 //*/


#include "EMPLEADO.h"

 /**
  * EMPLEADO implementation
  */


EMPLEADO::EMPLEADO(string na, string dni, string tel, string mail) : PERSONA(na, dni, tel, mail) {
    this->sueldo = 0.0;
    this->horariosTrabajo = "0";
}

EMPLEADO::~EMPLEADO() {

}

void EMPLEADO::set_sueldo(float sueldo) {
    this->sueldo = sueldo;
    return;
}

void EMPLEADO::set_horariosTrabajo(string horarioT) {
    this->horariosTrabajo = horarioT;
    return;
}

float EMPLEADO::get_sueldo() {
    return this->sueldo;
}

string EMPLEADO::get_horariosTrabajo() {
    return this->horariosTrabajo;
}