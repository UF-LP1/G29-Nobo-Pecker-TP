/**
 * Project Untitled
 */


#include "PERSONA.h"

 /**
  * PERSONA implementation
  */

PERSONA::PERSONA(string na, string dni) : nombreApellido(na), DNI(dni) {
    this->efectivo = 0.0;
    this->app = 0.0;
    this->credito = 0.0;
    this->debito = 0.0;
    this->telefono = '0';
    this->mail = '0';
}

PERSONA::~PERSONA() {

}

void PERSONA::set_efectivo(double e) {
    this->efectivo = e;
    return;
}

void PERSONA::set_app(double mP) {
    this->app = mP;
    return;
}

void PERSONA::set_debito(double d) {
    this->debito = d;
    return;
}

void PERSONA::set_telefono(string t) {
    this->telefono = t;
    return;
}

void PERSONA::set_mail(string m) {
    this->mail = m;
    return;
}

double PERSONA::get_efectivo() {
    return this->efectivo;
}

double PERSONA::get_app() {
    return this->app;
}

double PERSONA::get_debito() {
    return this->debito;
}

double PERSONA::get_credito() {
    return this->credito;
}