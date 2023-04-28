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
    //getteo el sueldo de empleado y le sumo plata en la billetera y resto ese monto de los fondos de la farmacia
    //devuelvo si false si no existe el empleado, la farmacia no tiene fondos, sueldo negativo, etc.
    return false;
}

bool FARMACIA::actualizarSueldo(EMPLEADO e, int porcentaje) {
    //le paso una lista de empleados (ej los de limpieza) y me cambia el sueldo segun el porcentaje
    //devuelvo false si el porcentaje es menor a -100, si hay nullptr, etc
    return false;
}

bool FARMACIA::actualizarStock(PRODUCTO p, int n) {
    //accedo a los productos que quiero tocar y  les sumo o resto n en stock
    //devuelvo false si quiero restar mas de lo que hay, si no existe el producto, si hay nullptr
    return false;
}