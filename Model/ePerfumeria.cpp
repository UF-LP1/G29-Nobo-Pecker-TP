/**
 * Project Untitled
 //*/


#include "ePerfumeria.h"

 /**
  * ePerfumeria implementation
  */


ePerfumeria::ePerfumeria(string na, string dni, tipoEmpleado p, string tel, string mail) : EMPLEADO(na, dni, tel, mail), p(p) {

}

ePerfumeria::~ePerfumeria() {

}

bool ePerfumeria::venderProducto(CLIENTE *c, vector<pPerfumeria> p, vector<unsigned int>cant) { //analogo a las demas funciones de vender
    
    for (int i = 0; i < p.size(); i++)
    {
        if (p[i].get_stock() >= cant[i]) //si hay stock
        {
            c->carrito.push_back(p[i]); //agrego el producto
            c->cantidades.push_back(cant[i]); //agrego la cantidad que se lleva de ese producto
            p[i].set_stock(p[i].get_stock() - cant[i]);//le resto al stock anterior del producto la cantidad que el cliente se lleva
        }
        else return false;
    }
   
    return true;
}