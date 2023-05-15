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


/*
            this->carrito.push_back(g[i]); //agrego la golosina en el carrito (vector de productos)
            this->cantidades.push_back(cant[i]); //agrego la cantidad de esa golosina que se lleva en el vector de cantidades
            g[i].set_stock(g[i].get_stock() - cant[i]);
*/