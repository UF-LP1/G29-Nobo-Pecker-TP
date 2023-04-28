/**
 * Project Untitled
 */


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

void PERSONA::set_telefono(string t) {
    this->telefono = t;
    return;
}

void PERSONA::set_mail(string m) {
    this->mail = m;
    return;
}

string PERSONA::get_mail() {
    return this->mail;
}

string PERSONA::get_telefono() {
    return this->telefono;
}