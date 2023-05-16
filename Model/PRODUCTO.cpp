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

void PRODUCTO::set_precio(float precio) {
    this->precio = precio;
    return;
}

void PRODUCTO::set_descuento(unsigned int descuento) {
    this->descuento = descuento;
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

unsigned int PRODUCTO::descuento_total(CLIENTE* cliente) {
    for (int i = 0; i < cliente->carrito.size; i++) {

   }
}