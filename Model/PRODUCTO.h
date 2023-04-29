/**
 * Project Untitled
 */


#ifndef _PRODUCTO_H
#define _PRODUCTO_H

#include "PERSONA.h"

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
    bool get_es_medicamento();
protected:
    const string nombre;
    unsigned int stock;
    double precio;
    unsigned int descuento;
    bool es_medicamento; //para hacer descuentos por obra social <3

};

#endif //_PRODUCTO_H