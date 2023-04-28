/**
 * Project Untitled
 */


#include "PERSONA.h"

 /**
  * PERSONA implementation
  */

PERSONA::PERSONA(string na, string dni, double ef, double app, double deb, double cr, string tel, string mail) : nombreApellido(na), DNI(dni) {
    this->efectivo = ef;
    this->app = app;
    this->credito = cr;
    this->debito = deb;
    this->telefono = tel;
    this->mail = mail;
}

PERSONA::~PERSONA() {

}

void PERSONA::set_efectivo(double e) {
    this->efectivo = e;
    return;
}

void PERSONA::set_credito(double cr) {
    this->credito = cr;
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

string PERSONA::get_mail() {
    return this->mail;
}

string PERSONA::get_telefono() {
    return this->telefono;
}