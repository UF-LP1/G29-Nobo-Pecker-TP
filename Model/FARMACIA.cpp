/**
 * Project Untitled
 */


#include "FARMACIA.h"

 /**
  * FARMACIA implementation
  */


FARMACIA::FARMACIA(string n) :nombre(n) {
    this->direccion = '0';
    this->horarioSemana = '0';
    this->horarioFinde = '0';
    this->fondos = 0.0;
}

FARMACIA::~FARMACIA() {

}

void FARMACIA::set_direccion(string d) {
    this->direccion = d;
    return;
}

void FARMACIA::set_horarioSemana(string hs) {
    this->horarioSemana = hs;
    return;
}

void FARMACIA::set_horarioFinde(string hf) {
    this->horarioFinde = hf;
    return;
}

void FARMACIA::set_fondos(double f) {
    this->fondos = f;
    return;
}

string FARMACIA::get_direccion() {
    return this->direccion;
}

string FARMACIA::get_horarioSemana() {
    return this->horarioSemana;
}

string FARMACIA::get_horarioFinde() {
    return this->horarioFinde;
}

double FARMACIA::get_fondos() {
    return this->fondos;
}

bool FARMACIA::pagarEmpleado(EMPLEADO e) {
    return false;
}

bool FARMACIA::actualizarSueldo(EMPLEADO e) {
    return false;
}

bool FARMACIA::actualizarStock(PRODUCTO p, int n) {
    return false;
}