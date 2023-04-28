/**
 * Project Untitled
 */


#ifndef _PRODUCTO_H
#define _PRODUCTO_H

class PRODUCTO {
public: 
    
/**
 * @param n
 */
void PRODUCTO(string n);
    
/**
 * @param n
 */
void set_stock(int n);
    
/**
 * @param p
 */
void set_precio(double p);
    
/**
 * @param d
 */
void set_descuento(unsigned int d);
    
unsigned int get_stock();
    
double get_precio();
    
unsigned int get_descuento();
protected: 
    const string nombre;
    unsigned int stock;
    double precio;
    unsigned int descuento;
    
void PRODUCTO();
};

#endif //_PRODUCTO_H