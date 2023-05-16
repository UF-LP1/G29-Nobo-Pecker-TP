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

void FARMACIA::set_direccion(string direc) {
    this->direccion = direc;
    return;
}

void FARMACIA::set_horarioSemana(string horarioS) {
    this->horarioSemana = horarioS;
    return;
}

void FARMACIA::set_horarioFinde(string horarioF) {
    this->horarioFinde = horarioF;
    return;
}

void FARMACIA::set_fondos(float fondos) {
    this->fondos = fondos;
    return;
}

void FARMACIA::set_limpio(bool limpio) {
    this->limpio = limpio;
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

float FARMACIA::get_fondos() {
    return this->fondos;
}

bool FARMACIA::get_limpio() {
    return this->limpio;
}
