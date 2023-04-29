/**
 * Project Untitled
 //*/


#include "eFarmaceutico.h"

 /**
  * eFarmaceutico implementation
  */


eFarmaceutico::eFarmaceutico(string na, string dni, tipoEmpleado f, string tel, string mail) :EMPLEADO(na, dni, tel, mail), f(f) {

}

eFarmaceutico::~eFarmaceutico() {

}

bool eFarmaceutico::venderMedicamento(CLIENTE c, vector<pMedicamentos> m,vector<unsigned int> cant) { //analogo a las demas funciones de vender
    
    //recorro la lista de medicamentos que quiero comprar para ir agregandolos al carrito
    for (int i = 0; i < m.size(); i++)
    {   
        if (m[i].get_stock() >= cant[i]) //siempre y cuando tenga stock
        {
            c.carrito.push_back(m[i]); //agrego el medicamento
            c.cantidades.push_back(cant[i]); //agrego la cantidad que se quiere llevar
            m[i].set_stock(m[i].get_stock() - cant[i]);//le resto al stock anterior del producto la cantidad que el cliente se lleva
        }
        else return false;
    }
    
    return true;
}
/*
            this->carrito.push_back(g[i]); //agrego la golosina en el carrito (vector de productos)
            this->cantidades.push_back(cant[i]); //agrego la cantidad de esa golosina que se lleva en el vector de cantidades
            g[i].set_stock(g[i].get_stock() - cant[i]);
*/