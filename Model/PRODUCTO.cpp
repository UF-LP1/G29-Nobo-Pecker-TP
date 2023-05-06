/**
 * Project Untitled
 */


#include "PRODUCTO.h"

 /**
  * PRODUCTO implementation
  */

PRODUCTO::PRODUCTO(string n) :nombre(n) {
    this->stock = 0;
    this->precio = 0;
    this->descuento = 0;
    this->es_medicamento = false;
}

PRODUCTO::~PRODUCTO() {

}

void PRODUCTO::set_stock(int n) {
    this->stock = n;
    return;
}

void PRODUCTO::set_precio(float p) {
    this->precio = p;
    return;
}

void PRODUCTO::set_descuento(unsigned int d) {
    this->descuento = d;
    return;
}

unsigned int PRODUCTO::get_stock() {
    return this->stock;
}

bool PRODUCTO::get_es_medicamento() {
    return this->es_medicamento;
}

float PRODUCTO::get_precio() {
    return this->precio;
}

unsigned int PRODUCTO::get_descuento() {
    return this->descuento;
}