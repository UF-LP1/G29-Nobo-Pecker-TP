/**
 * Project Untitled
 */


#include "eOrtopedia.h"

 /**
  * eOrtopedia implementation
  */


eOrtopedia::eOrtopedia(string na, string dni, tipoEmpleado o, string tel, string mail) : EMPLEADO(na, dni, tel, mail), o(o) {

}

eOrtopedia::~eOrtopedia() {

}

bool eOrtopedia::venderProducto(CLIENTE c, vector<pOrtopedia> o, vector<unsigned int> cant) { //analogo a las demas funciones de vender
    
    for (int i = 0; i < o.size(); i++)
    {
        if (o[i].get_stock() >= cant[i]) //me fijo si hay stock 
        {
            c.carrito.push_back(o[i]); //agrego el producto
            c.cantidades.push_back(cant[i]); //agrego su cantidad
            o[i].set_stock(o[i].get_stock() - cant[i]);//le resto al stock anterior del producto la cantidad que el cliente se lleva
        }
        else return false;
    }
    
    return true;
    
}
