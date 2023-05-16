/**
 * Project Untitled
 */


#ifndef _PRODUCTO_H
#define _PRODUCTO_H

#include "CLIENTE.h"

class PRODUCTO {
public:

    PRODUCTO(string n);
    ~PRODUCTO();

    const string nombre;
    void set_stock(int n);
    void set_precio(float precio);
    void set_descuento(unsigned int descuento);
    unsigned int get_stock();
    float get_precio();
    unsigned int get_descuento();
    virtual unsigned int descuento_total(CLIENTE* cliente);

protected:
   
    unsigned int stock;
    float precio;
    unsigned int descuento;

};

#endif //_PRODUCTO_H