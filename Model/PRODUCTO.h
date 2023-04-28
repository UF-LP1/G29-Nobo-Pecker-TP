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


    void set_stock(int n);
    void set_precio(double p);
    void set_descuento(unsigned int d);
    unsigned int get_stock();
    double get_precio();
    unsigned int get_descuento();

protected:
    const string nombre;
    unsigned int stock;
    double precio;
    unsigned int descuento;

};

#endif //_PRODUCTO_H