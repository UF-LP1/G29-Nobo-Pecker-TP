/**
 * Project Untitled
// */


#include "PERSONA.h"

 /**
  * PERSONA implementation
  */

PERSONA::PERSONA(string na, string dni, string tel, string mail) : nombreApellido(na), DNI(dni) {
    this->telefono = tel;
    this->mail = mail;
}

PERSONA::~PERSONA() {

}

void PERSONA::set_telefono(string telefono) {
    this->telefono = telefono;
    return;
}

void PERSONA::set_mail(string mail) {
    this->mail = mail;
    return;
}

string PERSONA::get_mail() {
    return this->mail;
}

string PERSONA::get_telefono() {
    return this->telefono;
}