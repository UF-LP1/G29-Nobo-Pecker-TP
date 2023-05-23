/**
 * Project Untitled
 */


#ifndef _PRODUCTO_H
#define _PRODUCTO_H

#include "PERSONA.h"
#include "necesidadCliente.h"
#include <array>


class PRODUCTO {
public:

    PRODUCTO(string n);
    ~PRODUCTO();

    std:: string nombre;
    void set_stock(int n);
    void set_precio(float precio);
    void set_descuento(unsigned int descuento);
    unsigned int get_stock();
    float get_precio();
    unsigned int get_descuento();
    virtual unsigned int descuento_total(array<necesidadCliente, 3> necesidades);

protected:
   
    unsigned int stock;
    float precio;
    unsigned int descuento;

};

#endif //_PRODUCTO_H