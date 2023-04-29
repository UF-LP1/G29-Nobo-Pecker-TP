/**
 * Project Untitled
 */


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
        }
        else return false;
    }
    
    return true;
}