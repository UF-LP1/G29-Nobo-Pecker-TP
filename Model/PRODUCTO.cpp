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

float PRODUCTO::get_precio() {
    return this->precio;
}

unsigned int PRODUCTO::get_descuento() {
    return this->descuento;
}

unsigned int PRODUCTO::descuento_total(CLIENTE* cliente) { //para ortopedia y perfumeria es unicamente el descuento propio del producto
                                                            //en medicamentos la redefinimos para que se fije si tiene obra social, pami o si es particular
    return this->descuento;
}